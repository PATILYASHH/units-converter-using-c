#include<stdio.h>
int kmtomiles();
int inchestofoot();
int cmtoinch();
int poundtokg();
int inchtometer();
int main()
{
int input;

printf("Choose what you want to do :\n");
printf("1)\t KMs To Miles\n");
  printf("2)\t Inches To Foot\n");
  printf("3)\t CMs To Inches\n");
  printf("4)\t Pounds To Kg\n");
  printf("5)\t Inches To Meters\n");
scanf("%d",&input);

  switch(input)
  {
    case 1:
// Its for Kms to Miles
       kmtomiles();

      
      break;
  
  case 2:
// Its for Inches to Foot
     inchestofoot();

    
    break ;
  
    case 3 :
    // Its for CMs to Inches
       cmtoinch();

      break;

    case 4:
    // Its for Pound to kgs
       poundtokg();


    break;

    case 5:
    // Its for Inches to meters
       inchtometer();
    break ;

default :
printf("\a");
  
  printf("No such a option here , plese try again\n");

    break;
  }  

  return 0;
}

int kmtomiles()
{
  // km to miles
  // 1 Km = 0.621371 Miles 
  float km ;
float miles=0.621371;
  
  printf("Enter KMs here : \t \n");
  scanf("%f",&km);

 float result = km * miles;

  printf("%f KMs = %f Miles \n \v ",km,result);

  
  return result;
}

int inchestofoot()
{
  // its for inches to foot converter
  // 1 inch = 0.0254 meters
float inch , foot = 0.0833;

  printf("Enter Inches Here :\n ");
scanf("%f",&inch);

float result= inch  * foot ;

  printf("%f inches = %f Foot \n\v\v",inch,result);
  
  return result;
}

int cmtoinch()
{
  // its for Cms to Inches converter
    // 1 cm = Inches
  float cm , inch = 0.393701;

    printf("Enter CMs Here :\n ");
  scanf("%f",&cm);

  float result= cm  * inch ;

    printf("%f cms = %f inches \n\v\v",cm,result);

    return result;
}

int poundtokg()
{
  // its for Pounds to KG converter
    // 1 Pound = 0.453592Kg
  float pound , kg = 0.453592;

    printf("Enter Pounds Here :\n ");
  scanf("%f",&pound);

  float result= pound  * kg ;

    printf("%f pounds = %f kgs \n\v\v",pound,result);

    return result;
}


int inchtometer()
{
  // its for inch to meter converter
    // 1 inch = 0.0254 meters
  float inch , meter=0.0254;

    printf("Enter Pounds Here :\n ");
  scanf("%f",&inch);

  float result= inch  * meter ;

    printf("%f Inch = %f Meters \n\v\v",inch,result);

    return result;
}