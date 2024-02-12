import java.util.*;


class Program32_4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        StringDemo sd = new StringDemo();
        boolean bRet = false;

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        bRet = sd.CheckVowel(str);

       if(bRet == true)
       {
        System.out.println(str+" Contains vowel in it.");
       }
       else
       {
        System.out.println(str+" not Contains vowel in it.");
       }
    }
}

class StringDemo
{
    public boolean CheckVowel(String str)
    {
        int iCnt = 0;
        boolean bFlag = false;
        char[] Arr = str.toCharArray(); 

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'A') || (Arr[iCnt] == 'a') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'U') || (Arr[iCnt] == 'u'))
            {
              bFlag =   true;
            }
        }
        return bFlag;
    }
}
