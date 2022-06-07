#include<iostream>
using namespace std;
int main(){
    int row_end,column_end;
    cin>>row_end>>column_end;
    int arr[row_end][column_end];
    for(int i=0;i<row_end;i++){
        for(int j=0;j<column_end;j++){
            cin>>arr[i][j];
        }
    }
    int row_start=0,column_start=0;
    while(row_start<row_end && column_start<column_end){
          for(int i=column_start; i<column_end; ++i){
              cout<<arr[row_start][i]<<" ";
          }
          row_start++;

          for(int i=row_start; i<row_end; ++i){
              cout<<arr[i][column_end-1]<<" ";
          }
          column_end--;

        //if(row_start<row_end){
          for(int i=column_end-1;i>=column_start;i--){
              cout<<arr[row_end-1][i]<<" ";
          }
          row_end--;
       // }

       // if(column_start<column_end){
          for(int i=row_end-1;i>=row_start;i--){
              cout<<arr[i][column_start]<<" ";
          }
          column_start++;
        }
   // }
    return 0;
}