#pragma once
#include "engine/alice/alice_codelet.hpp"
class Ping : public isaac::alice::Codelet {
 public:
  void start() override;
  void tick() override;
  void stop() override;
  ISAAC_PARAM(std::string, message, "Hello World!");
};
ISAAC_ALICE_REGISTER_CODELET(Ping);