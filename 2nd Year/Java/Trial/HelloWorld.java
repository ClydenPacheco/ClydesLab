class box{
    int l,b,h;
    void calcdata(int x,int y){
        System.out.println("The area is "+l*b);
    }
    void calcdata(int x,int y,int z){
        System.out.println("The volume is "+l*b*h);
    }
    box(int x,int y){
        l=x;
        b=y;
    }
    box(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }
}
class HelloWorld
{
    public static void main(String[] args)
    {
        box a1=new box(2,4,6);
        a1.calcdata(2,4);
        a1.calcdata(2,4,6);
    }
}