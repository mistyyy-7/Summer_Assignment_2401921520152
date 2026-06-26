public class Point {

    private int x;
    private int y;

    // Default Constructor
    public Point() {
        x = 0;
        y = 0;
    }

    // Parameterized Constructor
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Setter for x
    public void setX(int x) {
        this.x = x;
    }

    // Setter for y
    public void setY(int y) {
        this.y = y;
    }

    // Setter for both x and y
    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }
}