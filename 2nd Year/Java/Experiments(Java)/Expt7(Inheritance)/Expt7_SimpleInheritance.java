class A{
    int i,j;
    void showij(){
        System.out.println("i: "+i+" and j: "+j);
    }
}
class B extends A{
    int k;
    void showk() {
        System. out.println("k: "+k);
    }
    void sum() {
        System. out.println("Sum: ");
        System. out.println ("i+j+k="+(i+j+k));
    }
}    
public class Expt7_SimpleInheritance {
    public static void main(String[] args) {
        A superobj=new A();
        B subobj=new B();
        superobj.i=10;
        superobj.j=20;
        System.out.println("Contents of super object: ");
        superobj.showij ();
        subobj.i=7;
        subobj.j=8;
        subobj.k=9;
        System.out.println("Contents of sub object: ");
        subobj.showij();
        subobj.showk ();
        subobj.sum();
    }
}