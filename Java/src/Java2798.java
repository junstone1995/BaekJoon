import java.util.Scanner;

public class Java2798 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] num = new int[n];
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            num[i] = sc.nextInt();
        }
        for(int i=0;i <n-2; i++)
        {
            for(int j=i+1; j< n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    int i1 = num[i] + num[j] + num[k];
                    if(i1 <= m)
                    {
                        if(result < i1)
                            result = i1;
                    }
                }
            }
        }
        System.out.println(result);
    }
}
