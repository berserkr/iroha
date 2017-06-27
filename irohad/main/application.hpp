/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IROHA_APPLICATION_HPP
#define IROHA_APPLICATION_HPP

#include <network/network_api.h>
#include <ametsuchi/ametsuchi.hpp>
#include <dao/dao.hpp>

namespace iroha {

  /**
   * Contains instances of global services and shared providers
   */
  class Application {
   public:

    ametsuchi::Ametsuchi &ametsuchi;

    network::PeerCommunicationService &peerService;

    dao::DaoCryptoProvider &cryptoProvider;

    dao::HashProvider &hashProvider;

  };
} // namespace iroha
#endif //IROHA_APPLICATION_HPP
