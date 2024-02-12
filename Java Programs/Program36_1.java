import java.util.*;

class Program36_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        StringDemo sd = new StringDemo();

        System.out.println("Enter first string : ");
        String str1 = sc.nextLine();

        System.out.println("Enter second string : ");
        String str2 = sc.nextLine();

        System.out.println("Enter how many character from 2nd string you want to concatenate : ");
        int iNo = sc.nextInt();

        sd.StrNCatX( str1,str2,iNo);
    }
}

class StringDemo
{
    public void StrNCatX(String src, String dest, int iCnt)
    {
        char[] Brr = dest.toCharArray();
        String Concatstr = src + " ";

        if(Arr.length < iCnt)
        {
                for(int iCount = 0; iCount < Brr.length; iCount++)
            {
                Concatstr = Concatstr + Brr[iCount];
            }
            System.out.println(Concatstr);
        }
        else
        {
            for(int iCount = 0; iCount < iCnt; iCount++)
            {
                Concatstr = Concatstr + Brr[iCount];
            }
            System.out.println(Concatstr);
        }
    }
}

