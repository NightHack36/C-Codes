class MergeIntervals {
    
    public int[][] merge(int[][] intervals) {
          
         TreeMap<Integer,Integer> map = new TreeMap<>();
        
         for(int i=0;i<intervals.length;i++)
         {   
             if(map.containsKey(intervals[i][0]))
             {  
                map.put(intervals[i][0],Math.max(map.get(intervals[i][0]),intervals[i][1]));
             }
             else
             {
                 map.put(intervals[i][0],intervals[i][1]);
             } 
         }
         
         List<List<Integer>> l = new ArrayList<>();
        
         for(Map.Entry<Integer,Integer> m: map.entrySet())
         {
               if(l.size()==0)
               {  
                  List<Integer> x = new ArrayList<>();
                  x.add(m.getKey());
                  x.add(m.getValue());
                  l.add(x); 
               }
               else
               {
                  List<Integer> t = l.get(l.size()-1); 
                   
                  if(t.get(1)>=m.getKey())
                  {
                      t.set(1,Math.max(t.get(1),m.getValue()));
                  }
                  else
                  {
                     List<Integer> x = new ArrayList<>();
                     x.add(m.getKey());
                     x.add(m.getValue());
                     l.add(x); 
                  }
               }
         }
        
         int[][] res = new int[l.size()][2];
        
         for(int i=0;i<l.size();i++)
         {
             res[i][0] = l.get(i).get(0);
             res[i][1] = l.get(i).get(1);
         }
         return res;
    }
}
