class Box{
    double width;
    double height;
    double depth;
    Box(Box obj){
        width=obj.width;
        height=obj.height;
        depth=obj.depth;
    }
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
class Boxweight extends Box{
    double weight;
    Boxweight(double w,double h,double d,double n){
        width=w;
        height=h;
        depth=d;
        weight=n;
    }
}
public class Expt7_InheritanceUsingConstructors {
    public static void main(String args[]){
        Boxweight mybox1=new Boxweight(10,20,15,343);
        System.out.println("The volume of box 1 is: "+mybox1.volume());
        System.out.println("The weight of box 1 is: "+mybox1.weight);
        Boxweight mybox2=new Boxweight(2,3,4,0.076);
        System.out.println("The volume of box 1 is: "+mybox2.volume());
        System.out.println("The weight of box 1 is: "+mybox2.weight);
    }
    

}
