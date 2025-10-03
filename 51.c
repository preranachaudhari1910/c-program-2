#include<stdio.h>

int main()
{

float sensor_temp,critical_temp=100, threshold_temp=80;
printf("Enter your temp:");
scanf("%f", &sensor_temp);
if(sensor_temp<=threshold_temp)
{
printf("patient condition normal");
}
else if (sensor_temp>threshold_temp && sensor_temp<=threshold_temp)
{
printf("patient condition = warning");
}
else
{
printf("patient condition critical");
}

}