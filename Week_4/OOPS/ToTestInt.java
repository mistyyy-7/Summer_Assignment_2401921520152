interface Test{
int square(int side);
}

class Arithmetic implements Test{
    public int square(int side){
        return side * side;
    }
}

public class ToTestInt{
    public static void main(String[] args) {
        Test obj = new Arithmetic();
        System.out.println(obj.square(5));
    }
}