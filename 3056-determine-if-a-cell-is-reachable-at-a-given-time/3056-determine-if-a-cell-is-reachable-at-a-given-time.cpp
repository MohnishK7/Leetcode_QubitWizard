class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
//         int xarr[]={1,-1,0,0,1,-1,1,-1};
//         int yarr[]={0,0,1,-1,1,-1,-1,1};
        
//         int n=fx-sx+1;
//         int m=fy+sy+1;
        
//         queue<pair<int,int>>q;
//         q.push({sx,sy});
//         int time=0;
//         while(!q.empty()){
//             int size=q.size();
//             while(size--){
//                 auto front=q.front();
//                 int x=front.first;
//                 int y=front.second;
//                 q.pop();
//                 if((x==fx&&y==fy)&&time<=t)return true;
//                 if(time>t)return false;
                
//                 for(int i=0;i<8;i++){
//                     int newx=x+xarr[i];
//                     int newy=y+yarr[i];
//                     if(newx>=sx&&newx<=fx&&newy>=sy&&newy<=fy){
//                         q.push({newx,newy});
//                     }
//                 }
                
//             }
//             time++;
//         }
//         return false;

       int h=abs(fx-sx);
       int v=abs(fy-sy);
       int mintime=max(h,v);
        if(mintime==0&&t==1)return false;
       return t>=mintime;
    }
};
