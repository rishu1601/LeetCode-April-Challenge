/*
The key should be the sorted string and the values are all the strings that are anagrams of this sorted string.


*/


class Solution {
    public String getSortedKey(String s){
        char tempArray[] = s.toCharArray(); 
        Arrays.sort(tempArray); 
        return new String(tempArray);
    }
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String,List<String> > anaMap = new HashMap<String,List<String> >();
        int n = strs.length;
        for(String str: strs){
            String key = getSortedKey(str);
            System.out.println(key);
            List<String> tmp = anaMap.getOrDefault(key, new LinkedList<>());
            tmp.add(str);
            anaMap.put(key, tmp);
        }
        List<List<String> > ans = new LinkedList<>();
        for (Map.Entry<String, List<String> > entry : anaMap.entrySet()){
            ans.add(entry.getValue());
        }
        return ans;
    }
}