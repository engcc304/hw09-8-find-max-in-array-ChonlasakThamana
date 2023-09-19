/*
    ผู้ใช้กรอกค่าจำนวนที่ต้องการสร้างอาเรย์ พร้อมกับกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณแสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์
    
    Test case:
        Enter new element of Array :
            5
        Input :
            5
        Input :
            3
        Input :
            2
        Input :
            1
        Input :
            9           
    Output:
        Array: 5 3 2 1 9
        The large 3rd element = 3

    Test case:
        Enter new element of Array :
            8
        Input :
            6
        Input :
            7
        Input :
            11
        Input :
            13
        Input :
            15
        Input :
            49
        Input :
            27
        Input :        
            18
    Output:
        Array: 6 7 11 13 15 49 27 18
        The large 3rd element = 18
*/#include <stdio.h>

int main() {
    int n, i;
    
    // รับค่าจำนวนที่ต้องการสร้างอาเรย์
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // รับค่าภายในอาเรย์
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // เรียงลำดับอาเรย์ให้อยู่ในลำดับจากมากไปน้อย
    for (i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // สลับค่า
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // แสดงอาเรย์ที่เรียงลำดับแล้ว
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // แสดงค่าที่มากเป็นอันดับสาม
    if (n >= 3) {
        printf("The 3rd largest element = %d\n", arr[2]);
    } else {
        printf("The array does not have a 3rd largest element.\n");
    }

    return 0;
}
