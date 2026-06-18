import java.util.Random;

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] c = new Compartment[10];

        Random r=new Random();

        for (int i = 0; i < c.length; i++) {

            int choice = r.nextInt(4) + 1; // Generates 1 to 4

            switch (choice) {

                case 1:
                    c[i] = new FirstClass();
                    break;

                case 2:
                    c[i] = new Ladies();
                    break;

                case 3:
                    c[i] = new General();
                    break;

                case 4:
                    c[i] = new Luggage();
                    break;
            }
        }


        c[0] = new FirstClass();
        c[1] = new Ladies();
        c[2] = new General();
        c[3] = new Luggage();

        for (Compartment ch : c) {
            System.out.println(ch.notice());
        }
    }
}