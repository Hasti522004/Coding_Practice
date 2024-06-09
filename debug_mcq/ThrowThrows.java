public class ThrowThrows {
    static int a;
    public static void main(String[] args){
        try {
            validAge(13);
        } catch (ArithmeticException e) {
            // TODO: handle exception
            System.out.println(e.getMessage());
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
    }
    public static void validAge(int age)throws ArithmeticException{
        if(age<18){
            throw new ArithmeticException("Age Must be more than 18");
        }else{
            System.out.println("Age is valid: " + age);
        }
    }
};
