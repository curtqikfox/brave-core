/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_sync/access_token_consumer.h"

namespace brave_sync {

AccessTokenConsumer::TokenResponse::TokenResponse(
    const std::string& access_token,
    const base::Time& expiration_time)
    : access_token(access_token),
      expiration_time(expiration_time) {}

AccessTokenConsumer::TokenResponse::TokenResponse(
    const TokenResponse& response) {
  access_token = response.access_token;
  expiration_time = response.expiration_time;
}

AccessTokenConsumer::~AccessTokenConsumer() {}

void AccessTokenConsumer::OnGetTokenSuccess(
    const TokenResponse& token_response) {}

void AccessTokenConsumer::OnGetTokenFailure(
    const GoogleServiceAuthError& error) {}

}  // namespace brave_sync