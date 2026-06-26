public class Outer {
    void display(){
        System.out.println("This is the outer class method.");
    }
    public class Inner {
        void display(){
            System.out.println("This is the inner class method.");
        }
    }


public static void main(String[] args) {

        // Step 1: Create Outer object
        Outer outer = new Outer();

        // Step 2: Call Outer display()
        outer.display();

        // Step 3: Create Inner object
        Outer.Inner inner = outer.new Inner();

        // Step 4: Call Inner display()
        inner.display();

    }
}