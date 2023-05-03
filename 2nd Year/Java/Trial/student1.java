//Java program to implement the given inheritance
class Student{
    int roll_no;
    String name;
    Student(int rn,String nm){
        roll_no=rn;name=nm;}}
class Marks extends Student{
    double Sub1_marks,Sub2_marks;
    Marks(double m1,double m2,String nm,int rn){
        super(rn,nm);
        Sub1_marks=m1;Sub2_marks=m2;}}
class student1 extends Marks{
    double Percentage,total;
    student1(double m1,double m2,String nm,int rn){
        super(m1,m2,nm,rn);
        total=Sub1_marks+Sub2_marks;
        Percentage=total/50*100;}
    void display(){
        System.out.println("Student name: "+name);
        System.out.println("Roll number: "+roll_no);
        System.out.println("Total marks: "+total);
        System.out.println("Percentage: "+Percentage);}
    public static void main(String [] args) {
        student1 s=new student1(24,20,"Clyden",201716);
        s.display();}}