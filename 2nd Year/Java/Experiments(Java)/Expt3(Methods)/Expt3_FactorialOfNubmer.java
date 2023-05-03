public class Expt3_FactorialOfNubmer {
    static int CalFact(int a){
        int fact=1;
        while(a>0){
            fact*=a;
            a--;
        }
        return fact;
    }
    public static void main(String args[]){
        int a=5;
        System.out.println("Factorial of "+a+" = "+CalFact(a));
    }
}
