import java.util.*;

public class solution
{
	static ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>();
	static int V = 14;
	static int[] A = {1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	static int[] dp = new int[V];
	
	public static void main(String[] args)
	{	
		for(int i=0;i<V;++i)
			adj.add(new ArrayList<Integer>());
		
		addEdge(adj,0,1);
		addEdge(adj,0,2);
		addEdge(adj,0,3);
		addEdge(adj,1,4);
		addEdge(adj,1,5);
		addEdge(adj,2,6);
		addEdge(adj,3,7);
		addEdge(adj,3,8);
		addEdge(adj,3,9);
		addEdge(adj,4,10);
		addEdge(adj,4,11);
		addEdge(adj,6,12);
		addEdge(adj,6,13);
		
		dfs(0,0);
		System.out.print(dp[0]);
		
	}
	
	public static void dfs(int u, int prnt)
	{
		dp[u] = A[u];
		int mx=0;
		for(int child: adj.get(u))
		{
			if(child==prnt) continue;
			
			dfs(child,u);
			mx = Math.max(mx,dp[child]);
		}
		
		dp[u]+=mx;
	}
	
	public static void addEdge(ArrayList<ArrayList<Integer>> adj, int u,int v)
	{
		adj.get(u).add(v);
		adj.get(v).add(u);
	}
}
