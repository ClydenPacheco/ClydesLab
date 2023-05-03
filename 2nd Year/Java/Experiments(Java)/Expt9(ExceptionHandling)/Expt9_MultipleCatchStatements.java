public class Expt9_MultipleCatchStatements {
    public static void main(String args[]){
        try{
            int a=args.length;
            System.out.println("a="+a);
            int b=42/a;
            System.out.println(b);
            int c[]={1};
            c[42]=99;
        }
        catch(ArithmeticException e){
            System.out.println("Divide by zero! "+e);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index out of bound! "+e);
        }
        System.out.println("After the try and catch block...");
    }
}
