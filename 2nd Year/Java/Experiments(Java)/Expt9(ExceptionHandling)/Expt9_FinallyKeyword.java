public class Expt9_FinallyKeyword {
    static void procedureA(){
        try{
            System.out.println("inside procedure A...");
            throw new RuntimeException("Demo");
        }
        finally{
            System.out.println("Procedure A's finally called...");
        }
    }
    static void procedureB(){
        try{
            System.out.println("inside procedure B...");
            throw new RuntimeException("Demo");
        }
        finally{
            System.out.println("Procedure B's finally called...");
        }
    }
    static void procedureC(){
        try{
            System.out.println("inside procedure C...");
            throw new RuntimeException("Demo");
        }
        finally{
            System.out.println("Procedure C's finally called...");
        }
    }
    public static void main(String args[]){
        try{
            procedureA();
        }
        catch(Exception e){
            System.out.println("Exception Caught!");
        }
        try{
            procedureB();
        }
        catch(Exception e){
            System.out.println("Exception Caught!");
        }
        try{
            procedureC();
        }
        catch(Exception e){
            System.out.println("Exception Caught!");
        }
    }
}
