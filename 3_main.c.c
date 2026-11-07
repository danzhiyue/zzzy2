//202610125212
//但祉悦
#include<stdio.h>
int i;
struct Window{
    int buffer[3];
    int count;
    int jieguo[100];
};
struct Window push_data(struct Window win, int new){
    win.buffer[win.count % 3]=new;
    win.count++;
    return win;
}
int main(){
    struct Window win;
    win.count=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int new;
        scanf("%d",&new);
        win = push_data(win, new);
        if(win.count==3){
            win.jieguo[i]=(win.buffer[0]+win.buffer[1]+win.buffer[2])/3;
         }else if(win.count==2){
            win.jieguo[i]=(win.buffer[0]+win.buffer[1])/2;
         }else if(win.count==1){
            win.jieguo[i]=win.buffer[0];
         }else{
            int st=(win.count-3)%3;
            int sum=win.buffer[st]+win.buffer[(st+1)%3]+win.buffer[(st+2)%3];
            win.jieguo[i]=sum/3;
         }}
     for(i=0;i<n;i++){
        printf("%d ",win.jieguo[i]);
     }
    return 0;
    }