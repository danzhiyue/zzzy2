//202610125212
//但祉悦
#include<stdio.h>
typedef struct {
    int temp;
    int humi;
    int valid;
}Sensor;
Sensor pack_sensor(int t, int h){
    Sensor s;
    s.temp = t;
    s.humi = h;
    if(t>-20 && t<50 && h>0 && h<100){
        s.valid=1;
    }else{
        s.valid=0;
    }return s;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    Sensor res = pack_sensor(a,b);
    if(res.valid==1){
        printf("TEMP=%d HUMI=%d",&res.temp,&res.humi);
    }else{
        printf("ERROR: Out of Range");
    }
    return 0;
}