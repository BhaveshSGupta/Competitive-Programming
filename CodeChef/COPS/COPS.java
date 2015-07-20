
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Bhavesh
 */

class COPS {
    public static void main(String[] args) throws IOException {
    BufferedReader inp = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(inp.readLine());
        while(T>0)
        {
        int    M, x , y;
        String[] _a= inp.readLine().split(" ");
        M= Integer.parseInt(_a[0]);
        x= Integer.parseInt(_a[1]);
        y= Integer.parseInt(_a[2]);
        int[] police= new int[M];
        _a=inp.readLine().split(" ");
            for (int i = 0; i < M; i++) {
             police[i]=Integer.parseInt(_a[i]);   
            }
            int maxhouses=x*y;
            if(maxhouses>100)
                System.out.println("0");
            else{
                
                boolean[] house= new boolean[100];
                //System.out.println(house[50]);
                for(int i=0;i<M;i++)
                {
                    house[police[i]-1]=true;
                    int j=1,k=police[i]-1;
                    while(j<=maxhouses)
                    {
                        if (k+j<=99)
                            house[k+j]=true;
                        if(k-j>=0)
                            house[k-j]=true;
                    j++;
                    }
                    
                }
                int count=0;
              for(int i=0;i<100;i++)
              {
                  if(house[i]==false)
                  {
                  count++;
                      //System.out.println(i);
                  }
                      
              }
                System.out.println(count);
            }
        T--;
        }
       
    }
    
}
/*
for(int j=police[i];j<maxhouses;j++)
                    {
                        house[j]=true;
                    }
                    for(int j=police[i];j<maxhouses;j++)
                    {
                        house[j]=true;
                    }
*/