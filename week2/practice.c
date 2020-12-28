#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char shape1[]="Cylinder";
    char shape2[]="Cone";
    char shape3[]="Sphere";
    char quit[]="Quit";
    char choice[50];
    const float pi=3.142;
    while(1)
    {
        printf("Enter a shape:");
        scanf("%s",choice);

        if(strcmp(choice,shape1)==0)
        {
            float r,h;
            float a,v;
            printf("Enter the radius and height of cylinder:");
            scanf("%f %f",&r,&h);
            a=(2*pi*r*h)+(2*pi*r*r);
            v=pi*r*r*h;
            printf("Area:%f  Volume:%f\n",a,v);
        }
        else if(strcmp(choice,shape2)==0)
        {
            float r,h;
            float a,v;
            printf("Enter the radius and height of cone:");
            scanf("%f %f",&r,&h);
            a=(pi*r)*(r + sqrt(h*h + r*r));
            v=pi*r*r*(h/3);
            printf("Area:%f  Volume:%f\n",a,v);
        }
        else if(strcmp(choice,shape3)==0)
        {
            float r;
            float a,v;
            printf("Enter the radius  of sphere:");
            scanf("%f",&r);
            a=4*pi*r*r;
            v=(4.0/3.0)*pi*r*r*r;
            printf("Area:%f  Volume:%f\n",a,v);
        }
        else if(strcmp(choice,quit)==0)
            break;
        else
            printf("Invalid choice");

    }
    return 0;
}
