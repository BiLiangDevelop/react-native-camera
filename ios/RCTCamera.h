#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CameraFocusSquare.h"
#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#import <React/RCTLog.h>
#import <React/RCTUtils.h>
#import <React/RCTEventDispatcher.h>
#else
#import "RCTBridge.h"
#import "RCTLog.h"
#import "RCTUtils.h"
#import "RCTEventDispatcher.h"
#endif

@class RCTCameraManager;

@interface RCTCamera : UIView

- (id)initWithManager:(RCTCameraManager*)manager bridge:(RCTBridge *)bridge;

@end
