#include<stdio.h>
#include<stdlib.h>
//ham kiem tra so nguyen to
int snt(int num1)
{
	int j;
	if(num1==0 || num1==1)
	{
		return 0;
	}
	else if(num1==2)
	{
		return 1;
	}
	else
	{
		for(j=2;j<num1;j++)
		{
			if(num1%j==0)
			{
				return 0;
			}
		}
		return 1;
	}
}

int main()
{
	//khai bao mang 100 phan tu 
	int i,n,arr[100];
	//nhap so phan tu cua mang
				do
	            {
	            	printf("Nhap so phan tu cua mang n<=100: ");
		            scanf("%d",&n);
	            }
	            while(n>100);
            	//nhap phan tu cho mang
	            for(i=0;i<n;i++)
            	{
		            printf("arr[%d]=",i);
	             	scanf("%d",&arr[i]);
	            }
	
	//tao menu
	do
	{
		printf("\n1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra cac phan tu dang quan ly\n");
		printf("3.In ra gia tri cac phan tu chan va tinh tong\n");
		printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5.In ra cac phan tu la so nguyen to va tinh tong\n");
		printf("6.Nhap vao 1 so va dem xem co bao nhieu phan tu co gia tri nhu vay\n");
		printf("7.Them mot phan tu vao vi tri chi dinh\n");
		printf("8.Thoat\n");
		printf("Lua chon cua ban: \n");
		//lua chon menu
		int choice,sum,min,max,num,indexValue,addValue;
	
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				//nhap so phan tu cua mang
				do
	            {
	            	printf("Nhap so phan tu cua mang n<=100: ");
		            scanf("%d",&n);
	            }
	            while(n>100);
            	//nhap phan tu cho mang
	            for(i=0;i<n;i++)
            	{
		            printf("arr[%d]=",i);
	             	scanf("%d",&arr[i]);
	            }
	            break;
			case 2:
			    for(i=0;i<n;i++)
				{
					printf("%d\t",arr[i]);
				}
				break;
			case 3:
				sum=0;
			    for(i=0;i<n;i++)
				{
				    if(arr[i]%2==0)
					{
						printf("%d\t",arr[i]);
						sum+=arr[i];
					}	
				}
				printf("Tong so chan cua mang la: %d",sum);	
				break;
			case 4:
				min=arr[0],max=arr[0];
				for(i=1;i<n;i++)
				{
					if(min>arr[i])
					{
						min=arr[i];
					}
					if(max<arr[i])
					{
						max=arr[i];
					}
				}
				printf("Gia tri lon nhat: %d.Gia tri nho nhat: %d",max,min);
				break;
			case 5:
				sum=0;
				for(i=0;i<n;i++)
				{
					if(snt(arr[i]))
					{
						printf("%d\t",arr[i]);
						sum+=arr[i];
					}
				}
				printf("Tong cac so nguyen to la: %d",sum);
				break;
			case 6:
				//nhap vao 1 so
				num;
				printf("Nhap vao 1 so nguyen:");
				scanf("%d",&num);
				//dem co bao nhieu gia tri giong
				int count;
				for(i=0;i<n;i++)
				{
					if(arr[i]==num)
					{
						count+=1;
					}
				}
				printf("So gia tri giong: %d",count);
				break;
			case 7:
				//nhap phan tu moi va vi tri can chen
				
				printf("Nhap vi tri can chen: ");
				scanf("%d",&indexValue);
				printf("Nhap gia tri can chen:");
				scanf("%d",&addValue);
				//indexValue>=n
			
				if(indexValue>=n)
				{
					int new_arr[indexValue +1];
					for(i=0;i<=indexValue;i++)
					{
						if(i<n)
						{
							new_arr[i]=arr[i];
						}
						else if(i<indexValue)
						{
							new_arr[i]=0;
						}
						else
						{
							new_arr[i]=addValue;
						}
					}
					//in mang moi
					for(i=0;i<=indexValue;i++)
					{
						printf("%d\t",new_arr[i]);
					}
				}
				//indexValue<n
				else
				{
					int new_arr[n+1];
					for(i=0;i<=n+1;i++)
					{
						if(i<indexValue)
						{
							new_arr[i]=arr[i];
						}
						else if(i==indexValue)
						{
							new_arr[i]=addValue;
						}
						else            
						{
							new_arr[i]=arr[i-1];
						}
					}
				//in mang moi
				for(i=0;i<n+1;i++)
				{
					printf("%d\t",new_arr[i]);
				}
				}
				
				break; 
			case 8:
			    exit(0);
			default:
			    printf("Vui long chon tu 1 den 8");                				
		}
	}
	while(1==1);	      	
}
