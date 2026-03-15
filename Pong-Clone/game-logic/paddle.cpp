struct Paddle {
    int height;
    int width;
    int positionX;
    int positionY;
    int velocityY;
    
    // initializer
    Paddle(int i_height, int i_width, int i_positionX, int i_positionY, int i_velocityY): 
        height(i_height), 
        width(i_width), 
        positionX(i_positionX), 
        positionY(i_positionY), 
        velocityY(i_velocityY) {}
    // array to track the origin of the paddle
    int origin[2] = {positionX, positionY};
    
    // moves the paddle up and down
    void move(int deltaTime) {
        positionY += velocityY*deltaTime;
    }
    //resets position to original
    void reset() {
        positionX = origin[0];
        positionY = origin[1];
    }
};
