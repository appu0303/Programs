import java.util.*;
class Program36_1
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

        bRet = sd.StrCmpX( str1,str2);

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
    public boolean StrCmpX(String src, String dest)
    {
        char[] Arr = src.toCharArray();
        char[] Brr = dest.toCharArray();
        boolean bFlag = true;
  
            if(Arr.length == Brr.length)
            {
                for(int iCount = 0; iCount < Arr.length; iCount++)
                {
                    if(Arr[iCount] != Brr[iCount])
                    {
                        bFlag = false;
                        break;
                    }
                }
            }
            else
            {
                bFlag = false;
                return bFlag;
            }
            return bFlag;
    }
}

