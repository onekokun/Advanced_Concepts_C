import java.util.*;

public class solution
{
	public static void main(String[] args)
	{
		int V  = 4;
		ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>();
		for(int i=0;i<V;++i)
		{
			adj.add(new ArrayList<Integer>());
		}
		
		addEdge(adj,0,2);
		addEdge(adj,2,0);
		addEdge(adj,0,1);
		addEdge(adj,2,3);
		addEdge(adj,1,2);
		addEdge(adj,3,3);
		
		int start = 2;
		BFS(adj,start,V);
	}
	
	public static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v)
	{
		adj.get(u).add(v);
	}
	
	public static void BFS(ArrayList<ArrayList<Integer>> adj,int start, int V)
	{
		boolean[] visited = new boolean[V];
		Queue<Integer> q = new LinkedList<Integer>();
		q.add(start);
		visited[start] = true;
		
		while(!q.isEmpty())
		{
			int node = q.poll();
			System.out.print(node+" ");
			for(int x: adj.get(node))
			{
				if(!visited[x])
				{
					q.add(x);
					visited[x] = true;
				}
			}
		}
	}
}