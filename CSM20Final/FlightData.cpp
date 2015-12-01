#pragma once
#include "FlightData.h"

bool FlightData::addPassenger(const PassengerData& pd) {
	if (seatMap.size() >= MAX_PASSENGERS) return false;
	seatMap.push_back(pd);
	return true;
}

bool FlightData::findPassenger(const PassengerData& pd) {
	for (size_t i = 0; i < seatMap.size(); ++i)
		if (seatMap[i] == pd)
			return true;
	return false;
}

PassengerData& FlightData::removePassenger(const PassengerData& pd) {
	for (size_t i = 0; i < seatMap.size(); ++i) {
		if (seatMap[i] == pd) {
			seatMap[i].erase(seatMap.begin() + i);
			break;
		}
	}
}