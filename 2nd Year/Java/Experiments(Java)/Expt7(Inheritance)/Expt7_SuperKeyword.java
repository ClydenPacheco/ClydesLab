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
    Boxweight(Boxweight obj){
        super(obj);
        weight=obj.weight;
    }
    Boxweight(double w,double h,double d,double n){
        super(w,h,d);
        weight=n;
    }
    Boxweight(){
        super();
        weight=-1;
    }
    Boxweight(double len,double n){
        super(len);
        weight=n;
    }
}
public class Expt7_SuperKeyword{
    public static void main(String args[]){
        Boxweight mybox1=new Boxweight(10,20,15,343);
        System.out.println("The volume of box1 is: "+mybox1.volume());
        System.out.println("The weight of box1 is: "+mybox1.weight);
        Boxweight mybox2=new Boxweight(2,3,4,0.076);
        System.out.println("The volume of box2 is: "+mybox2.volume());
        System.out.println("The weight of box2 is: "+mybox2.weight);
        Boxweight mybox3=new Boxweight();
        System.out.println("The volume of box3 is: "+mybox3.volume());
        System.out.println("The weight of box3 is: "+mybox3.weight);
        Boxweight mycube=new Boxweight(3,2);
        System.out.println("The volume of cube is: "+mycube.volume());
        System.out.println("The weight of cube is: "+mycube.weight);
        Boxweight myclone=new Boxweight(mybox1);
        System.out.println("The volume of box clone is: "+myclone.volume());
        System.out.println("the weight of box clone is: "+myclone.weight);
    }
}
