import java.util.*;
class Diamond_Pattern
{
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        int n,i,j,k;
        System.out.print("Enter number of rows: ");
        n=obj.nextByte();
        for(i=1;i<=n/2;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                System.out.print(" ");
            }
            for(k=1;k<=i;k++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
        for(i=(n/2)+1;i>=1;i--)
        {
            for(j=1;j<=n-i;j++)
            {
                System.out.print(" ");
            }
            for(k=1;k<=i;k++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}