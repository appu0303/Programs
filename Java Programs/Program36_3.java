import java.util.*;

class Program36_3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        StringDemo sd = new StringDemo();
        boolean bRet = false;

        System.out.println("Enter first string : ");
        String str1 = sc.nextLine();

        System.out.println("Enter second string : ");
        String str2 = sc.nextLine();

        System.out.println("Enter how many character from 2nd string you want to check : ");
        int iNo = sc.nextInt();

        bRet = sd.StrNCmpX( str1,str2,iNo);

        if(bRet == true)
        {
            System.out.println("Strings are equal.");
        }
        else
         {
            System.out.println("Strings are not equal.");
        }
    }
}

class StringDemo
{
   public boolean StrNCmpX(String src, String dest, int iCnt)
    {
        char[] Arr = src.toCharArray();
        char[] Brr = dest.toCharArray();
        boolean bFlag = true;
        String Concatstr = src + " ";

        if(Brr.length < iCnt)
        {
                for(int iCount = 0; iCount < Brr.length; iCount++)
            {
                Concatstr = Concatstr + Brr[iCount];
            }
            System.out.println(Concatstr);
        }
        else{
                for(int iCount = 0; iCount < iCnt; iCount++)
                {
                    if(Arr[iCount] != Brr[iCount])
                    {
                        bFlag = false;
                        break;
                    }
                }
        }
            return bFlag;
    }
}

