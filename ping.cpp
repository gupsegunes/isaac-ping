#include "Ping.hpp"
void Ping::start() {}
void Ping::tick() {}
void Ping::stop() {}

void Ping::start() {
  tickPeriodically();
}

void Ping::tick() {
  LOG_INFO("ping");
}