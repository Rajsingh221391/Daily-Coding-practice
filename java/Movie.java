class Movie_characteristic{
    String movie_name;
    String movie_genre;
    int rating;

public void playIt(){
    System.out.println("Playing the movie");
}
}

public class Movie {
    public static void main(String[] args) {
        Movie_characteristic M = new Movie_characteristic();
        M.movie_name="martian";
        M.movie_genre="sci_fi";
        M.rating=8;
        Movie_characteristic M2= new Movie_characteristic();
        M2.movie_name="avengers the age of ultron";
        M2.movie_genre="Action sci-fi";
        M2.rating=8;

        System.out.println(M.movie_name);
    }
}
