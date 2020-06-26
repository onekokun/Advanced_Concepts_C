import java.util.*;

public class solution
{
	static int V = 4;
	static ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>();
	
	public static void main(String[] args)
	{
		
		for(int i=0;i<V;++i)
		{
			adj.add(new ArrayList<Integer>());
		}
		
		addEdge(adj,0,2);
		addEdge(adj,2,0);
		addEdge(adj,3,3);
		addEdge(adj,2,3);
		addEdge(adj,0,1);
		addEdge(adj,1,2);
		
		DFS(2);
		
	}
	
	public static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v)
	{
		adj.get(u).add(v);
		adj.get(v).add(u);
	}
	
	public static void dfsUtil(boolean[] visited, int node)
	{
		visited[node] = true;
		System.out.print(node+" ");
		for(int x: adj.get(node))
		{
			if(!visited[x])
			{
				visited[x] = true;
				dfsUtil(visited,x);
			}
		}
		
	}
	
	public static void DFS(int start)
	{
		boolean[] visited = new boolean[V];
		dfsUtil(visited,start);
	}
}