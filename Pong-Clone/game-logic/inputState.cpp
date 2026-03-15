// stores the movement input on a client level
struct InputState {
    float movePaddle; // -1 = down, 0 = nothing, 1 = up
};

/* lEARNING OUTCOME: We didn't use an enum class because
it is less scalable, and requires switch statements*/