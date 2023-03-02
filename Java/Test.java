import java.util.Scanner;

class class1
{
    void show1()
    {
        System.out.println("Class1");
    }

    void model(int data)
    {
        System.out.println("Int "+ data);
    }

    

    void model(String s1)
    {
        System.out.println("String "+s1);
    }
}

class class2 extends class1
{
    void show2()
    {
        System.out.println("Class2");
    }


}

     class Test{
    public static void main(String [] args)
    {
        class2 obj = new class2();

        obj.show1();
        obj.show2();

        Scanner sc = new Scanner(System.in);
        // int d1= sc.nextInt();
        // obj.model(d1);

        String s2= new String();
        s2= sc.nextLine();
        obj.model(s2);
    }
}