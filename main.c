#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void New_car()
{
    printf("Buy a new car\n");
    int t, r, m, c;
    printf("1. SUV\n2. Hatchback\n3. Sedan\nSelect type of car you want: ");
    scanf("%d", &t);
    switch(t){
        case 1:
            printf("1. <=20L\n2. 20-40L\n3. 40-60L\n4. >=60L\nSelect your desired price range: ");
            scanf("%d", &r);
            switch(r){
                case 1:
                    printf("1. Honda\n2. Hyundai\n3. Jeep\n4. Kia\n5. Mahindra\n6. MG\n7. Tata\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. BRV\n2. WRV\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 10L");
                            }
                            else if(r==2){
                                printf("Cost: 11L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. Creta\n2. Venue\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 11L");
                            }
                            else if(r==2){
                                printf("Cost: 8L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 3:
                            printf("1. Compass\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 17L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 4:
                            printf("1. Seltos\n2. Sonet\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 14L");
                            }
                            else if(r==2){
                                printf("Cost: 10L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 5:
                            printf("1. Scorpio\n2. XUV300\n3. XUV500\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 10L");
                            }
                            else if(r==2){
                                printf("Cost: 11L");
                            }
                            else if(r==3){
                                printf("Cost: 19L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 6:
                            printf("1. Hector\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 15L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 7:
                            printf("1. Harrier\n2. Hexa\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 15L");
                            }
                            else if(r==2){
                                printf("Cost: 15L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 2:
                    printf("1. BMW\n2. Ford\n3. Honda\n4. Mitsubishi\n5. Toyota\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. X1\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 38L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. Endeavour\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 31L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 3:
                            printf("1. CRV\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 27L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 4:
                            printf("1. Pajero\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 28L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 5:
                            printf("1. Fortuner\n2. Innova\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 39L");
                            }
                            else if(r==2){
                                printf("Cost: 21L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 3:
                    printf("1. BMW\n2. Land Rover\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. X2\n2. X3\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 45L");
                            }
                            else if(r==2){
                                printf("Cost: 51L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. Range Rover Evoque\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 59L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 4:
                    printf("1. BMW\n2. Jaguar\n3. Jeep\n4. Land Rover\n5. Mercedes\n6. Porsche\n7. Toyota\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. X4\n2. X5\n3. X6\n4. X7\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 65L");
                            }
                            else if(r==2){
                                printf("Cost: 79L");
                            }
                            else if(r==3){
                                printf("Cost: 95L");
                            }
                            else if(r==4){
                                printf("Cost: 102L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. F-Pace\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 65L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 3:
                            printf("1. Wrangler\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 84L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 4:
                            printf("1. Discovery\n2. Range Rover Sport\n3. Range Rover Velar\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 82L");
                            }
                            else if(r==2){
                                printf("Cost: 135L");
                            }
                            else if(r==3){
                                printf("Cost: 74L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 5:
                            printf("1. 4 Matic\n2. G-Wagon\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 86L");
                            }
                            else if(r==2){
                                printf("Cost: 191L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 6:
                            printf("1. Cayenne\n2. Macan\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 156L");
                            }
                            else if(r==2){
                                printf("Cost: 76L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 7:
                            printf("1. Land Crusier\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 120L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
            }
            break;
        case 2:
            printf("1. <=10L\n2. 10-20L\n3. 20-30L\n4. >=30L\nSelect your desired price range: ");
            scanf("%d", &r);
            switch(r){
                case 1:
                    printf("1.Ford \n2.Honda \n3. Hyundai\n4. Suzuki\n5. Tata\n6. Volkswagen\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. Figo\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 8L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. Brio\n2. Jazz\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 6L");
                            }
                            else if(r==2){
                                printf("Cost: 9L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 3:
                            printf("1. i10\n2. i20\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 7L");
                            }
                            else if(r==2){
                                printf("Cost: 9L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 4:
                            printf("1. Boleno\n2. Swift\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 6L");
                            }
                            else if(r==2){
                                printf("Cost: 8L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 5:
                            printf("1. Indica\n2. Nano\n3. Tiago\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 5L");
                            }
                            else if(r==2){
                                printf("Cost: 3L");
                            }
                            else if(r==3){
                                printf("Cost: 6L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 6:
                            printf("1. Polo\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 9L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 2:
                    printf("1. Suzuki\n2. Toyota\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. Vitara Brezza\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 12L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. Glanza\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 11L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;

                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 3:
                    printf("1. Mercedes\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. A-Class\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 29L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 4:
                    printf("1. Mercedes\n2. Prosche\n3. Tesla\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. B-Class\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 31L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. Panemera\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 258L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 3:
                            printf("1. Model 3\n2. Model X\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 75L");
                            }
                            else if(r==2){
                                printf("Cost: 202L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
            }
            break;
        case 3:
            printf("1. <=20L\n2. 20-40L\n3. 40-60L\n4. >=60L\nSelect your desired price range: ");
            scanf("%d", &r);
            switch(r){
                case 1:
                    printf("1. Ford\n2. Honda\n3. Hyundai\n4. Suzuki\n5. Tata\n6. Toyota\n7. Volkswagen\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. Icon\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 6L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. Amaze\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 8L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 3:
                            printf("1. Verna\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 11L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 4:
                            printf("1. Swift Dzire \n2. SX4\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 9L");
                            }
                            else if(r==2){
                                printf("Cost: 8L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 5:
                            printf("1. Manza\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 6L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 6:
                            printf("1. Etios\n2. Corolla Altis\n3. Yaris\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 8L");
                            }
                            else if(r==2){
                                printf("Cost: 18L");
                            }
                            else if(r==3){
                                printf("Cost: 11L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 7:
                            printf("1. Vento\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 11L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 2:
                    printf("1. Skoda\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. Laura\n2. Octavia\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 21L");
                            }
                            else if(r==2){
                                printf("Cost: 38L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 3:
                    printf("1. Audi\n2. BMW\n3. Mercedes\n4. Toyota\n5. Volvo\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. A4\n2. A6\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 44L");
                            }
                            else if(r==2){
                                printf("Cost: 58L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. 3 Series\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 45L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 3:
                            printf("1. C-Class\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 44L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 4:
                            printf("1. Camry\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 56L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 5:
                            printf("1. S40\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 52L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                case 4:
                    printf("1. Audi\n2. Bentley\n3. BMW\n4. Jaguar\n5. Mercedes\n6. Rolls-Royce\n7. Volvo\nSelect your desired manufacturer: ");
                    scanf("%d", &m);
                    switch(t){
                        case 1:
                            printf("1. A6\n2. A8\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 63L");
                            }
                            else if(r==2){
                                printf("Cost: 130L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 2:
                            printf("1. Continental\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 390L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 3:
                            printf("1. 5 Series\n2. 7 Series\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 61L");
                            }
                            else if(r==2){
                                printf("Cost: 110L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 4:
                            printf("1. XJ\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 99L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 5:
                            printf("1. E-Class\n2. Maybach\n3. S-Class\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 65L");
                            }
                            else if(r==2){
                                printf("Cost: 281L");
                            }
                            else if(r==3){
                                printf("Cost: 196L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 6:
                            printf("1. Ghost\n2. Phantom\n3. Wraith\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 596L");
                            }
                            else if(r==2){
                                printf("Cost: 1002L");
                            }
                            else if(r==3){
                                printf("Cost: 674L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        case 7:
                            printf("1. S90\nSelect your car: ");
                            scanf("%d", &r);
                            if(r==1){
                                printf("Cost: 61L");
                            }
                            else{
                                printf("You nave Enter the wrong number");
                            }
                            break;
                        default:
                            printf("You nave Enter the wrong number");
                            break;
                    }
                    break;
                }
            break;
        default:
            printf("You nave Enter the wrong number\n");
            break;
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//-------------------------------------------------------------------------------------------------------//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int ind_cost[10],required[10],slno=0,recp=2354;
float cartax=0.5;
//Database of customer
struct customer{
    char cust_name[30];
    char cust_carno[10];
    int cust_time;
    int cust_cday;
    int cust_cmonth;
    int cust_dday;
    int cust_dmonth;
    int cust_cost;
}cust[10];int numcust=10;
//Database of types of repairs available
struct repair{
    int repair_id;
    char repair_name[100];
    int repair_time;
    int repair_cost[3];
}arr[10];int repno =10;
struct repair *repser=arr;
void printreh(int n)
{
    int i;
    if(n==0)
        for(i=0;i<103;i++)
        {
            printf("_");
        }
    else
        for(i=0;i<103;i++)
        {
            printf("-");
        }
    printf("\n");
}
//To print bill
void print_bill(char name[30],char no[10],int ccost,int exescount,int extracost)
{
    float service_tax,rcost;
    int i;
    service_tax=cartax*ccost/100;
    rcost=ccost+service_tax;

    printreh(0);
    printf("                                           CAR BILL\n");
    printreh(1);
    printf("   HSD car services\n");
    printf("   HSD street\n");
    printf("   Vellore 632001\n");
    printf("                                                                              Receipt no :  %d\n",recp);
    printf("                                                                            Customer Name:  %s\n",name);
    printf("                                                                               Vehicle No:  %s\n",no);
    printreh(0);
    printf("   SERVICE DESCRIPTION                                                                      RS AMOUNT\n");
    printreh(1);
    for(i=0;i<10;i++)
    {
        if((repser+required[i])->repair_cost[0]!=-1 && ind_cost[required[i]]!=0)
        {
            printf("   %s                                              %d\n",(repser+required[i])->repair_name,ind_cost[required[i]]);
        }
    }
    if(exescount==1)
    {
        printf("   Extra repairs cost                                                                        %d",extracost);
    }
    printf("\n\n\n");
    printreh(1);
    printf("                                                                      AMOUNT                 %d\n",ccost);
    printf("                                                                SERVICE TAX                  %.2f\n",service_tax);
    printreh(1);
    printf("                                                                TOTAL AMOUNT              RS %.2f\n",rcost);
    printreh(1);
    printf("                                         Please come again\n");
    printreh(0);
}

void recprint(int p)
{
    if(p<9)
    {
        printf("id - %d  | service - %s\n",(repser+p)->repair_id,(repser+p)->repair_name);
        p++;
        recprint(p);
    }
    else
    {
        printf("id - %d | service - %s\n",(repser+p)->repair_id,(repser+p)->repair_name);
    }

}

//For giving car to service
void Car_service()
{

    strcpy((repser+0)->repair_name,"Battery replacement                         ");
    strcpy((repser+1)->repair_name,"Brake replacement                           ");//
    strcpy((repser+2)->repair_name,"Ignition coil and spark plug                ");
    strcpy((repser+3)->repair_name,"Oil filter                                  ");//
    strcpy((repser+4)->repair_name,"Wiper blade replacement                     ");
    strcpy((repser+5)->repair_name,"New tires                                   ");//
    strcpy((repser+6)->repair_name,"Wheel alignment                             ");//
    strcpy((repser+7)->repair_name,"Wheel balancing                             ");//
    strcpy((repser+8)->repair_name,"Engine lubrication system replacement       ");
    strcpy((repser+9)->repair_name,"Scheduled maintenance                       ");

    (repser+0)->repair_time=3;
    (repser+1)->repair_time=6;
    (repser+2)->repair_time=12;
    (repser+3)->repair_time=12;
    (repser+4)->repair_time=3;
    (repser+5)->repair_time=12;
    (repser+6)->repair_time=6;
    (repser+7)->repair_time=3;
    (repser+8)->repair_time=12;
    (repser+9)->repair_time=24;


    (repser+0)->repair_cost[0]=3000;  (repser+0)->repair_cost[1]=2500;  (repser+0)->repair_cost[2]=2000;
    (repser+1)->repair_cost[0]=10000; (repser+1)->repair_cost[1]=9050;  (repser+1)->repair_cost[2]=8000;
    (repser+2)->repair_cost[0]=2200;  (repser+2)->repair_cost[1]=2000;  (repser+2)->repair_cost[2]=1800;
    (repser+3)->repair_cost[0]=836;   (repser+3)->repair_cost[1]=760;   (repser+3)->repair_cost[2]=500;
    (repser+4)->repair_cost[0]=1050;  (repser+4)->repair_cost[1]=950;   (repser+4)->repair_cost[2]=780;
    (repser+5)->repair_cost[0]=26000; (repser+5)->repair_cost[1]=21000; (repser+5)->repair_cost[2]=14000;
    (repser+6)->repair_cost[0]=200;   (repser+6)->repair_cost[1]=0;     (repser+6)->repair_cost[2]=0;
    (repser+7)->repair_cost[0]=250;   (repser+7)->repair_cost[1]=0;     (repser+7)->repair_cost[2]=0;
    (repser+8)->repair_cost[0]=25000; (repser+8)->repair_cost[1]=19000; (repser+8)->repair_cost[2]=15000;
    (repser+9)->repair_cost[0]=2000;  (repser+9)->repair_cost[1]=0;     (repser+9)->repair_cost[2]=0;

    int i,j,z,x=10,dist,total_time=0,total_cost=0,grade,receipt,jcount,date;
    do
    {
        printf("Enter date in the format of MMDD or MDD: ");
        scanf("%d",&date);
        cust[slno].cust_cmonth=date/100;
        cust[slno].cust_cday=date-(100*cust[slno].cust_cmonth);
    }while(cust[slno].cust_cmonth>12 || cust[slno].cust_cmonth<=0 || cust[slno].cust_cday>31 || cust[slno].cust_cday<1);
    float service_tax;
    //char carno[10],name[25],repair[x][4][100];
    printf("Enter your name:");
    scanf(" %[^\n]%*c",cust[slno].cust_name);
    printf("Enter your car number:");
    scanf(" %[^\n]%*c",cust[slno].cust_carno);


    for(i=0;i<repno;i++)
    {
        (repser+i)->repair_id=i+1;
        required[i]=-1;
    }

    printf("Total distance covered by the car (else '0')\n");
    scanf("%d",&z);
    if(z>=0)
    {
        dist=z;
        printf("As your car has traveled an approximate distance of %d KM we recommend you to take this services\n",dist);

        if(z>3000)
        {
            printf("%s\n",(repser+6)->repair_name);
            if(5000<=dist)
            {
                printf("%s\n",(repser+3)->repair_name);
                printf("%s\n",(repser+7)->repair_name);
                if(10000<=dist)
                {
                    printf("%s\n",(repser+1)->repair_name);
                    if(20000<=dist)
                    {
                        printf("%s\n",(repser+5)->repair_name);
                    }
                }
            }
        }
        else
        {
            printf("There are no recommended repairs\n");
        }

    }
    printf("\nThese are the services available at our showroom\n\n");

    recprint(0);

    printf("According to the given ID's for each type of service select what services does your car required\n");
    printf("After all required services are given please enter -1\n");

    for(i=0;i<repno;i++)
    {
        jcount=0;
        printf("Enter required repair id\n");
        scanf("%d",&z);
        for(j=0;j<x;j++)
        {
            if(required[j]==z-1)
            {
                jcount=1;
            }
	    }
	    if(jcount==0)
	    {
	        if(z!=-1)
	        {
	            required[i]=z-1;
		    }
		    if(z==-1)
		    {
		        break;
		    }
	    }
	    if(jcount==1)
	    {
	        printf("this is already taken\n");
	        i--;
	    }

    }

    for(i=0;i<repno;i++)
    {
        if(required[i]!=-1)
        {
            if((repser+required[i])->repair_cost[1]!=0)
            {
                do
                {
                    printf("enter which grade quality do you want for %s\n",(repser+required[i])->repair_name);
                    printf("There are three grades 1,2,3 select one , 1 is the best grade\n");
                    scanf("%d",&grade);
                    if(grade==1 || grade==2 || grade ==3)
                    {
                        grade=grade-1;
                        total_cost+=(repser+required[i])->repair_cost[grade];
                        ind_cost[required[i]]=(repser+required[i])->repair_cost[grade];
                    }
                }while(grade!=0 && grade!=1 && grade!=2);
            }
            else
            {
                total_cost+=(repser+required[i])->repair_cost[0];
                ind_cost[required[i]]=(repser+required[i])->repair_cost[0];
            }
        }
    }

    for(i=0;i<repno;i++)
    {
        if(required[i]!=-1)
        {
            total_time+=(repser+required[i])->repair_time;
        }

    }

    if(total_time%24==0)
    {
        total_time=(total_time/24);
    }
    else
    {
        total_time=(total_time/24)+1;
    }

    service_tax=0.5*total_cost/100;
    if(total_time==1)
    {
        printf("your repairs will be completed in %d day\n",total_time);
    }
    else
    {
        printf("your repairs will be completed by %d days\n",total_time);
    }
    cust[slno].cust_time=total_time;
    cust[slno].cust_cost=total_cost;
    printf("you can pay the bill when you come to take your car\n");
    printf("If you want to print estimated receipt enter 1 else enter 0\n");
    scanf("%d",&receipt);

    if(receipt==1)
    {
        print_bill(cust[slno].cust_name,cust[slno].cust_carno,total_cost,0,0);

    }
    if(receipt==0)
    {
        printf("total estimated cost for repair is %d\n",total_cost);
    }

    printf("If there are any extra repairs we will inform you when you come again\n\n\n");
}
//for taking car after service
void Car_return()
{
    int rcar_time,extra,extrarep,i,tcount=0;

    printf("Welcome back\nPlease enter your car no\n");
    char rcar_no[10];
    scanf("%s",rcar_no);
    for(i=0;i<numcust;i++)
    {
        if(strcmp(cust[i].cust_carno,rcar_no)==0 && cust[i].cust_dday==0)
        {
            int date;
            printf("Hi Mr/Ms %s\n",cust[i].cust_name);
            do
            {
                printf("Enter date in the format of MMDD or MDD: ");
                scanf("%d",&date);
                cust[i].cust_dmonth=date/100;
                cust[i].cust_dday=date-(100*cust[i].cust_dmonth);
            }while(cust[i].cust_dmonth<1 || cust[i].cust_dmonth>12 || cust[i].cust_dday<0 || cust[i].cust_dday>31);

            if(cust[i].cust_dmonth-cust[i].cust_cmonth==0)
            {
                rcar_time=cust[i].cust_dday-cust[i].cust_cday;
            }
            else
            {
                rcar_time=30-(cust[i].cust_cday-cust[i].cust_dday);
            }
            if(rcar_time>=cust[i].cust_time)
            {
                printf("Your work has been completed\n");
                printf("Give 1 if any extra repairs has been done else enter 0\n");
                scanf("%d",&extra);
                if(extra == 1)
                {
                    printf("What is the total cost if extra repairs\n");
                    scanf("%d",&extrarep);
                    cust[i].cust_cost+=extrarep;
                    print_bill(cust[i].cust_name,cust[i].cust_carno,cust[i].cust_cost,extra,extrarep);
                }
                if(extra == 0)
                {
                    printf("This is the bill\n");
                    print_bill(cust[i].cust_name,cust[i].cust_carno,cust[i].cust_cost,0,0);
                }

            }
            else
            {
                cust[i].cust_dday=0;cust[i].cust_dmonth=0;
                printf("All your work has not completed\nPlease come after %d day\n\n\n",(cust[i].cust_time - rcar_time));
            }
            tcount=1;
        }
    }

    if(tcount==0)
    {
        printf("A car with car number %s is not with us\n\n\n",rcar_no);
    }
}

void printrecphead(int flag)
{

    printreh(0);
    if(flag==0)
        printf("                                    DELEVERED CARS REPORT\n");
    if(flag==1)
        printf("                                  NOT-DELEVERED CARS REPORT\n");
    printreh(1);
    printf("   Date                Customer Name                    Car Number              Total Cost \n");
    printreh(1);
}

void printreport(int day,int month,char name[30],char carno[10],int cost)
{

    int index1,index2,index3;
    char carnoo[10];char namee[30];
    strcpy(carnoo,carno);strcpy(namee,name);
    index1= strlen(namee);
    index2= strlen(carnoo);
    index1=29-index1;
    index2=9-index2;
    for(index3=0;index3<index1;index3++)
    {
        strcat(namee," ");
    }
    for(index3=0;index3<index2;index3++)
    {
        strcat(carnoo," ");
    }

    printf("   %d-%d               %s    %s               %.2f  \n",day,month,namee,carnoo,cost*(1+cartax/100));
}

void rip1()
{
    int date,day,month,i,dnd,tcount=0;
    printf("Enter 0 for delivered 1 of not delivered list\n");
    scanf("%d",&dnd);
    if(dnd==1)
    {
        do
        {
            printf("Enter date in the format of MMDD or MDD: ");
            scanf("%d",&date);
            month=date/100;
            day=date-(100*month);
        }while(month<1 || month >12 || day<1 || day>31);

        for(i=0;i<numcust;i++)
        {
            if(day==cust[i].cust_cday && month==cust[i].cust_cmonth && cust[i].cust_dday==0)
            {
                if(tcount==0)
                {
                    tcount=1;
                    printrecphead(dnd);
                }
                printreport(cust[i].cust_cday,cust[i].cust_cmonth,cust[i].cust_name,cust[i].cust_carno,cust[i].cust_cost);
            }
        }

    }
    if(dnd==0)
    {
        do
        {
            printf("Enter date in the format of MMDD or MDD: ");
            scanf("%d",&date);
            month=date/100;
            day=date-(100*month);
        }while(month<1 || month >12 || day<1 || day>31);

        for(i=0;i<numcust;i++)
        {
            if(day==cust[i].cust_dday && month==cust[i].cust_dmonth)
            {
                if(tcount==0)
                {
                    tcount=1;
                    printrecphead(dnd);
                }
                printreport(cust[i].cust_cday,cust[i].cust_cmonth,cust[i].cust_name,cust[i].cust_carno,cust[i].cust_cost);
            }
        }
    }
    if(tcount==0)
    {
        printf("No data available\n\n");
    }
}

void rip2()
{
    int date,day1,day2,month1,month2,i,dnd,tcount=0;
    printf("Enter 0 for delivered 1 of not delivered list\n");
    scanf("%d",&dnd);
    do
    {
        printf("Enter first date in the format of MMDD or MDD: ");
        scanf("%d",&date);
        month1=date/100;
        day1=date-(100*month1);
    }while(month1>12 || month1 <1 || day1>31 || day1<1);
    do
    {
        printf("Enter last date in the format of MMDD or MDD: ");
        scanf("%d",&date);
        month2=date/100;
        day2=date-100*month2;
    }while(month2>12 || month2 <1 || day2>31 || day2<1);
    if(dnd==1)
    {
        for(i=0;i<numcust;i++)
        {
            if(day1<=cust[i].cust_cday && month1<=cust[i].cust_cmonth && day2>=cust[i].cust_cday && month2>=cust[i].cust_cmonth && cust[i].cust_dday==0)
            {
                if(tcount==0)
                {
                    tcount=1;
                    printrecphead(dnd);
                }
                printreport(cust[i].cust_cday,cust[i].cust_cmonth,cust[i].cust_name,cust[i].cust_carno,cust[i].cust_cost);
            }
        }
    }
    if(dnd==0)
    {
        for(i=0;i<numcust;i++)
        {
            if(day1<=cust[i].cust_dday && month1<=cust[i].cust_dmonth && day2>=cust[i].cust_dday && month2>=cust[i].cust_dmonth)
            {
                if(tcount==0)
                {
                    tcount=1;
                    printrecphead(dnd);
                }
                printreport(cust[i].cust_cday,cust[i].cust_cmonth,cust[i].cust_name,cust[i].cust_carno,cust[i].cust_cost);
            }
        }
    }
    if(tcount==0)
    {
        printf("No data available\n\n");
    }
}



void reports()
{
    int rip;
    printf("1) Press 1 if you want day wise reports\n2) Press 2 if you want reports between two days\n");
    scanf("%d",&rip);
    switch(rip)
    {
        case 1:
            rip1();
            break;
        case 2:
            rip2();
            break;
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------------------------------------------------------------//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Job()
{
    char* ar1[6]={"Mechanic","Salesman","Safety Inspector","Manager","Designer","Supervisor"};
    printf("Applying for position :\n");
    start:
    printf("1.%s\n",ar1[0]);
    printf("2.%s\n",ar1[1]);
    printf("3.%s\n",ar1[2]);
    printf("4.%s\n",ar1[3]);
    printf("5.%s\n",ar1[4]);
    printf("6.%s\n",ar1[5]);
    printf("Enter position here: ");
    int op;
    scanf("%d",&op);
    if(op<0||op>6){
        printf("wrong information entered \n");
        goto start;
    }
    printf("The following are qualifications required: \n");
    printf("1.Education till class 10 \n2.Class 12 education\n3.Btech Degree\n");
    printf("Enter the Class 10 percentage here: ");
    float marks[3];
    scanf("%f",&marks[0]);
    if(marks[0]>100||marks[0]<0){
        printf("wrong information entered \n");
        goto start;
    }
    printf("Enter the Class 12 percentage here: ");
    scanf("%f",&marks[1]);
    if(marks[1]>100||marks[1]<0){
         printf("wrong information entered \n");
        goto start;
    }
    printf("Enter the CGPA between 0 to 10: ");
    scanf("%f",&marks[2]);
    if(marks[2]>10||marks[2]<0){
        printf("wrong information entered \n");
        goto start;
    }
    bool flag=false;
    if(marks[1]>=87&&marks[2]>=8.6){
        if(op==6){
            flag=true;
        }
    }
    if(marks[1]>=80&&marks[2]>=8.0){
        if(op==4||op==5){
            flag=true;
        }
    }
    if(marks[1]>=70&&marks[2]>=8.0){
        if(op==3||op==1||op==5){
            flag=true;
        }
    }
    if(marks[1]>=65&&marks[2]>=6.5){
        if(op==1||op==2||op==3||op==4||op==5){
            flag=true;
        }
    }
    if(flag==false){
        printf("Sorry the minimum requirements are not meeting\n");
        printf("Do you want to try again?\nPress yes to try again\n");
        char option[5];
        scanf("%s",option);
        if(!strcmp(option,"yes")){
        goto start;
        }
        if(!strcmp(option,"yes")){
        goto start;
        }
        }
    else{
        if(op==6){
           if(marks[1]>=87&&marks[1]<=100&&marks[2]>=8.6){
                printf("The salary will be Rs 90000 per month\n");
            }
        }
        else if(op==4||op==6){
            if(marks[1]>=80&&marks[2]>=8){
                printf("The salary will be Rs 85000 per month\n");
            }
        }
        else if(op==1||op==3||op==5||op==4||op==6){
            if(marks[1]>=70&&marks[2]>=8){
                printf("The salary will be Rs 50000 per month\n");
            }
            else if(marks[1]>85&&marks[2]>=9){
                printf("The salary will be Rs 80000 per month\n");
            }
        }
        else if(op==2){
            if(marks[1]>=65&&marks[2]>=6.5){
                printf("The salary will be Rs 40000 per month\n");
            }
            else if(marks[1]>85&&marks[2]>=9){
                printf("The salary will be Rs 60000 per month\n");
            }
        }
    }
}

void Car_services()
{
    int choice;
    printf("1) Enter 1 for car service\n2) Enter 2 for car delivery\n3) Enter 3 for reports\n");
    scanf("%d",&choice);
    switch(choice)
        {
        case 1:
            Car_service();
            slno++;recp++;
            break;
        case 2:
            Car_return();
            break;recp++;
        case 3:
            reports();
            break;
        }
}

int main()
{

    int choice,inf=1;
    while(inf>0)
    {
        printf("1) Press 1 to buy a new car\n2) Press 2 for car services \n3) Press 3 for job opportunity\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            New_car();
            break;
        case 2:
            Car_services();
            break;
        case 3:
            Job();
            break;
        }
        printf("\n\n\n");
    }
}