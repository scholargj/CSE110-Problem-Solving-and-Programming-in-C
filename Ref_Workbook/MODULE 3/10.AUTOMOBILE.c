#include<stdio.h> 

struct automobile 
{ 
char serial_number[6]; 
int year_of_manufacture; 
char material[20]; 
int quantity; 
}; 


int main() 
{ 
int i; 

struct automobile parts[60]= 
{ 
{"AA0",2019,"ENGINE",8}, 
{"AA1",2019,"ENGINE",7}, 
{"AA2",2020,"WHEELS",10}, 
{"AA3",2018,"CHOKES",11}, 
{"AA4",2019,"HORN",8}, 
{"AA5",2020,"BRAKES",10}, 
{"AA6",2019,"ABS BRAKES",11}, 
{"AA7",2018,"PETROL TANK",8}, 
{"AA8",2020,"GEARS",12}, 
{"AA9",2019,"SWITCH",20}, 
{"BB0",2019,"ENGINE",8}, 
{"BB1",2019,"ENGINE",7}, 
{"BB2",2020,"WHEELS",10}, 
{"BB3",2018,"CHOKES",11}, 
{"BB4",2019,"HORN",8}, 
{"BB5",2020,"BRAKES",10}, 
{"BB6",2019,"ABS B",11}, 
{"BB7",2018,"PETROL",8}, 
{"BB8",2020,"GEARS",12}, 
{"BB9",2019,"SWITCH",20}, 
{"CC0",2019,"ENGINE",8}, 
{"CC1",2019,"ENGINE",7}, 
{"CC2",2020,"WHEELS",10}, 
{"CC3",2018,"CHOKES",11}, 
{"CC4",2019,"HORN",8}, 
{"CC5",2020,"BRAKES",10}, 
{"CC6",2019,"ABS B",11}, 
{"CC7",2018,"PETROL",8}, 
{"CC8",2020,"GEARS",12}, 
{"CC9",2019,"SWITCH",20}, 
{"DD0",2019,"ENGINE",8}, 
{"DD1",2019,"ENGINE",7}, 
{"DD2",2020,"WHEELS",10}, 
{"DD3",2018,"CHOKES",11}, 
{"DD4",2019,"HORN",8}, 
{"DD5",2020,"BRAKES",10}, 
{"DD6",2019,"ABS B",11}, 
{"DD7",2018,"PETROL TANK",8},
{"DD8",2020,"GEARS",12}, 
{"DD9",2019,"SWITCH",20}, 
{"EE0",2019,"ENGINE",8}, 
{"EE1",2019,"ENGINE",7}, 
{"EE2",2020,"WHEELS",10}, 
{"EE3",2018,"CHOKES",11}, 
{"EE4",2019,"HORN",8}, 
{"EE5",2020,"BRAKES",10}, 
{"EE6",2019,"ABS BRAKES",11}, 
{"EE7",2018,"PETROL TANK",8}, 
{"EE8",2020,"GEARS",12}, 
{"EE9",2019,"SWITCH",20}, 
{"FF0",2019,"ENGINE",8}, 
{"FF1",2019,"ENGINE",7}, 
{"FF2",2020,"WHEELS",10}, 
{"FF3",2018,"CHOKES",11}, 
{"FF4",2019,"HORN",8}, 
{"FF5",2020,"BRAKES",10}, 
{"FF6",2019,"ABS BRAKES",11}, 
{"FF7",2018,"PETROL TANK",8}, 
{"FF8",2020,"GEARS",12}, 
{"FF9",2019,"SWITCH",20} 
}; 

for(i=11;i<=26;i++) 
{ 
printf("\n%s",parts[i].serial_number); 
printf("\t%d",parts[i].year_of_manufacture); 
printf("\t\t%s",parts[i].material); 
printf("\t\t\t\t%d",parts[i].quantity); 
} 
return 0; 
} 

