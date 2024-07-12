package package2;
import package3.*;

public class B
{
    public void m2()
    {
        System.out.println("Class B");
    }
    public static void main(String args[])
    {
        C ob1=new C();
        ob1.m3();
    }
}