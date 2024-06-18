abstract class Test {
       abstract void run();
}

class SuperClass extends Test{
       protected String car = "Maruti";
       static public int cal(int a, int b) {
              return 0;
       }

       int a;
       SuperClass(int b){
              a=b;
              System.out.println("A val is : "+a);
       }

       void setCar(String newcar){
              this.car = newcar;
       }

       @Override
       public void run() {
              // TODO Auto-generated method stub
              throw new UnsupportedOperationException("Unimplemented method 'run'");
       }
}

class SubClass extends SuperClass {
       // public void run() {
       //        System.out.println("Child is Running");
       // }
       SubClass(int b){
              super(b);
       }
      
}

class ThirdClass extends SubClass{
       ThirdClass(){
              super(0);
              setCar("NANO");
       }
       
}

public class debug {

       final public static void gfg(String s) {
              System.out.println("String");
       }

       public static void gfg(Object o) {
              System.out.println("Obje");
       }

       public static void main(String[] arr) {
              gfg(null);
              
              SubClass sb = new SubClass(20);
              sb.run();
              System.out.println(SuperClass.cal(0, 0));
              SuperClass sr = new SuperClass(1);
              ThirdClass th = new ThirdClass();
              System.out.println(th.car); 
       }
}