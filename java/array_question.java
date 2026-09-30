public class array_question {
    public static void main(String[] args) {
    //    int[] num = new int[3];
    //    num[0]=23;
    //    num[1]=24;
    //    num[2]=24;
    //    int A = 22;
    //    boolean isInarray=false;
    //    for(int i=0;i<num.length;i++){
    //     if(A==num[i]){
    //         isInarray=true;
    //         break;
    //     }
        
    //    }
    //    if(isInarray){
    //        System.out.println("The value is present in the array.");
    //    }
    //    else{
    //     System.out.println("value not found.");
    //    }

    // Problem 2:

    /*int [][] num1={{2,3,4},
                   {9,8,7}};
    int [][] num2={{3,2,4},
                   {7,6,5}};
    int [][] result={{0,0,0},
                     {0,0,0}};

    for(int i = 0; i<num1.length;i++){// will run row number of times.
        for(int j=0;j<num1[i].length;j++){
            result[i][j]=num1[i][j]+num2[i][j];
            System.out.format("setting value for i=%d j=%d\n", i,j);
            System.out.println(result[i][j]+" ");

        }//will run column number of times.
        System.out.println("");
    }*/


        //problem 3:
        /*int[] num = new int[3];
        num[0]=23;
        num[1]=24;
        num[2]=25;
        for(int i = 2; i>=0 ;i--){
            System.out.println(num[i]);
        }*/

        //problem 4:
         int[] num = new int[3]; 
         num[0]= 23;
         num[1]= 24;
         num[2]= 25;
         boolean sorted = true;
        
         for(int i = 0; i<num.length-1;i++ ){
            
            if(num[i]>num[i+1]){
                sorted = false;
                break;
            }
            }
            if(sorted){
                System.out.println("Your array is sorted.");
            }
            else{
                System.out.println("The array is not sorted.");
            }
         }


}


    

