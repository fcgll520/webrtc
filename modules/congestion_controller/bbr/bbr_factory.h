/*
 *  Copyright (c) 2018 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef MODULES_CONGESTION_CONTROLLER_BBR_BBR_FACTORY_H_
#define MODULES_CONGESTION_CONTROLLER_BBR_BBR_FACTORY_H_

#include <memory>

#include "api/transport/network_control.h"

namespace webrtc {

class BbrNetworkControllerFactory : public NetworkControllerFactoryInterface {
 public:
  BbrNetworkControllerFactory();
  std::unique_ptr<NetworkControllerInterface> Create(
      NetworkControllerConfig config) override;
  TimeDelta GetProcessInterval() const override;
};
}  // namespace webrtc

#endif  // MODULES_CONGESTION_CONTROLLER_BBR_BBR_FACTORY_H_
