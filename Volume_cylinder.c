/*
Name:FranXavier Mokua 
Reg no:PA106/G/28792/25
Description:program to calculate volume of cylinder
*/
# include<stdio.h>
int main(){
    float r,h,f,π,v;
    
    printf("Enter the radius of the cylinder\n");
    scanf("%f",&r);
    
    printf("Enter the height of the cylinder\n");
    scanf("%f",&h);
    
    π=3.142;
    v=π*r*r*h;
    printf("The volume is:%f",v);
    return 0;
}