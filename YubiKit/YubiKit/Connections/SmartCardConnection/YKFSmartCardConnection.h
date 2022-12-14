// Copyright 2018-2022 Yubico AB
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef YKFSmartCardConnection_h
#define YKFSmartCardConnection_h

#import <Foundation/Foundation.h>
#import "YKFConnectionProtocol.h"

typedef NS_ENUM(NSUInteger, YKFSmartCardConnectionState) {
    /// The session is closed. No commands can be sent to the key.
    YKFSmartCardConnectionStateClosed,

    /// The session is opened and ready to use. The application can send commands to the key.
    YKFSmartCardConnectionStateOpen
};

extern NSString* _Nonnull const YKFSmartCardConnectionErrorDomain;

typedef NS_ENUM(NSUInteger, YKFSmartCardConnectionErrorCode) {
    YKFSmartCardConnectionErrorCodeNotSupported = 1,
};

@interface YKFSmartCardConnection : NSObject<YKFConnectionProtocol>

- (void)start API_AVAILABLE(ios(16.0));

- (void)stop API_AVAILABLE(ios(16.0));

- (instancetype _Nonnull )init NS_UNAVAILABLE;

@end

#endif /* YKFSmartCardConnection_h */
