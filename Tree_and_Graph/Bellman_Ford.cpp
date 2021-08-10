class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int> vertex(n,INT_MAX);
	    vertex[0]=0;
	    int V=edges.size();
	    for(int i=1;i<n;i++){
	        for(auto x:edges){
	            int u=x[0],v=x[1],w=x[2];
	            if(vertex[u]!=INT_MAX&&vertex[v]>vertex[u]+w){
	                vertex[v]=vertex[u]+w;
	            }
	        }
	    }
	    for(auto x:edges){
	        int u=x[0],v=x[1],w=x[2];
	        if(vertex[u]!=INT_MAX&&vertex[u]+w<vertex[v]){
	            return 1;
	        }
	    }
	    return 0;
	}
};