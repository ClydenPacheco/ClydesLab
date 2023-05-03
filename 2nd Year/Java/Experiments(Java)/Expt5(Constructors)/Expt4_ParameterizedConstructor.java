class student{
    int rollno;
    String name;
    double marks1,marks2,marks3;
    student(int r,String n,double m1,double m2,double m3){
        System.out.println("Constructing student object");
        rollno=r;
        name=n;
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }
    double total(){
        return(marks1+marks2+marks3);
    }
    double percentage(){
        return(((marks1+marks2+marks3)/30)*100);
    }
}
public class Expt4_ParameterizedConstructor {
    public static void main(String args[]){
        System.out.println("Student information: ");
        student student1=new student(2016,"Clyden",10,10,10);
        System.out.println("Roll Number:"+student1.rollno);
        System.out.println("Name: "+student1.name);
        System.out.println("Total: "+student1.total());
        System.out.println("Percentage: "+student1.percentage()+"%");
        student student2=new student(2099,"Leo",10,9,8);
        System.out.println("Roll Number:"+student2.rollno);
        System.out.println("Name: "+student2.name);
        System.out.println("Total: "+student2.total());
        System.out.println("Percentage: "+student2.percentage()+"%");
    }
}
