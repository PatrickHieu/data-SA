#include <stdio.h>
#include <string.h>

int main() {
    char a[25],b[25];
    char sum[25] = {'\0'};
    scanf("%s %s", a, b);
    int length_a = strlen(a);
    int length_b = strlen(b);
    int length_sum;
    // so sánh độ dài xâu a và b để xác định độ dài xâu sum
    length_sum = (length_a > length_b) ? length_a + 1 : length_b + 1;
    
    // biến tổng dùng để tính tổng hai chữ số trong mỗi vòng lặp, biến nhớ dùng để lưu trữ phần dư(nếu tổng > 10)
    int tong , so_nho = 0;
    for (int i = 0; i < length_sum; i++) {
        // dùng 2 biến pointer a và b để tính tổng từng chữ số ở vị trí tương ứng trong 2 số nguyên a và b 
        int pointer_a, pointer_b;
        if (i < length_a) {
            pointer_a = a[length_a - i -1] - '0'; 
            // -'0' để loại bỏ những chữ số 0 ở cuối để biến xâu thành số nguyên
        }
        else {
            pointer_a = 0;
        }
        if (i < length_b) {
            pointer_b = b[length_b - i -1] - '0';
            // -'0' để loại bỏ những chữ số 0 ở cuối để biến xâu thành số nguyên
        }
        else {
            pointer_b = 0;
        }
        tong = pointer_a + pointer_b + so_nho;
        so_nho = tong / 10; // nhớ bằng phần nguyên của tổng 2 chữ số a và b chia cho 10, được lưu lại để cộng trong vòng lặp sau
        tong %= 10; //tổng bằng phần dư của phép chia tổng/10
        sum[length_sum - i - 1] = tong + '0';
    }
    //kiểm tra lại phép tính cuối cùng xem còn số nhớ không
    if (so_nho > 0) {  
        sum[0] = so_nho + '0';
        printf("%s\n",sum);
    }
    else {
        printf("%s\n",sum);
    }
    
    return 0;
}