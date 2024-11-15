#include <stdio.h>
int main()
{
    int pd;
    float amt, dis, pri;
    
    printf("please enter the Product Code\n");
    scanf("%d", &pd);
    
    printf("please enter the amount\n");
    scanf("%f", &amt);
    
    if (pd==1){
        if(amt >= 500){
            dis = 0.12;
        pri= amt - (dis * amt);
        }
    
        else if(amt >=300){
            dis = 0.8;
        pri= amt - (dis * amt);
        }
        else {
            dis = 0.02;
        }
    }
    
    else if(pd==2){
        if(amt >= 2000){
            dis = 0.1;
        }
        else if(amt >= 1500){
            dis = 0.05;
        }
    }
    
    else if(pd==3){
        if(amt >= 5000){
            dis = 0.1;
        }
        else if(amt >= 2500){
            dis = 0.05;
        }
    }
    
    else {
        printf("You entered an invalid Product Code\n");
        }
     pri = amt - (amt*dis);
    
    printf("The total amount after Discount is %.f:", pri);
    return 0;

}
