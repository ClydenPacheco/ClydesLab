import java.awt.*;
import java.awt.event.*;
public class Expt10_ActionListener extends Frame implements ActionListener{
    Label l3;
    TextField tf1;
    TextField tf2;
    Expt10_ActionListener(){
        Frame f=new Frame("awt frame");
        Label l1=new Label("Enter frist number: ");
        l1.setBounds(10,50,120,20);
        f.add(l1);
        tf1=new TextField();
        tf1.setBounds(150,50,85,20);
        f.add(tf1);
        Label l2=new Label("Enter second number: ");
        l2.setBounds(10,80,140,20);
        f.add(l2);
        tf2=new TextField();
        tf2.setBounds(150,80,85,20);
        f.add(tf2);
        Button b=new Button("Add");
        b.setBounds(70,120,100,30);
        f.add(b);
        l3=new Label(" ");
        l3.setBounds(94,200,100,20);
        f.add(l3);
        b.addActionListener(this);
        f.setLayout(null);
        f.setSize(250,250);
        f.setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        int a=Integer.parseInt(tf1.getText());
        int b=Integer.parseInt(tf2.getText());
        int c=a+b;
        l3.setText("Sum = "+String.valueOf(c));
    }
    public static void main(String args[]){
        new Expt10_ActionListener();
    }
}
