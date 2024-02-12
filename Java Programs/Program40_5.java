import java.util.*;

class Program40_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        System.out.println("Enter starting position : ");
        int iStart = sc.nextInt();

        System.out.println("Enter ending position : ");
        int iEnd = sc.nextInt();

      ToggleBit(iNo,iStart,iEnd);

    }

    public static void ToggleBit(int iNo, int iStart, int iEnd)
    {

        int iMask = 0x00000001;
         iMask = iMask << (iStart -1);

        int iResult = 0;

        for(int iCnt = iStart ; iCnt<= iEnd; iCnt++)
        {
            
            iResult = (iNo ^ iMask);
            System.out.print(iResult+"\t");
            iMask = iMask << 1;
        }
        System.out.println();
}
}
