import java.util.*;


class Program32_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        StringDemo sd = new StringDemo();

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        sd.reverse(str);
        }
}

class StringDemo
{
    public void reverse(String str)
    {
        int iCnt = 0;

        char[] Arr = str.toCharArray(); 

        System.out.println("Reversed String : ");
            for(int iCount = Arr.length-1; iCount >= 0; iCount--)
            {
                System.out.print(Arr[iCount]);
            }
            System.out.println();
    }
}
