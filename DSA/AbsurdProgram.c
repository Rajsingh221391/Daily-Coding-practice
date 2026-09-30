#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#define BUFFER_SIZE 4096
#define WORD1_LEN 5
#define WORD2_LEN 5
#define SEPARATOR_LEN 1
#define NEWLINE_LEN 1
#define TOTAL_LEN (WORD1_LEN + SEPARATOR_LEN + WORD2_LEN + NEWLINE_LEN)
#define MAX_RETRIES 100
#define FACTORIAL_LIMIT 10
#define MAGIC_NUMBER 42
#define ASCII_A 65
#define ASCII_a 97
#define ASCII_SPACE 32
#define ASCII_NEWLINE 10
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define FAILURE 1

typedef struct {
    char data[BUFFER_SIZE];
    int length;
    int capacity;
    int is_valid;
} StringBuffer;

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    Point3D position;
    Point3D velocity;
    double mass;
    int active;
} Particle;

typedef struct {
    Particle particles[100];
    int count;
    double simulation_time;
} ParticleSystem;

typedef enum {
    STATE_INIT = 0,
    STATE_LOADING = 1,
    STATE_PROCESSING = 2,
    STATE_VALIDATING = 3,
    STATE_OUTPUT = 4,
    STATE_CLEANUP = 5,
    STATE_ERROR = 99
} AppState;

typedef struct {
    AppState state;
    int retry_count;
    time_t start_time;
    time_t end_time;
    char error_message[256];
} AppContext;

static StringBuffer g_buffer;
static AppContext g_context;
static ParticleSystem g_system;
static int g_initialized = FALSE;

void initialize_string_buffer(StringBuffer *buf) {
    memset(buf->data, 0, BUFFER_SIZE);
    buf->length = 0;
    buf->capacity = BUFFER_SIZE;
    buf->is_valid = TRUE;
}

void destroy_string_buffer(StringBuffer *buf) {
    memset(buf->data, 0, BUFFER_SIZE);
    buf->length = 0;
    buf->capacity = 0;
    buf->is_valid = FALSE;
}

int string_buffer_append(StringBuffer *buf, char c) {
    if (!buf->is_valid) return FAILURE;
    if (buf->length >= buf->capacity - 1) return FAILURE;
    buf->data[buf->length] = c;
    buf->length++;
    buf->data[buf->length] = '\0';
    return SUCCESS;
}

int string_buffer_set(StringBuffer *buf, const char *str) {
    if (!buf->is_valid) return FAILURE;
    int len = (int)strlen(str);
    if (len >= buf->capacity) return FAILURE;
    memcpy(buf->data, str, len);
    buf->length = len;
    buf->data[len] = '\0';
    return SUCCESS;
}

const char *string_buffer_get(const StringBuffer *buf) {
    if (!buf->is_valid) return "";
    return buf->data;
}

int string_buffer_length(const StringBuffer *buf) {
    if (!buf->is_valid) return 0;
    return buf->length;
}

int string_buffer_is_empty(const StringBuffer *buf) {
    if (!buf->is_valid) return TRUE;
    return (buf->length == 0) ? TRUE : FALSE;
}

void string_buffer_clear(StringBuffer *buf) {
    if (!buf->is_valid) return;
    memset(buf->data, 0, BUFFER_SIZE);
    buf->length = 0;
}

Point3D create_point(int x, int y, int z) {
    Point3D p;
    p.x = x;
    p.y = y;
    p.z = z;
    return p;
}

double point_distance(const Point3D *a, const Point3D *b) {
    double dx = (double)(a->x - b->x);
    double dy = (double)(a->y - b->y);
    double dz = (double)(a->z - b->z);
    return sqrt(dx * dx + dy * dy + dz * dz);
}

void point_translate(Point3D *p, int dx, int dy, int dz) {
    p->x += dx;
    p->y += dy;
    p->z += dz;
}

int point_is_origin(const Point3D *p) {
    return (p->x == 0 && p->y == 0 && p->z == 0) ? TRUE : FALSE;
}

Particle create_particle(int x, int y, int z, double mass) {
    Particle p;
    p.position = create_point(x, y, z);
    p.velocity = create_point(0, 0, 0);
    p.mass = mass;
    p.active = TRUE;
    return p;
}

void particle_update(Particle *p, double dt) {
    if (!p->active) return;
    p->position.x += (int)(p->velocity.x * dt);
    p->position.y += (int)(p->velocity.y * dt);
    p->position.z += (int)(p->velocity.z * dt);
}

void particle_system_init(ParticleSystem *sys) {
    memset(sys, 0, sizeof(ParticleSystem));
    sys->count = 0;
    sys->simulation_time = 0.0;
}

