// #include <stdio.h>

// int main(){
//     int arr[] = {2,4,5,6,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i =0;i<n/2;i++){
//         int temp = arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// void rev(int *arr,int size) {
//     int *start = arr;
//     int *end = arr + size - 1;

//     while(start < end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;

//         start++;
//         end--;
//     }
// }

// int main(){
//     int arr[]={2,8,6,5,3};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     rev(arr, size);
//     for(int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[] = {2, 8, 6, 5, 3};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int *ptr=arr;
//     for(int i =0;i<size;i++){
//         printf("%d ", 2**(ptr + i));
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[] = {8,13,24,60,16,17,32,33};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int e=0,o=0;
//     int *ptr=arr;
//     for(int i=0;i<size;i++){
//         if(i%2==0){
//             e++;
//         }else{,
//             o++;
//         }
//         ptr++;
//     }
//     printf("%d %d", e, o);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr1[]={5,2,6};
//     int n= sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[n];
//     int *ptr1 = arr1;
//     int *ptr2 = arr2;
//     for(int i=0;i<n;i++){
//         *(ptr2 + i) = *(ptr1 + i);
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ", arr2[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a[];
//     int *ptr = a;
//     printf("%d\n", *a);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int const[100];
//     int *ptr=const;

//     printf("%d\n", &const);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[2][3]={{1,2,3}, {4,5,6}};
//     arr[1][1]=10;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){

//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[3][3]={{1,4,8},{2,5,13},{3,6,12}};
//     int sum =0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int r, c;
//     printf("Enter r&c: ");
//     scanf("%d %d", &r, &c);
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("Enter element [%d][%d]: ", i, j);
//             scanf("%d ", &arr[i][j]);
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     int trans[c][r];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             trans[j][i]=arr[i][j];   
//         }
//     }
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             printf("%d ", trans[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int arr1[3][3]={{21,12,13},{14,15,6},{7,8,9}};
//     int arr2[3][3]={{13,14,15},{26,47,88},{11,22,30}};
//     int sum[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++) {
//             sum[i][j]=arr1[i][j] + arr2[j][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }
//     int diff[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++) {
//             diff[i][j]=arr2[i][j] - arr1[i][j];
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ", diff[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
// 	int a[3][3],b[3][3],z[3][3],i,j;
// 	printf("enter the value of elements in the 2d array a and b");
// 	for(i=0;i<3;i++)
// 	{
// 		for(j=0;j<3;j++)
		
// 		{
// 			scanf("%d",&a[i][j]);
		
// 		}
		
// 	}
// 	for(i=0;i<3;i++)
// 	{
// 		for(j=0;j<3;j++)
		
// 		{
// 			scanf("%d",&b[i][j]);
	
// 		}
// }
// 		for(i=0;i<3;i++)
// 		{
// 			for(j=0;j<3;j++)
// 			{
// 				z[i][j]=a[i][j]+b[i][j];
// 			}
// 		}
// 		for(i=0;i<3;i++){
// 			for(j=0;j<3;j++){
//                 printf("%d ",z[i][j]);
//                 }
//                 printf("\n");
// 		}		

	
// }

// #include <stdio.h>

// int main(){
//     int arr1[3][3]={{21,12,13},{14,15,6},{7,8,9}};
//     int arr2[3][3]={{13,14,15},{26,47,88},{11,22,30}};
//     int m[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++) {
//             m[i][j]=arr1[i][j] * arr2[j][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ", m[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }




//sum of row
// #include <stdio.h>

// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         printf("%d", sum);
//         printf("\n");
//     }
//     return 0;
// }

//sum of col
// #include <stdio.h>

// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[j][i];
//         }
//         printf("%d", sum);
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[3][3]={{1,2,3},{14,5,6},{7,18,9}};
//     for(int i=0;i<3;i++){
//         int max=arr[0][0];
//         for(int j=0;j<3;j++){
//             if(max<arr[i][j]){
//                 max=arr[i][j];
//             }
//         }
//         printf("%d", max);
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int r1, c1, r2, c2;
//     printf("Enter the number of rows and columns of the first matrix: ");
//     scanf("%d %d", &r1, &c1);
//     printf("Enter the number of rows and columns of the second matrix: ");
//     scanf("%d %d", &r2, &c2);
//     if(c1 != r2) {
//         printf("Matrices can't be multiplied");
//         return 1;
//     }
//     int A[r1][c1], B[r2][c2], result[r1][c2];
//     printf("Enter elements of Matrix A: \n");
//     for(int i=0;i<r1;i++){
//         for(int j=0; j <c1;j++){
//             scanf("%d", &A[i][j]);
//         }
//     }  
//     printf("Enter elements of Matrix B: \n");
//     for(int i=0;i<r2;i++){
//         for(int j=0; j <c2;j++){
//             scanf("%d", &B[i][j]);
//         }
//     }
//     for(int i=0;i<r1;i++){
//         for(int j=0; j <c2;j++){
//             result[i][j] = 0;
//         }
//     }
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             for(int k=0;k<c1;k++){
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
//     printf("Resultant Matrix:\n");
//     for(int i=0;i<r1;i++){
//         for(int j=0; j <c2;j++){
//             printf("%d ", result[i][j]);
//             }
//             printf("\n");
//             }

// return 0;
// }

//transpose
// #include <stdio.h>

// int main(){
//     int arr[3][3], tran[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             tran[j][i]=arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ", tran[i][j]);
//             }
//             printf("\n");
//             }
//     return 0;
// }