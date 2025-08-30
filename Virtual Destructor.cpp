class SeatMap {
public:
    virtual int findAvailableSeat() = 0;
    virtual void occupy(int) = 0;
    virtual void release(int) = 0;

    // Add this virtual destructor:
    virtual ~SeatMap() {}
};
