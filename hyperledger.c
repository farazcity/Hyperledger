#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct user1
{
    int bal,myaddress;
};

struct user1 u1;

struct user2
{
    int bal,myaddress;
};

struct user2 u2;

struct user3
{
    int bal,myaddress;
};

struct user3 u3;

struct user4
{
    int bal,myaddress;
};

struct user4 u4;

struct user5
{
    int bal,myaddress;
};

struct user5 u5;

struct channel1
{
    int from,to,money;
};

struct channel1 ch1[100];

struct channel2
{
    int from,to,money;
};

struct channel2 ch2[100];

void main()
{

	int username,password,receiver,amount,i,c1,c2,chan,ch;
    	u1.bal=500;            
	u1.myaddress=11;
	u2.bal=1000;           
	u2.myaddress=22;
 	u3.bal=1500;           
 	u3.myaddress=33;
	u4.bal=2000;            
	u4.myaddress=44;
    	u5.bal=2500;            
	u5.myaddress=55;
    
	int username1=1,username2=2,username3=3,username4=4,username5=5;
    	int password1=123,password2=234,password3=345,password4=456,password5=567;
    	printf("username");
    	scanf("%d",&username);
    	printf("password");
    	scanf("%d",&password);
    	while(1){                                                                           
		//user1
    		if((username==username1)&&(password==password1))
    		{
			printf("1.Balance\n2.Transfer\n3.Channel\n4.Logout\nEnter Choice:\n");
        			scanf("%d",&ch);

       			switch(ch)
        			{
            			case 1: 
					printf("Balance=%d",u1.bal);
                    			break;

            			case 2: 
					printf("To");
                    			scanf("%d",&receiver);
                    			printf("denomination");
                   			scanf("%d",&amount);
                    			if(amount>u1.bal)
                        			printf("Transaction Unsuccessful");
                    			else
                    			{

                            			ch1[i].from=u1.myaddress;
                            			ch1[i].to=receiver;
                            			ch1[i].money=amount;
                            			u1.bal=u1.bal-amount;
                            			c1++;
                            			if(receiver==u2.myaddress)
                                				u2.bal=u2.bal+amount;
                            			if(receiver==u3.myaddress)
                                				u3.bal=u3.bal+amount;
                            			if(receiver==u4.myaddress)
                                				u4.bal=u4.bal+amount;
                            			if(receiver==u5.myaddress)
                                				u5.bal=u5.bal+amount;




                    			}
                    			break;

            			case 3:
					for(i=0;i<c1;i++){
                        			printf("%d",ch1[i].from);
                        			printf("%d",ch1[i].to);
                        			printf("%d",ch1[i].money);
                    			}
                    			break;
            		
				case 4:
					exit(0);

        			}
		}
	}

	while(1){                                                                                           
        		//user2
		if((username==username2)&&(password==password2)){
        			printf("1.Balance\n2.Transfer\n3.Channel\n4.Logout\nEnter Choice\n");
        			scanf("%d",&ch);

        			switch(ch)
        			{
            			case 1: 
					printf("Balance=%d",u2.bal);
                    			break;
            			case 2: 
					printf("To");
                    			scanf("%d",&receiver);
                    			printf("denomination");
                    			scanf("%d",&amount);
                    			if(amount>u2.bal)
                        			printf("Transaction Unsuccessful");
                    			else
                    			{

                            			ch1[i].from=u2.myaddress;
                            			ch1[i].to=receiver;
                            			ch1[i].money=amount;
                            			u2.bal=u2.bal-amount;
                            			c1++;
                            			if(receiver==u1.myaddress)
                                				u1.bal=u1.bal+amount;
                            			if(receiver==u3.myaddress)
                                				u3.bal=u3.bal+amount;
                            			if(receiver==u4.myaddress)
                                				u4.bal=u4.bal+amount;
                            			if(receiver==u5.myaddress)
                                				u5.bal=u5.bal+amount;




                    			}
                    			break;
           			 case 3:
					for(i=0;i<c1;i++){
                       			printf("%d",ch1[i].from);
                        			printf("%d",ch1[i].to);
                        			printf("%d",ch1[i].money);
                    			}
                    			break;
            			case 4:
					exit(0);

        			}
    		}
	}
	while(1){                                                                                       
		//user3
    		if((username==username3)&&(password==password3)){
        			printf("1.Balance\n2.Transfer\n3.Channel\n4.Logout\nEnter Choice:\n");
        			scanf("%d",&ch);

        			switch(ch)
        			{
            			case 1: 
					printf("Balance=%d",u3.bal);
                    			break;

            			case 2: 
					printf("To");
                    			scanf("%d",&receiver);
                    			printf("denomination");
                    			scanf("%d",&amount);
                    			if(amount>u3.bal)
                        				printf("Transaction Unsuccessful");
                    			else{

                            			ch2[i].from=u3.myaddress;
                            			ch2[i].to=receiver;
                            			ch2[i].money=amount;
                            			u3.bal=u3.bal-amount;
                            			c2++;
                            			if(receiver==u2.myaddress)
                                				u2.bal=u2.bal+amount;
                            			if(receiver==u1.myaddress)
                                				u1.bal=u1.bal+amount;
                            			if(receiver==u4.myaddress)
                                				u4.bal=u4.bal+amount;
                            			if(receiver==u5.myaddress)
                                				u5.bal=u5.bal+amount;




                    			}
                    			break;

            			case 3:
					for(i=0;i<c2;i++){
                        			printf("%d",ch2[i].from);
                       			printf("%d",ch2[i].to);
                        			printf("%d",ch2[i].money);
                    			}
                    			break;

            			case 4:
					exit(0);

        			}
    		}
	}
    	while(1){                                                                                       
		//user4
    		if((username==username4)&&(password==password4)){
        			printf("1.Balance\n2.Transfer\n3.Channel\n4.Logout\nEnter Choice:\n");
        			scanf("%d",&ch);
        			switch(ch){
            
				case 1: 
					printf("Balance=%d",u4.bal);
                    			break;

            			case 2: 
					printf("To");
                    			scanf("%d",&receiver);
                    			printf("denomination");
                    			scanf("%d",&amount);
                    			if(amount>u4.bal)
                        			printf("Transaction Unsuccessful");
                   			else
                    			{

                            			ch2[i].from=u4.myaddress;
                            			ch2[i].to=receiver;
                            			ch2[i].money=amount;
                            			u1.bal=u1.bal-amount;
                            			c2++;
                            			if(receiver==u2.myaddress)
                                				u2.bal=u2.bal+amount;
                            			if(receiver==u3.myaddress)
                                				u3.bal=u3.bal+amount;
                            			if(receiver==u4.myaddress)
                                				u1.bal=u1.bal+amount;
                            			if(receiver==u5.myaddress)
                                				u5.bal=u5.bal+amount;




                    			}
                    			break;

            			case 3:
					for(i=0;i<c2;i++){
                        			printf("%d",ch2[i].from);
                        			printf("%d",ch2[i].to);
                        			printf("%d",ch2[i].money);
                    			}
                   			break;

            			case 4:
					exit(0);

        			}
    		}
    	}
    	while(1){                                                                                           
		//user5
    		if((username==username5)&&(password==password5)){
        			printf("1.Balance\n2.Transfer\n3.Channel 1\nchannel 2\n4.Logout\nEnter Choice:\n");
        			scanf("%d",&ch);
        			switch(ch){

            			case 1: 
					printf("Balance=%d",u5.bal);
                    			break;

            			case 2: 
					printf("transact in channel");
                   			scanf("d",&chan);
                    			if(chan==1){
                    				printf("To");
                    				scanf("%d",&receiver);
                   				printf("denomination");
                    				scanf("%d",&amount);
                    				if(amount>u5.bal)
                        					printf("Transaction Unsuccessful");
                    			else{

                            			ch1[i].from=u5.myaddress;
                            			ch1[i].to=receiver;
                            			ch1[i].money=amount;
                            			u5.bal=u5.bal-amount;
                            			c1++;
                            			if(receiver==u2.myaddress)
                                				u2.bal=u2.bal+amount;
                            			if(receiver==u3.myaddress)
                                				u3.bal=u3.bal+amount;
                            			if(receiver==u4.myaddress)
                                				u4.bal=u4.bal+amount;
                            			if(receiver==u5.myaddress)
                                				u1.bal=u1.bal+amount;




                    				}
                    				break;
					}
                    			else{
                        			printf("To");
                    			scanf("%d",&receiver);
                    			printf("denomination");
                    			scanf("%d",&amount);
                    			if(amount>u5.bal)
                        				printf("Transaction Unsuccessful");
                    			else{

                            			ch2[i].from=u5.myaddress;
                            			ch2[i].to=receiver;
                            			ch2[i].money=amount;
                            			u5.bal=u5.bal-amount;
                            			c2++;
                            			if(receiver==u2.myaddress)
                                				u2.bal=u2.bal+amount;
                            			if(receiver==u3.myaddress)
                               	 			u3.bal=u3.bal+amount;
                            			if(receiver==u4.myaddress)
                                				u4.bal=u4.bal+amount;
                            			if(receiver==u5.myaddress)
                                				u1.bal=u1.bal+amount;

                    			}

           			 case 3:
					printf("view channel");
                    			scanf("%d",&chan);
                    			if(chan==1){
                        				for(i=0;i<c1;i++){
                        					printf("%d",ch1[i].from);
                        					printf("%d",ch1[i].to);
                        					printf("%d",ch1[i].money);}
                    				}
                    			break;
					}
                    			if(chan==2){
                         				for(i=0;i<c2;i++){
                        					printf("%d",ch2[i].from);
                        					printf("%d",ch2[i].to);
                        					printf("%d",ch2[i].money);
                        				 }
                    			}

            				case 4:
						exit(0);

        			}
    		}
    	}
}
