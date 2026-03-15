struct Ball {
    int radius;
    int positionX;
    int positionY;
    int velocityX;
    int velocityY;

    // initializer
    Ball(int i_radius, int i_positionX, int i_positionY, int i_velocityX, int i_velocityY): 
        radius(i_radius), 
        positionX(i_positionX),
        positionY(i_positionY), 
        velocityX(i_velocityX), 
        velocityY(i_velocityY) {}
    // array to track the origin of the paddle
    int origin[2] = {positionX, positionY};

    // moves the ball in the x and y directions depending on the input velocities
    void move(int deltaTime) {
        positionY += velocityY*deltaTime;
        positionX += velocityX*deltaTime;
    }
    // resets position to center, and randomizes velocity for fun
    void reset(int i_velocityX, int i_velocityY) {
        positionX = origin[0];
        positionY = origin[1];
        velocityX = i_velocityX;
        velocityY = i_velocityY;
    }
    // changes the direction of movement of the ball
    void change_direction(int i_velocityX, int i_velocityY) {
        velocityX = i_velocityX;
        velocityY = i_velocityY;
    }
};
