class A{
    int i,j;
    A(int a,int b){
        i=a;
        j=b;
    }
    void show(){
        System.out.println("i: "+i+" and j: "+j);
    }
}
class B extends A{
    int k;
    B(int a,int b,int c){
        super(a,b);
        k=c;
    }
    void show(){
        System.out.println("k: "+k);
    }
}
public class Expt7_FunctionOverriding {
    public static void main(String args[]){
        B subobj=new B(1,2,3);
        subobj.show();
    }
}
