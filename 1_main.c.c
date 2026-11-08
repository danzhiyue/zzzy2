//202610125212
//但祉悦
#include<stdio.h>
int i,j,n;
typedef struct  {
    char name[16];
    int score;
}Player;
void sort_players(Player arr[], int n){ 
    for(i=0 ; i<n-1 ; i++){
        for(j=0 ; j<n-1-i ; j++){
            if(arr[j].score<arr[j+1].score){
                 Player temp = arr[j];
                 arr[j] = arr[j+1]; 
                 arr[j+1] = temp;
            }
        }
    }

}
int main(){
     Player arr[100];
     scanf("%d",&n);
     for(i=0 ; i<n ; i++){
        scanf("%s %d",&arr[i].name,&arr[i].score);
     }
     sort_players(arr,n);
     for(i=0 ; i<n ; i++){
        printf("%d %s %d\n",i+1,arr[i].name,arr[i].score);
    }
     return 0;
}