public class array2 {
    public static void main(String[] args) {
        int[] marks = new int[10];
        marks[0]=45;
        marks[1]=55;
        marks[2]=67;
        marks[3]=65;
        marks[4]=54;
        marks[5]=78;
        marks[6]=55;
        marks[7]=67;
        marks[8]=65;
        marks[9]=54;

        for(int i=marks.length-1;i>=0;i--){
            System.out.println(marks[i]);
        }

    }
    
}
