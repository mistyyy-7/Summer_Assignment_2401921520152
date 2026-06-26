public class Box3D extends Box {

    private int height;

    // Constructor
    public Box3D(int length, int breadth, int height) {
        super(length, breadth);   // Calls Box constructor
        this.height = height;
    }

    // Method to calculate volume
    public int volume() {
        return length * breadth * height;
    }
}