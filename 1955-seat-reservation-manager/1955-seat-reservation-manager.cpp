class SeatManager {
    priority_queue<int,vector<int>,greater<int>> unReservedSeats;
public:
    SeatManager(int n) {
        for(int seatNum=1;seatNum<=n;seatNum++) unReservedSeats.push(seatNum);
        
    }
    
    int reserve() {
        int seatNum=unReservedSeats.top();
        unReservedSeats.pop();
        return seatNum;

        
    }
    
    void unreserve(int seatNumber) {
        unReservedSeats.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */