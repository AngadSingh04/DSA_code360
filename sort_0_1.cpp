void sortZeroesAndOne(int input[], int size)
{
    //Write your code here
    int i = 0;
    int j = size-1;

    while(i <= j){
        if(input[i]==0 && input[j]==1){
            i++;
            j--;
        }else if(input[i]==1 && input[j]==0){
            swap(input[i],input[j]);
        }else if(input[i]==0){
            i++;
        }else{
            j--;
        }
    }
}