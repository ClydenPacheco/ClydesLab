class box{
    double width;
    double height;
    double depth;
}
public class Expt4_Objects {
    public static void main(String args[]){
        double vol;
        box mybox1=new box();
        mybox1.width=10;
        mybox1.height=20;
        mybox1.depth=15;
        vol=mybox1.width*mybox1.height*mybox1.depth;
        System.out.println("The volume is: "+vol);
    }
}
