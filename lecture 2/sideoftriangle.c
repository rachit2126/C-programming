 #include <stdio.h>
int main (){

    int a ;
    printf("enter a number");
    scanf("%d",&a);
     int b ;
    printf("enter b number");
    scanf("%d",&b);
     int c ;
    printf("enter c number");
    scanf("%d",&c); 

    if((a+b>c) && (b+c>a) && ( c +a>b)){
        printf("tringlr is valid");

    }
    else{printf("triangle is not valid");}

    return 9;
}
//  by ternary operator
// #include <stdio.h>

// int main() {
//     int age1 = 18, age2 = 25, age3 = 20;
//     int youngest;

//     youngest = (age1 < age2) ? ((age1 < age3) ? age1 : age3) : ((age2 < age3) ? age2 : age3);

//     printf("The youngest age is %d\n", youngest);
//     return 0;
// }

// #include <stdio.h>


// by loops
// int main() {
//     int age[3] = {18, 25, 20};
//     int i, min = age[0];

//     for (i = 1; i < 3; i++) {
//         if (age[i] < min)
//             min = age[i];
//     }

//     printf("The youngest age is %d\n", min);
//     return 0;
// }
