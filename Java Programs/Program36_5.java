import java.util.*;

class Program36_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        StringDemo sd = new StringDemo();
        String sRet = "";

        System.out.println("Enter string : ");
        String str1 = sc.nextLine();

        char[] Arr = str1.toCharArray();
        String str = "";

            for(int iCount = 0; iCount < Arr.length; iCount++)
            {
                if((Arr[iCount] >= 'A')&&(Arr[iCount] <= 'Z'))
                {   
                    str = str + (char)((int)Arr[iCount] + 32);
                }
                else
                {
                    str = str + Arr[iCount];
                }
            }

            System.out.println(str);


        sRet = sd.StrPalindrome(str);
        System.out.println(str);
         System.out.println(sRet);

        if(str == sRet)
        {
            System.out.println(sRet+" is Palindrome.");
        }
        else
        {
            System.out.println(sRet+" is not Palindrome.");
        }
    }
}

class StringDemo
{
   public String StrPalindrome(String src)
    {

        char[] Arr = src.toCharArray();
        
        String strRev = "";

       // char[] Brr = str.toCharArray();

        for(int iCount = Arr.length-1; iCount >= 0; iCount--)
        {
            strRev = strRev + Arr[iCount];
        }
         return strRev;  
    }
}

