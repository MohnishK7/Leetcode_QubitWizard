class SeatManager {
public:
    set<int> EmptySeats; 
    SeatManager(int n) {
        for(int seatNumber = 1; seatNumber<=n ; seatNumber++){
            EmptySeats.insert(seatNumber); 
        }
    }
    
    int reserve() {
        int seatNumber = *EmptySeats.begin();  
        EmptySeats.erase(seatNumber); 
        return seatNumber;
    }
    
    void unreserve(int seatNumber) {
        EmptySeats.insert(seatNumber); 
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */