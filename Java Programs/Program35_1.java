import java.util.*;

class Program35_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Number num = new Number();
        int iSize = 0;
        int iNo = 0;
        int iCnt = 0;
        boolean bRet = false;

        System.out.println("How many elements you want to enter : ");
        iSize = sc.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array elements :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        System.out.println("Enter number that you want to check : ");
        iNo = sc.nextInt();

        bRet = num.Check(Arr,iNo);
        
        if(bRet == true)
        {
            System.out.println("No is present.");
        }
        else
        {
            System.out.println("No is  not present.");
        }

    }
}

class Number
{
    public boolean Check(int Brr[], int iNo)
    {
        int iCnt = 0;
        boolean bFlag = false;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                bFlag = true;
                break;
            }
            else 
            {
                bFlag = false;
            }
        }
        return bFlag;
    }
}
