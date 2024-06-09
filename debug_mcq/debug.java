class SuperClass{
       final public int cal(int a,int b){
              return 0;
       }
}
class SubClass extends SuperClass{
       // public int cal(int a,int b){
       //        return 1;
       // }
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
              int a = 10;
              System.out.println(++a);
              int ar[] = {1,2,3,4,5};
              for(int i=0;i<ar.length - 2;i++){
                     System.out.println(i);
                     System.out.println(ar[i]);
                     System.out.println(i);
              }
       }
}