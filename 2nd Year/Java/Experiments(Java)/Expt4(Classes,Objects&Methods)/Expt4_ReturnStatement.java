class box{
    double width;
    double height;
    double depth;
    double volume(){
        return(width*height*depth);
    }
    void setdim(double w,double h,double d){
        width=w;
        height=h;
        depth=d;
    }
}
public class Expt4_ReturnStatement {
    public static void main(String args[]){
        box mybox1=new box();
        mybox1.setdim(10,20,15);
        System.out.println("The volume of box1 is: "+mybox1.volume());
        box mybox2=new box();
        mybox2.setdim(5, 6, 7);
        System.out.println("The volume of box2 is: "+mybox2.volume());
    }
}
