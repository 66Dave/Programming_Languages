


void findPos(int arr[],int num, int *size){

    int pos , left = 0, right =  (*size)-1;

    while(left <= right){
        //find if we go right or left
        int mid = (left + right ) / 2;
        if(num == arr[mid]){
            pos = arr[mid];
            break;
        }
        else if(num > arr[mid]){
            left = mid +1;
        }else{
            right = mid-1;
        }
    }
    pos = left;
    printf("\nposition is: %d", pos);

}



void print(int arr[], int size){
    int i;
    printf("\nArray: { ");
    for(i = 0; i < size;i++){ 
        printf("%d ",arr[i]);
    }
    printf(" }");
}