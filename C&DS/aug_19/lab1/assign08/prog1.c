#include<stdio.h>

int findsub2(char *, char *);
int findsub1(char *, char *);
int counttimes(char *, char);
void find2(char *, char);
void find1(char *, char);
void revmem(char *);
char *rev(char *);
int comp(char *,char *);
void concat(char *,char *,char *);
char *copy(char *);
int len(char *);

void main()
{
	char real1[50];
	char *notreal;
	char real2[50];
	
	int l,flag;
	printf("\nEnter the 1st string : ");						//Getting the 1st String
	scanf("%[^\n]%*c",real1);
	
	printf("\nEnter the 2nd string : ");						//Getting the 2nd String
	scanf("%[^\n]%*c",real2);

	printf("%s",real1);								//String Length
	printf("\nLength of String : %d ",len(real1));
	
	printf("\nCopying the  string :\n");						//Copying
	notreal=copy(real1);

	printf("\nstring : %s \n", notreal);						//Concatenation
	concat(real1,real2,notreal);
	printf("\n(1st) %s+ (2nd) %s=%s  \n",real1,real2,notreal);

	flag=comp(real1,real2);								//Comparison
	if(flag==0)
		printf("The strings are not Same !");
	else
		printf("The strings are same");
	

	printf("\n1st  string in Memory : %s\n", real1);				//Reversing Memory
	revmem(real1);
	printf("\nReversing the 1st  string in Memory : %s\n", real1);
	revmem(real1);
	
	printf("\n\nCurrent String in Memory : %s", real1);				//Search Character Form Front
	char ch;
	printf("\nEnter the character to search : ");
	scanf("%c",&ch);	
	find1(real1, ch);

	printf("\n\n1st  string in Memory : %s", real1);				//Search Character from Back
	__fpurge(stdin);
	printf("\nEnter the character to search from Back : ");
	scanf("%c",&ch);	
	find2(real1, ch);

	printf("\nEnter the character to search [Number of times] : ");			//Number of times a character appears
	__fpurge(stdin);
	scanf("%c",&ch);	
	int count = counttimes(real1, ch);
	if(count!=0)
		printf("\nNumber of times the character '%c' appears in the string is %d\n", ch, count);
	else
		printf("\nCharacter does not appears in the string..!\n");

	
	char real3[50];
	__fpurge(stdin);	
	printf("\nEnter the Sub-String : ");						//Search for a substring
	scanf("%[^\n]%*c",real3);
	int w = findsub1(real1,real3);
	if (w==1)
		printf("\nSub-String Found\n");
	else
		printf("\nSub-String Not Found\n");



	__fpurge(stdin);	
	printf("\nEnter the Sub-String : ");						//Search for a substring in start and end
	scanf("%[^\n]%*c",real3);
	int hh = findsub2(real1,real3);
	if (hh == 1)
		printf("\nSub-String Found at start and end\n");
	else
		printf("\nSub-String Not Found\n");

}


int findsub2(char *a, char *ch)
{
	int flag=1;
	int j;
	int len1 = len(a);
	int len2 = len(ch);
	for(int i=0 ; i<len2 ; i++)
	{	if( a[i] == ch[0] )
		{
			for ( j=1 ; j<len2 ; j++ )
			{	if(a[i+j] == ch[j])
					flag=flag+1;
			}
			if (flag == (len2))
				return 1;
			else
				flag=1;
		}
	}
	for(int i=len1-len2 ; i<len1 ; i++)
	{	if( a[i] == ch[0] )
		{
			for ( j=1 ; j<len2 ; j++ )
			{	if(a[i+j] == ch[j])
					flag=flag+1;
			}
			if (flag == (len2))
				return 1;
			else
				flag=1;
		}
	}
	return 0;
}


int findsub1(char *a, char *ch)
{
	int flag=1;
	int j;
	int len2 = len(ch);
	for(int i=0 ; (a[i]!='\0') ; i++)
	{	if( a[i] == ch[0] )
		{
			for ( j=1 ; j<len2 ; j++ )
			{
				if(a[i+j] == ch[j])
					flag=flag+1;
			}
			if (flag == (len2))
				return 1;
			else
				flag=1;
		}
	}
	return 0;
}

int counttimes(char *a, char ch)
{
	int i;
	static int dd=0;
	for( i=0 ; i<len(a) ; i++)
	{
		if(a[i]==ch)
			++dd;
	}
	return dd;
}

void find2(char *a, char ch)							//Finding from back
{
	int i, dd=0;
	for( i=len(a)-1 ; (i>=0) && (dd==0) ; i--)
	{
		if(a[i]==ch)
			dd=len(a)-i;
		else
			dd=0;
	}
	if(dd!=0)
		printf("\nCharacter Found at Position %d from back..!!\n",dd);
	else
		printf("\nCharacter Not Found..!!\n");

}

void find1(char *a, char ch)
{
	int i, dd=0;
	for( i=0 ; (i<len(a)) && (dd==0) ; i++)
	{
		if(a[i]==ch)
			dd=i+1;
			else
			dd=0;
	}
	if(dd!=0)
		printf("\nCharacter Found at Position %d ..!!\n",dd);
	else
		printf("\nCharacter Not Found..!!");
}

void revmem(char *a)
{
        char temp;
        int l = len(a);
        for(int i=0;i<(l/2);i++)
        {
                temp=a[i];
                a[i]=a[l-i-1];
                a[l-i-1]=temp;
        }
}

int len(char *S)
{
	int i, count=0;
	for(i=0;  S[i] != '\0' ; i++)
		count++;
	return count;
}

char *copy(char *s)
{
	int i=0;
	static char str[50];
	for (i=0 ; (s[i] != '\0') && (i<50)  ; i++)
		str[i] = s[i];
	str[i]='\0';
	return str;
}

void concat(char *first,char *second,char *third)
{
	int i,j;
	for(i=0;first[i]!='\0';i++)
		third[i]=first[i];

	for(j=0;second[j]!='\0';j++)
		third[j+i]=second[j];
}

int comp(char *first,char *second)
{
	for(int i=0;first[i]!='\0';i++)
		if(first[i]!=second[i])
			return 0;
	return 1;
}
