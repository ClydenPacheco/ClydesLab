public class Expt2_TernaryOperators {
    public static void main(String args[]){
        int x=10;
        System.out.println("The initial value of 'x' is: "+x);
        System.out.println("The value of 'x' after post increment is: "+ (x++));
        System.out.println("The value of 'x' after pre increment is: "+ (++x));
        int a=10;
        System.out.println("The initial value of 'a' is: "+a);
        System.out.println("The valueof the expression");
        System.out.println("(a++ + ++a) is: "+ (a++ + ++a));
    }
}
