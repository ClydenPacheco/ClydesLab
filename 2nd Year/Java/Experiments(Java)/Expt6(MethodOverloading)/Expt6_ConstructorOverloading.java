class Box{
    double width;
    double height;
    double depth;
    Box (double w,double h,double d){
        width=w;
        height=h;
        depth=d;
    }
    Box () {
        width=-1;
        height=-1;
        depth=-1;
    }
    Box (double len) {
        width=height=depth=len;
    }
    double volume () {
        return width*height*depth;
    }
}
public class Expt6_ConstructorOverloading {
    public static void main(String[] args){
        Box mybox1=new Box(10,20,15);
        System.out.println ("The volume of box 1 is: "+mybox1.volume());
        Box mybox2=new Box();
        System.out.println ("The volume of box 2 is: "+mybox2.volume());
        Box mybox3=new Box (7);
        System.out.println ("The volume of box 3 is: "+mybox3.volume()); 
    }
}