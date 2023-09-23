/*
 * @Author: Rex Joush
 * @Date: 2023-09-23 23:17:26
 * @LastEditors: Rex Joush
 * @LastEditTime: 2023-09-23 23:21:21
 */
package hw1;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Solution {

    class Group {
        String groupId;
        List<String> gid;
    }

    // 伪代码
    public void getRes(int groupID) {
        Map<Integer, Group> groupMap = new HashMap<>();
        Map<String, Integer> passwdMap = new HashMap<>();
        initMap(groupMap, passwdMap);
        Group group = groupMap.get(groupID);
        if (group == null) {
            System.out.println(groupID + " = Group not found.");
        }
        // 4 = adm: syslog(104) amf(1000)
        System.out.print(groupID + " = " + group.groupId + ": ");
        for (String g : group.gid) {
            Integer uid = passwdMap.get(g);
            if (uid != null) {
                System.out.print(g + "(" + uid + ") ");
            }
        }
    }
    // map 初始化一下
    private void initMap(Map<Integer, Group> groupMap, Map<String, Integer> passwdMap) {

    }
}
