    for(auto it=nums.rbegin(); it!=nums.rend(); it++){
        if(*it<nums2 && nums2<nums1 ){
            return true;
        }
        
        else if(*it>nums2 && *it<nums1){
            nums2=*it;
        }
        
        else if(*it>nums1){
            nums1=*it;
        }
    }
    return false;
}
