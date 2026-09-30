public class multi_dmsnal_array {
    public static void main(String[] args) {
        // int[] marks = new int[5];//1-D array
        int[][] flats=new int[5][5];//2-D array
        flats[0][0]=101;
        flats[0][1]=102;
        flats[0][2]=103;
        flats[1][0]=104;
        flats[1][1]=105;
        flats[1][2]=106;
        flats[2][0]=101;
        flats[2][1]=102;
        flats[2][2]=101;
        for(int i=0;i<flats.length;i++){
            for(int j=0;j<flats[i].length;j++){
                System.out.println(flats[i][j]);
            }
        }
    
       
    }
}
