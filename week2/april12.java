class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2.compareTo(o1);
            }
        });
        for(int stone: stones) {
            maxHeap.add(stone);
        }
        while(true){
            int h1=0,h2=0;
            if(!maxHeap.isEmpty()){
                h1 = maxHeap.poll();
            }
            if(maxHeap.isEmpty()){
                return h1;
            }
            else{
                h2 = maxHeap.poll();
            }
            if(h1 == h2){
                if(h1 == h2 && maxHeap.isEmpty()){
                    return 0;
                }
                continue;
            }else{
                maxHeap.add(h1 - h2);
            }
        }
    }
}