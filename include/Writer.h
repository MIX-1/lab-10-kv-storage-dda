//
// Created by aleksandr on 28.04.2021.
//

#ifndef STORAGE_WRITER_H
#define STORAGE_WRITER_H
#include "../third-party/ThreadPool/ThreadPool.h"
#include "../third-party/PicoSHA2/picosha2.h"

class Writer{
 public:
  explicit Writer(const int& num_workers);

  std::string hash256(std::string& key, std::string& value);

 private:
  ThreadPool writers;
};
#endif  // STORAGE_WRITER_H
