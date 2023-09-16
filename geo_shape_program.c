//
//  main.c
//  C_project
//
//  Created by Emre Dikici on 16.09.2023.
// C DİLİ İLE KULANICININ SEÇTİĞİ BİR GEOMETRİK ŞEKİL İLE İŞLEM YAPAR YİNE AYNI ZAMANDA KULLANICNIN ŞRÇTİĞİ ŞEKİL İLE HANGİ İŞLEMİ YAPACAĞINI SORAN VE BUNA GÖRE SONUÇ DÖNDÜREN PROGRAM.


#include <stdio.h>

// area calculating function of triangle
void triangleArea(){
    
    int base,top;
    
    printf("Enter the length of the base of the triangle: ");
    scanf("%d", &base);
    
    printf("\nEnter the length of the top of the triangle: ");
    scanf("%d", &top);
    
    int result = (base*top)/2;
    printf("Area Of Triangle : %d",result);
    printf("\n");
}



// perimeter calculating function of triangle
void trianglePerimeter(){
    
    int side1,side2,side3;
    
    printf("Enter the length of the side1 of the triangle: ");
    scanf("%d", &side1);
    
    printf("Enter the length of the side2 of the triangle: ");
    scanf("%d", &side2);
    
    printf("Enter the length of the side3 of the triangle: ");
    scanf("%d", &side3);
    
    int result = (side1+side2+side3);
    printf("Area Of Triangle : %d",result);
    printf("\n");
    
}



// area calculating function of circle
void circleArea(){
    
    float PI=3.14;
    int r;
    
    printf("Please enter the radius of the circle: ");
    scanf("%d",&r);
    
    int result = (PI*r*r);
    printf("Area Of Circle : %d",result);
    printf("\n");
    
}



// perimeter calculating function of circle
void circlePerimeter(){
    
    float PI=3.14;
    int r;
    
    printf("Please enter the radius of the circle: ");
    scanf("%d",&r);
    
    int result = (PI*2*r);
    printf("Area Of Circle : %d",result);
    printf("\n");
}



// area calculating function of Square
void squareArea(){
    
    int side;
    
    printf("Enter the length of the side of the Square: ");
    scanf("%d", &side);
    
    int result = (side*side);

    printf("Area Of Square : %d",result);
    printf("\n");
    
}



// perimeter calculating function of Square
void squarePerimeter(){
    
    int side;
    
    printf("Enter the length of the side of the Square: ");
    scanf("%d", &side);
    
    int result = (4*side);

    printf("Perimeter Of Square : %d",result);
    printf("\n");
    
}


// area calculating function of Rectangle
void rectangleArea(){
    
    int side,side1;
    
    printf("Enter the length of the side1 of the Rectangle: ");
    scanf("%d", &side);
    
    printf("Enter the length of the side2 of the Rectangle: ");
    scanf("%d", &side1);
    
    int result = (side1*side);

    printf("Perimeter Of Square : %d",result);
    printf("\n");
    
}




// perimeter calculating function of Rectangle
void rectanglePerimeter(){
    
    int side,side1;
    
    printf("Enter the length of the side1 of the Rectangle: ");
    scanf("%d", &side);
    
    printf("Enter the length of the side2 of the Rectangle: ");
    scanf("%d", &side1);
    
    int result = (2*(side1+side));

    printf("Perimeter Of Square : %d",result);
    printf("\n");
    
}



int main(int argc, const char * argv[]) {
   
    int geo_shape;
    int choose;

    
    
    
    printf("WELCOME TO THE AREA AND PERİMETER CALCULATOR APPLİCATİON ! \n\n");
    
    printf("1)Triangle (üçgen)\n2)Circle (daire)\n3)Square (kare)\n3)Rectangle (dikdörtgen)\n\n");
    printf("Select the geometric shape you want to calculate : ");
    scanf("%d",&geo_shape);
    
    while (1){
        if(geo_shape == 1){
            printf("--------------------------------\n\n");
            printf("You choosed the Triangle !\n");
            printf("1)Area Calculating\n2)Perimeter Calculating\n3) EXİT\n\n");
            printf("Please choose what you want with Triangle :");
            scanf("%d",&choose);
            if(choose == 1 ){
                printf("You choosed the Are of Triangle\n");
                triangleArea();
            }else if (choose == 2 ){
                printf("You choosed the Perimeter of Triangle\n");
                trianglePerimeter();
            }else if(choose == 3){
                printf("Exiting The Programme..");
                break;
            }else{
                printf("Wrong Entry ! Please chech your selection.");
            }
        }
        else if(geo_shape == 2){
            printf("--------------------------------\n\n");
            printf("You choosed the Circle !\n");
            printf("1) Area Calculating\n2) Perimeter Calculating\n3) EXİT\n\n");
            printf("Please choose what you want with Circle :");
            scanf("%d",&choose);
            if(choose == 1 ){
                printf("You choosed the Are of Circle\n");
                circleArea();
            }else if (choose == 2 ){
                printf("You choosed the Perimeter of Circle\n");
                circlePerimeter();
            }else if(choose == 3){
                printf("Exiting The Programme..");
                break;
            }else{
                printf("Wrong Entry ! Please chech your selection.");
            }
        }
        else if(geo_shape == 3){
            printf("--------------------------------\n\n");
            printf("You choosed the Square !\n");
            printf("1) Area Calculating\n2) Perimeter Calculating\n3) EXİT\n\n");
            printf("Please choose what you want with Square :");
            scanf("%d",&choose);
            if(choose == 1 ){
                printf("You choosed the Are of Square\n");
                squareArea();
            }else if (choose == 2 ){
                printf("You choosed the Perimeter of Square\n");
                squarePerimeter();
            }else if(choose == 3){
                printf("Exiting The Programme..");
                break;
            }else{
                printf("Wrong Entry ! Please chech your selection.");
            }
        }
        else if(geo_shape == 4){
            printf("--------------------------------\n\n");
            printf("You choosed the Rectangle !\n");
            printf("1) Area Calculating\n2) Perimeter Calculating\n3) EXİT\n\n");
            printf("Please choose what you want with Rectangle :");
            scanf("%d",&choose);
            if(choose == 1 ){
                printf("You choosed the Are of Rectangle\n");
                rectangleArea();
            }else if (choose == 2 ){
                printf("You choosed the Perimeter of Rectangle\n");
                rectanglePerimeter();
            }else if(choose == 3){
                printf("Exiting The Programme..");
                break;
            }else{
                printf("Wrong Entry ! Please chech your selection.");
            }
        }
            
        
        
    }
    return 0;
}
