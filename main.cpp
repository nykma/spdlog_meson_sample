#include <random>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

int main(int argc, char *argv[])
{
  auto console = spdlog::stdout_color_mt("console");
  // auto err_logger = spdlog::stderr_color_mt("stderr");
  spdlog::set_default_logger(console);
  spdlog::set_level(spdlog::level::debug);

  spdlog::info("Application started.");
  spdlog::warn("You need to implement this yourself.");
  spdlog::warn("spdlog documentation: https://github.com/gabime/spdlog");

  // Set random seed based on clock
  auto seed = static_cast<unsigned int>(clock());
  srand(seed);

  for (int i = 0; i < 16; ++i) {
    spdlog::debug("Loop {0} (0x{0:02x}) with random number of {1} (0x{1:08x})", i, rand());
  }

  spdlog::info("Application terminated normally.");
  return 0;
}
