/*Ammar Khalid
 F20BSCS001*/

#include<stdio.h>
#include<string.h>
#include<process.h>
int main(){
	printf("Bot: Hi, my name is FUSC-bot, what is your name?\n");
	char name[20];
	gets(name);
	printf("Bot: Hey %s, how can I help you?\n",name);
	char str1[20];
	char str2[20] = "bba";
	char str3[20] = "bscs";
	char str4[20] = "bs-it";
	char str5[20] = "bsc-iet";
	char str6[20] = "programs";
	char str7[20] = "management sciences";
	char str8[25] = "software engineering";
	char str9[20] = "fee structure";
	char str10[20] = "exit";
	
	while(1)
	{
		gets(str1);
		strlwr(str1);
		char *result1 = strstr(str1,str2);
		char *result2 = strstr(str1,str3);
		char *result3 = strstr(str1,str4);
		char *result4 = strstr(str1,str5);
		char *result5 = strstr(str1,str6);
		char *result6 = strstr(str1,str7);
		char *result7 = strstr(str1,str8);
		char *result8 = strstr(str1,str9);
		char *result9 = strstr(str1,str10);
		
		
		if(result1){
		printf("\nBot: Yes we do offer BBA!\n");
	}	
	else if(result2)
	{
		printf("\nBot: Yes, we are offering BSCS!\n");
	}
	else if(result3)
	{
		printf("\nBot: No, we are not offering BS-IT at the moment\n");
	}
	else if(result4)
	{
		printf("\nBot: Yes, we are offering BSc-IeT\n");
	}
	else if(result5)
	{
		printf("\nBot: At the moment, we are offering degrees in Software engineereing and Management Sciences department,\nWhich department are you interested in?\n");
	}
	else if(result6)
	{
		printf("\nBot: In management sciences department, we are offering\n BBA\n");
	}
	else if(result7){
		printf("\nBot: In software engineering department, we are offering\n BS-Computer Science\n BS-Software Engineering\n BS- IET\n");
	}
	else if(result8){
		printf("\nBot: The fee structure for different programs is as follows:\n BS-SE: 56,000PKR\n BS-CS: 60,000PKR\n BSC-IeT: 48,000PKR\n");
	}
	else if(result9){
		printf("\nBot: Thank You for Chatting with me %s",name);
		exit(0);
	}
	else{
		printf("\nBot: I cannot answer this, you may consider calling the real assistant in campus\n");
	}
	}
}

