class emp{
    private int id;
    private String name;


public emp(){
id = 2;
name="Harish";
}
public emp(String Name,int Id){
    id=Id;
    name=Name;
}
public String getname(){return name;}
public void setname(String n){this.name=n;}
public int getid(){return id;}
public void setid(int i){this.id=i;}
}


public class Access_modifiers {
    public static void main(String[] args) {
       emp E1 = new emp("Raj", 2);
       System.out.println(E1.getid());
       System.out.println(E1.getname());
    }
}
