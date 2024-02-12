import java.util.*;

class Program39_4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        System.out.println("Enter position : ");
        int iPos = sc.nextInt();

        int iRet = 0;

        iRet = ToggleBit(iNo, iPos);

        System.out.println("Modified number is : "+iRet);
    }

    public static int ToggleBit(int iNo, int iPos)
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

         return iNo ^ iMask;
    
    }
}
