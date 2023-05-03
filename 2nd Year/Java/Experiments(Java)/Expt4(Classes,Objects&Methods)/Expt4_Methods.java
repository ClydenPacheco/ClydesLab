class box{
    double width;
    double height;
    double depth;
    int n;
    void volume(){
        System.out.println("The vollume of box"+n+" is: "+width*height*depth);
    }
}
public class Expt4_Methods {
    public static void main(String args[]){
        box mybox1=new box();
        mybox1.width=10;
        mybox1.height=20;
        mybox1.depth=15;
        mybox1.n=1;
        mybox1.volume();
        box mybox2=new box();
        mybox2.width=5;
        mybox2.height=6;
        mybox2.depth=7;
        mybox2.n=2;
        mybox2.volume();
    }
}
