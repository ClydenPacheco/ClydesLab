class box{
    double width;
    double height;
    double depth;
}
public class Expt4_MultipleObjects {
    public static void main(String args[]){
        double vol;
        box mybox1=new box();
        mybox1.width=10;
        mybox1.height=20;
        mybox1.depth=15;
        vol=mybox1.width*mybox1.height*mybox1.depth;
        System.out.println("The volume of box 1 is: "+vol);
        box mybox2=new box();
        mybox2.width=5;
        mybox2.height=6;
        mybox2.depth=7;
        vol=mybox2.width*mybox2.height*mybox2.depth;
        System.out.println("The volume of box 2 is: "+vol);
    }
}
