public class Stringpractice {
    public static void main(String[] args) {
        String name = "Aditya raj";
        name = name.replace(" ","_");
        System.out.println(name);

        //problem 2
        String name1 = " Hello <|Name|> how are you doing?";
        name1=name1.replace("<|Name|>","Adityaraj");
        System.out.println(name1);

        //problem 3
        String sentence = "does this    string have double space";
        System.out.println(sentence.indexOf("   "));
        
        //Problem 4
        String S1 = "Respected Raj,\n\tHello how are you? \n\tI hope you are doing good.";
        System.out.println(S1);

    }
}
