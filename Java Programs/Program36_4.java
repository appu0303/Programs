import java.util.*;

class Program36_4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        StringDemo sd = new StringDemo();
        String sRet = "";

        System.out.println("Enter string : ");
        String str1 = sc.nextLine();

        sRet = sd.StrRevTogX(str1);

        System.out.println("Reversed string with toggling the case : "+sRet);
    }
}

class StringDemo
{
   public String StrRevTogX(String src)
    {
        char[] Arr = src.toCharArray();
       
        String str = "";

        {
            for(int iCount = Arr.length-1; iCount >= 0; iCount--)
            {
                if((Arr[iCount] >= 'A')&&(Arr[iCount] <= 'Z'))
                {
                    str = str + (char)((int)Arr[iCount] + 32);
                }
                else if((Arr[iCount] >= 'a')&&(Arr[iCount] <= 'z'))
                {
                    str = str + (char)((int)Arr[iCount] - 32);
                }
            }
        }
            return str;
    }
}

