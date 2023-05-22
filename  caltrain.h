#include <pthread.h>

struct station {
    bool havetrain;
    int passengerscount;
	// FILL ME IN
};

void station_init(struct station *station);

void station_load_train(struct station *station, int count);

void station_wait_for_train(struct station *station);

void station_on_board(struct station *station);