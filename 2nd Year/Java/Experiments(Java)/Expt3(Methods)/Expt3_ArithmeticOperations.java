public class Expt3_ArithmeticOperations {
    static int Add(int x,int y){
        return x+y;
    }
    static int Sub(int x,int y){
        return x-y;
    }
    static int Mult(int x,int y){
        return x*y;
    }
    static int Div(int x,int y){
        return x/y;
    }
    public static void main(String args[]){
        int a=10,b=5;
        System.out.println("Sum of "+a+" + "+b+" = "+Add(a,b));
        System.out.println("Difference of "+a+" - "+b+" = "+Sub(a,b));
        System.out.println("Product of "+a+" * "+b+" = "+Mult(a,b));
        System.out.println("Quotient of "+a+" / "+b+" = "+Div(a,b));
    }
}