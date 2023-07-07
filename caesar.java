import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t2=sc.nextInt();
		while(t2>0){
		    int n=sc.nextInt();
		    String a=sc.next();
		    String b=sc.next();
		    String c=sc.next();
		    StringBuilder str=new StringBuilder();
		    String str2="";
		    for(char i='a';i<='z';i++){
		        str.append(i+"");
		        str2=str2+i+"";
		    }
		    str.append(str2);
		    String fin=str.toString();
		    int ind1=0;
		    int ind2=0;
		    for(int i=0;i<fin.length();i++){
		        if(fin.charAt(i)==a.charAt(0)){
		            ind1=i;
		            break;
		        }
		    }
		     for(int i=ind1;i<fin.length();i++){
		        if(fin.charAt(i)==b.charAt(0)){
		            ind2=i;
		            break;
		        }
		    }
		    int dist=ind2-ind1;
		    StringBuilder ans=new StringBuilder();
		    for(int i=0;i<c.length();i++){
		        char ct=c.charAt(i);
		        int g=ct-97;
		        g+=dist;
		        ans.append(fin.charAt(g));
		    }
		    System.out.println(ans.toString());
		    t2--;
		}
	}
}