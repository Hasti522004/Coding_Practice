class Calculator{
    private int a;
    private int b;
    Calculator(int n1,int n2){
        this.a = n1;
        this.b = n2;
    }
    public int getA() {
        return a;
    }
    public int getB() {
        return b;
    }
    public void setA(int a) {
        this.a = a;
    }
    public void setB(int b) {
        this.b = b;
    }
    public int sum(){
        return a+b;
    }
    public int diff(){
        return a-b;
    }
    public float div(){
        if(b==0){
            throw new ArithmeticException("B Should not be 0");
        }
        return (float)a/b;
    }
    public int mul(){
        return a*b;
    }
}

public class CalJava {
    public static void main(String[] args) {
        Calculator c = new Calculator(5, 0);
        System.out.println(c.sum());
        System.out.println(c.diff());
        System.out.println(c.mul());
        try{
            System.out.println(c.div());
        }catch(ArithmeticException e){
            System.out.println(e.getMessage());
        }
        
    }
}
