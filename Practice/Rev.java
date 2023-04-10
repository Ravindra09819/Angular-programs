import java.util.*;
class rev
{


public static void main(string args[])
{

//char str[];
int i,j,count=0;
Scanner sobj=new Scanner(System.in);

System.out.println("Enter the string");
  str=sobj.next().charAt();

while(str[count]!=0)
{
    count++;
}
j=count-1;
for(i=0;i<count;i++)
{
rev[i]=str[j];
j--;
}
System.out.println("reverse string is:"+rev);


}
}