void particle_system_add(ParticleSystem *sys, const Particle *p) {
    if (sys->count >= 100) return;
    sys->particles[sys->count] = *p;
    sys->count++;
}

void particle_system_update(ParticleSystem *sys, double dt) {
    for (int i = 0; i < sys->count; i++) {
        particle_update(&sys->particles[i], dt);
    }
    sys->simulation_time += dt;
}

void particle_system_destroy(ParticleSystem *sys) {
    memset(sys, 0, sizeof(ParticleSystem));
}

void app_context_init(AppContext *ctx) {
    ctx->state = STATE_INIT;
    ctx->retry_count = 0;
    ctx->start_time = time(NULL);
    ctx->end_time = 0;
    memset(ctx->error_message, 0, 256);
}

void app_context_set_error(AppContext *ctx, const char *msg) {
    strncpy(ctx->error_message, msg, 255);
    ctx->error_message[255] = '\0';
    ctx->state = STATE_ERROR;
}

void app_context_transition(AppContext *ctx, AppState new_state) {
    ctx->state = new_state;
}

void app_context_cleanup(AppContext *ctx) {
    ctx->end_time = time(NULL);
    ctx->state = STATE_CLEANUP;
}

int compute_factorial(int n) {
    if (n < 0) return -1;
    if (n > FACTORIAL_LIMIT) return -1;
    if (n <= 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int compute_fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int is_prime(int n) {
    if (n < 2) return FALSE;
    if (n == 2) return TRUE;
    if (n % 2 == 0) return FALSE;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return FALSE;
    }
    return TRUE;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

int abs_value(int x) {
    return (x < 0) ? -x : x;
}

int max_of_two(int a, int b) {
    return (a > b) ? a : b;
}

int min_of_two(int a, int b) {
    return (a < b) ? a : b;
}

int clamp_value(int value, int min_val, int max_val) {
    if (value < min_val) return min_val;
    if (value > max_val) return max_val;
    return value;
}

int ascii_to_upper(int c) {
    if (c >= ASCII_a && c <= ASCII_a + 25) {
        return c - 32;
    }
    return c;
}

int ascii_to_lower(int c) {
    if (c >= ASCII_A && c <= ASCII_A + 25) {
        return c + 32;
    }
    return c;
}

int ascii_is_letter(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? TRUE : FALSE;
}

int ascii_is_digit(int c) {
    return (c >= '0' && c <= '9') ? TRUE : FALSE;
}

int ascii_is_space(int c) {
    return (c == ' ') ? TRUE : FALSE;
}

int ascii_is_printable(int c) {
    return (c >= 32 && c <= 126) ? TRUE : FALSE;
}

char reverse_char_in_word(const char *word, int index, int word_len) {
    if (index < 0 || index >= word_len) return '\0';
    return word[word_len - 1 - index];
}

int string_reverse_compare(const char *a, const char *b) {
    int len_a = (int)strlen(a);
    int len_b = (int)strlen(b);
    if (len_a != len_b) return FALSE;
    for (int i = 0; i < len_a; i++) {
        if (a[i] != b[len_a - 1 - i]) return FALSE;
    }
    return TRUE;
}

int string_contains(const char *haystack, const char *needle) {
    int h_len = (int)strlen(haystack);
    int n_len = (int)strlen(needle);
    for (int i = 0; i <= h_len - n_len; i++) {
        int found = TRUE;
        for (int j = 0; j < n_len; j++) {
            if (haystack[i + j] != needle[j]) {
                found = FALSE;
                break;
            }
        }
        if (found) return TRUE;
    }
    return FALSE;
}

int string_count_char(const char *str, char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) count++;
    }
    return count;
}

void string_to_upper(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)ascii_to_upper(str[i]);
    }
}

void string_to_lower(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)ascii_to_lower(str[i]);
    }
}

int validate_hello_word(const char *word) {
    if (word == NULL) return FALSE;
    if ((int)strlen(word) != WORD1_LEN) return FALSE;
    if (word[0] != 'H') return FALSE;
    if (word[1] != 'e') return FALSE;
    if (word[2] != 'l') return FALSE;
    if (word[3] != 'l') return FALSE;
    if (word[4] != 'o') return FALSE;
    return TRUE;
}

int validate_world_word(const char *word) {
    if (word == NULL) return FALSE;
    if ((int)strlen(word) != WORD2_LEN) return FALSE;
    if (word[0] != 'W') return FALSE;
    if (word[1] != 'o') return FALSE;
    if (word[2] != 'r') return FALSE;
    if (word[3] != 'l') return FALSE;
    if (word[4] != 'd') return FALSE;
    return TRUE;
}

int validate_full_message(const char *msg) {
    if (msg == NULL) return FALSE;
    if (string_contains(msg, "Hello") == FALSE) return FALSE;
    if (string_contains(msg, "World") == FALSE) return FALSE;
    if (string_contains(msg, " ") == FALSE) return FALSE;
    return TRUE;
}

