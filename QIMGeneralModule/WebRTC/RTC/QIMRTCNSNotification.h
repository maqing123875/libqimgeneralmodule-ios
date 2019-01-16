//
//  QIMRTCNSNotification.h
//  qunarChatIphone
//
//  Created by Qunar-Lu on 2017/3/15.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

static NSString * const kARDMediaStreamId = @"ARDAMS";
static NSString * const kARDAudioTrackId = @"ARDAMSa0";
static NSString * const kARDVideoTrackId = @"ARDAMSv0";
static NSString * const kARDVideoTrackKind = @"video";

/* 挂断的通知，object 中附带参数
 @{
 @"isVideo":@(self.isVideo),     // 是否是视频通话
 @"isCaller":@(!self.callee),    // 是否是发起方挂断
 @"answered":@(self.answered)    // 通话是否已经接通
 }
 */
UIKIT_EXTERN NSString *const kHangUpNotification;

/* 接听按钮事件处理的通知，参数在object中，示例如下：
 @{
 @"isVideo":@(YES),      // 是否为视频通话
 @"audioAccept":@(YES)   // 是否为语音接听，音频通话和视频通话里的语音接听都是YES
 }
 */
UIKIT_EXTERN NSString *const kAcceptNotification;

// 摄像头切换的通知，接收到该通知时，需要切换摄像头,默认应该是开启前置摄像头
UIKIT_EXTERN NSString *const kSwitchCameraNotification;

/*  静音按钮事件通知, 静音之后，对方听不到自己这边的任何声音
 object 中的参数：
 @{@"isMute":@(self.muteBtn.selected)}
 */
UIKIT_EXTERN NSString *const kMuteNotification;

/* 开启和关闭本地摄像头的事件，需要在收到通知后，开启或者关闭视频采集功能
 示例：@{@"videoCapture":@(YES)}
 */
UIKIT_EXTERN NSString *const kVideoCaptureNotification;

@interface QIMRTCNSNotification : NSObject

@end
