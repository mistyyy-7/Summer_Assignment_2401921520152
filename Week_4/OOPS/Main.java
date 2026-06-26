public class Main {

    public static void main(String[] args) {

        // Using Default Constructor
        Point p1 = new Point();

        p1.setX(5);
        p1.setY(10);

        // Using Parameterized Constructor
        Point p2 = new Point(20, 30);

        // Updating both values
        p2.setXY(40, 50);

        System.out.println("Program executed successfully.");
    }
}