import java.util.*;

class Program37_4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
         int iNo = sc.nextInt();

        boolean bRet = false;

        bRet = CheckBit(iNo);

        if(bRet == true)
        {
            System.out.println("7th , 8th ,9th bit is ON.");
        }
        else
        {
            System.out.println("7th , 8th ,9th bit is OFF.");
        }
        
    }

     public static boolean CheckBit( int iNo)
    {
        int iMask = 0X000001c0;
        int iResult = 0;

        iResult = iMask & iNo;

        if(iMask == iResult)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
