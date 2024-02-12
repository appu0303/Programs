import java.util.*;

class Program39_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        System.out.println("Enter position : ");
        int iPos = sc.nextInt();

        boolean bRet = false;

        bRet = CheckBit(iNo, iPos);

        if(bRet == true)
        {
            System.out.println("Bit at position "+iPos+" is ON.");
        }
        else
         {
            System.out.println("Bit at position "+iPos+"is OFF.");
        }
    }

    public static boolean CheckBit(int iNo, int iPos)
    {

        if(iPos < 1 || iPos > 32 )
        {
            System.out.println("Invalid Position");
            return -1;
        }
        int iMask = 0x00000001;
        iMask = iMask << (iPos - 1);

        int iResult = 0;

        boolean bFlag = false;

        iResult = iNo & iMask;

           if(iResult == iMask)
           {
            return true;
           }
           else
           {
            return false;
           }
    }
}
