import java.util.Scanner;

public class Java2751 {
        public void sort(int[] data, int l, int r){

            int left = l;
            int right = r;
            int pivot = data[(l+r)/2];

            do{
                while(data[left] < pivot) left++;
                while(data[right] > pivot) right--;
                if(left <= right){
                    int temp = data[left];
                    data[left] = data[right];
                    data[right] = temp;
                    left++;
                    right--;
                }

            }while (left <= right);
            if(l < right) sort(data, l, right);
            if(r > left) sort(data, left, r);
        }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Java2751 quick = new Java2751();
        quick.sort(a , 0,a.length-1);
        for (int i = 0; i < n; i++) {
            System.out.println(a[i]);
        }
    }
}
