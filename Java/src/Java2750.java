import java.util.Scanner;

public class Java2750 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int tmp;
        for (int i = 0; i < n; i++)
            a[i] = sc.nextInt();
        for(int i = 0; i< n; i++)
        {
            for(int j=0;j<n-1; j++) {
                if (a[j] > a[j+1]) {
                    tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }

        }
        for (int i = 0; i < n; i++)
        System.out.println(a[i]);
    }
}