int simulate_computation(int iterations) {
    int sum = 0;
    for (int i = 0; i < iterations; i++) {
        sum += compute_factorial(i % (FACTORIAL_LIMIT + 1));
        sum += compute_fibonacci(i % 10);
        sum += is_prime(i + 2);
        sum += gcd(i + 1, i + 2);
        sum += lcm(i + 1, i + 2);
        sum += abs_value(i - iterations / 2);
        sum += max_of_two(i, iterations - i);
        sum += min_of_two(i, iterations - i);
        sum += clamp_value(i, 0, iterations);
    }
    return sum;
}

int run_particle_simulation(int steps) {
    particle_system_init(&g_system);
    for (int i = 0; i < 10; i++) {
        Particle p = create_particle(i * 10, i * 5, i * 3, 1.0 + i * 0.1);
        p.velocity = create_point(1, 2, 3);
        particle_system_add(&g_system, &p);
    }
    for (int s = 0; s < steps; s++) {
        particle_system_update(&g_system, 0.01);
    }
    particle_system_destroy(&g_system);
    return SUCCESS;
}

int perform_memory_test(void) {
    char *block = (char *)malloc(BUFFER_SIZE);
    if (block == NULL) return FAILURE;
    memset(block, 0xFF, BUFFER_SIZE);
    memset(block, 0x00, BUFFER_SIZE);
    memset(block, 0x55, BUFFER_SIZE);
    free(block);
    return SUCCESS;
}

int perform_stack_test(void) {
    char local_buf[256];
    memset(local_buf, 0xAB, sizeof(local_buf));
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i * MAGIC_NUMBER;
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    return (sum == 9450) ? SUCCESS : FAILURE;
}

int build_hello_word(char *output) {
    output[0] = 'H';
    output[1] = 'e';
    output[2] = 'l';
    output[3] = 'l';
    output[4] = 'o';
    output[5] = '\0';
    return SUCCESS;
}

int build_world_word(char *output) {
    output[0] = 'W';
    output[1] = 'o';
    output[2] = 'r';
    output[3] = 'l';
    output[4] = 'd';
    output[5] = '\0';
    return SUCCESS;
}

int assemble_message(StringBuffer *buf, const char *hello, const char *world) {
    for (int i = 0; hello[i] != '\0'; i++) {
        if (string_buffer_append(buf, hello[i]) != SUCCESS) return FAILURE;
    }
    if (string_buffer_append(buf, ' ') != SUCCESS) return FAILURE;
    for (int i = 0; world[i] != '\0'; i++) {
        if (string_buffer_append(buf, world[i]) != SUCCESS) return FAILURE;
    }
    if (string_buffer_append(buf, '\n') != SUCCESS) return FAILURE;
    return SUCCESS;
}

int print_message_char_by_char(const char *msg) {
    for (int i = 0; msg[i] != '\0'; i++) {
        int delay_iterations = compute_factorial((i % 3) + 1);
        for (int d = 0; d < delay_iterations; d++) {
            volatile int x = d;
            (void)x;
        }
        putchar(msg[i]);
    }
    return SUCCESS;
}

int main(void) {
    g_context.state = STATE_INIT;
    app_context_init(&g_context);
    initialize_string_buffer(&g_buffer);
    g_initialized = TRUE;

    g_context.state = STATE_LOADING;
    perform_memory_test();
    perform_stack_test();

    g_context.state = STATE_PROCESSING;
    run_particle_simulation(50);
    simulate_computation(100);

    char hello[WORD1_LEN + 1];
    char world[WORD2_LEN + 1];
    build_hello_word(hello);
    build_world_word(world);

    g_context.state = STATE_VALIDATING;
    if (!validate_hello_word(hello)) {
        app_context_set_error(&g_context, "Hello word validation failed");
        destroy_string_buffer(&g_buffer);
        return FAILURE;
    }
    if (!validate_world_word(world)) {
        app_context_set_error(&g_context, "World word validation failed");
        destroy_string_buffer(&g_buffer);
        return FAILURE;
    }

    g_context.state = STATE_OUTPUT;
    assemble_message(&g_buffer, hello, world);
    if (!validate_full_message(string_buffer_get(&g_buffer))) {
        app_context_set_error(&g_context, "Full message validation failed");
        destroy_string_buffer(&g_buffer);
        return FAILURE;
    }

    print_message_char_by_char(string_buffer_get(&g_buffer));

    g_context.state = STATE_CLEANUP;
    app_context_cleanup(&g_context);
    destroy_string_buffer(&g_buffer);
    g_initialized = FALSE;

    return SUCCESS;
}   