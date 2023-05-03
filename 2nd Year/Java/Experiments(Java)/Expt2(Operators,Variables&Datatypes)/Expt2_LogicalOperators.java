public class Expt2_LogicalOperators {
    public static void main(String argsp[]){
        int a=5,b=10,c=2;
        System.out.println("a=5,b=10,c=2");
        if(a>b && a>c)
            System.out.println("A is the geatest by AND operator");
        else
            System.out.println("A is not the biggest by AND operator");
        if(b<c || a<c)
            System.out.println("C is not the smallest by OR operator");
        else
            System.out.println("C is the smallest by OR operator");
        if (a!=b)
            System.out.println("A is not equal to B by NOT operator");
        else
            System.out.println("A is not equal to B by NOT operator");
    }   

}
