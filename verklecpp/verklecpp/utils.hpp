/*
   Copyright 2022 The VerkleCpp Authors
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include <array>
#include <cstdint>

namespace verklecpp {

constexpr uint8_t kHashLength = 32;

using hash = std::array<uint8_t, kHashLength>;

hash bytes_to_hash(uint8_t* bytes);

uint8_t* hash_to_bytes(hash h);

}
