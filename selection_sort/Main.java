import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; ++i){
            a[i] = scanner.nextInt();
        }
        for(int i=0; i<n; ++i){
            int pos = i;
            int j = i+1;
            for(; j<n; ++j){
                if(a[j]<a[i]){
                    pos = j;
                }
            }
            int temp = a[pos];
            a[pos] = a[i];
            a[i] = temp;
        }
        for(int i=0; i<n; ++i){
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }
}
