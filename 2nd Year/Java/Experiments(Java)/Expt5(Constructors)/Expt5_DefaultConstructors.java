class box{
    double width;
    double height;
    double depth;
    box(double w,double h,double d){
        System.out.println("Construction Box");
        width=w;
        height=h;
        depth=d;
    }
    double volume(){
        return width*height*depth;
    }
}
public class Expt5_DefaultConstructors {
    public static void main(String args[]){
        box mybox1=new box(10,10,10);
        box mybox2=new box(10,15,20);
        double vol=mybox1.volume();
        System.out.println("The volume of box 1 is: "+vol);
        vol=mybox2.volume();
        System.out.println("The volume of box 2 is: "+vol);
    }
}
