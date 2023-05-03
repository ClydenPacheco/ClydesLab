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
class Shipment extends Boxweight{
    double cost;
    Shipment(Shipment ob){
        super(ob);
        cost=ob.cost;
    }
    Shipment(double w,double h,double d,double m,double c){
        super(w,h,d,m);
        cost=c;
    }
    Shipment(){
        super();
        cost=-1;
    }
    Shipment(double len,double n,double c){
        super(len,n);
        cost=c;
    }
}
public class Expt7_MultilevelIngeritance {
    public static void main(String[] args){
        Shipment shipment1=new Shipment(10,20,15,10,314);
        System.out.println("The volume of shipment 1 is: "+shipment1.volume());
        System.out.println("The weight of shipment 1 is: "+shipment1.weight);
        System.out.println("The cost of shipment 1 is: "+shipment1.cost);
        Shipment shipment2=new Shipment(2,3,4,0.076,1.25);
        System.out.println("The volume of shipment 2 is: "+shipment2.volume());
        System.out.println("The weight of shipment 2 is: "+shipment2.weight);
        System.out.println("The cost of shipment 2 is: "+shipment2.cost);
    }
}
