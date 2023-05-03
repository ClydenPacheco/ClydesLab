public class Expt3_SwapNumbers {
    static void Swap(int a,int b){
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.println("After swaping: ");
        System.out.println("a= "+a+"; b="+b);
    }
    public static void main(String args[]){
        int a=10,b=20;
        System.out.println("Before swapping: ");
        System.out.println("a= "+a+"; b="+b);
        Swap(a,b);
    }
}
