interface LibaryUser{
    void registerAccount();
    void requestBook();
}
class KidUser implements LibaryUser{
    int age;
    String bookType;

    public KidUser(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if(age<12){
            System.out.println("You have successfully registered under a Kids Account");
        }else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if(bookType.equals("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}
class AdultUser implements LibaryUser{
    int age;
    String bookType;

    public AdultUser(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if(age>12){
            System.out.println("You have successfully registered under an Adult Account");
        }else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    @Override
    public void requestBook() {
        if(bookType.equals("Fiction")){
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }else{
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}
    class LibraryInterfaceDemo {
        public static void main(String[] args) {
            KidUser kidUser = new KidUser(10, "Kids");
            kidUser.registerAccount();
            kidUser.requestBook();

            KidUser kidUser2 = new KidUser(18, "Fiction");
            kidUser2.registerAccount();
            kidUser2.requestBook();

            AdultUser adultUser = new AdultUser(5, "Kids");
            adultUser.registerAccount();
            adultUser.requestBook();

            AdultUser adultUser2 = new AdultUser(23, "Fiction");
            adultUser2.registerAccount();
            adultUser2.requestBook();
        }
    }