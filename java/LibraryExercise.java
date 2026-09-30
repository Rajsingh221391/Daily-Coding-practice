import java.util.Scanner;

class library{

Scanner input = new Scanner(System.in);
public void addBOOK(){
    String[] Books={"Book1","Book2","Book3"};
    String Book= input.nextLine();
    int position = input.nextInt();

    String[] newlist = new String[Books.length+1];
    
    // Copy elements before insertion
    for(int i=0;i<position;i++){
        newlist[i]=Books[i];
    }
    
    //inserting new Books:
    
    newlist[position]=Book;

    // Copy remaining elements:
    for(int i= position;position<Books.length;i++){
        newlist[i+1]=Books[i];
    }


}

public void issueBOOK(){

}





}



public class LibraryExercise {
    public static void main(String[] args) {
        library l = new library();
        l.addBOOK();
    }
    
}
