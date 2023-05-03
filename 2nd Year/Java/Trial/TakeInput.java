import java.util.Scanner;

public class TakeInput {
    public static void main(String args[]){
        int a;
        System.out.println("Enter a number: ");
        try (Scanner s = new Scanner(System.in)) {
            a=s.nextInt();
        }
        System.out.println("The entered number is "+a);
    }    
}
