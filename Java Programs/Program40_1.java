import java.util.*;

class Program40_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        int iRet = 0;

        iRet = CountOne(iNo);

        System.out.println("Count of 1's is : "+iRet);
    }

    public static int CountOne(int iNo)
    {
        int iMask = 0x00000001;

        int iResult = 0;
        int Count = 0;

        while(iMask != 0){
        
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            Count++;
        }
        iMask = iMask << 1;
        }

        return Count;
    }
}