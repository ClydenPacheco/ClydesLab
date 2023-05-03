public class Expt6_MethodOverloading {
    void add (int a,int b){
        System.out.println ("The sum of "+a+" + "+b+" = "+(a+b));
    }
    void add (float a,float b){
        System.out.println("The sum of "+a+" + "+b+" = "+(a+b));
    }
    void add (int a, float b){
        System.out.println ("The sum of "+a+" + "+b+" = "+(a+b));
    } 
    public static void main(String[] args) {
        Expt6_MethodOverloading c=new Expt6_MethodOverloading();
        c.add(4, 5);
        c.add(4.5f, 5.7f);
        c.add(4, 5.5f);
    }  
}
