import java.util.Scanner;
import java.util.Arrays;
//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    private static final Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        while (true){
            System.out.println("Введите номер задания");
            int num = in.nextInt();
            switch (num){
                case 1:
                    task_1();
                    break;
                case 2:
                    task_2();
                    break;

            }
            break;
        }
    }

    static void task_1(){
        System.out.println("Введите строку");
        String stroka;
        stroka = in.next();
        System.out.println(stroka);

    }

    static void task_2(){

        System.out.println("Введите длину первого массива");
        int length_a = in.nextInt();
        int[] a = new int [length_a];

        System.out.println("Введите элементы массива:");
        for (int i = 0; i < a.length; i++) {
            a[i] = in.nextInt();
        }

        System.out.println("Введите длину второго массива");
        int length_b = in.nextInt();
        int[] b = new int [length_b];

        System.out.println("Введите элементы массива:");
        for (int i = 0; i < b.length; i++) {
            b[i] = in.nextInt();
        }

        int[] c = new int[a.length + b.length];
        int count = 0;
        for(int i = 0; i < a.length; i++) {
            c[i] = a[i];
            count++;
        }
        for(int j = 0; j < b.length; j++) {
            c[count++] = b[j];
        }

        Arrays.sort(c);
        for(int i = 0; i < c.length; i++) System.out.print(c[i]+" ");

    }

    static void task_3(){

    }
}