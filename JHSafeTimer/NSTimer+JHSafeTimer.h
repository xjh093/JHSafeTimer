//
//  NSTimer+JHSafeTimer.h
//  JHKit
//
//  Created by HaoCold on 2019/11/27.
//  Copyright © 2019 HaoCold. All rights reserved.
//
//  MIT License
//
//  Copyright (c) 2019 xjh093
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^JHSafeTimerBlock)(NSTimer *timer, id target);

@interface NSTimer (JHSafeTimer)

+ (NSTimer *)jh_scheduledTimerWithTimeInterval:(NSTimeInterval)interval inTarget:(id)aTarget repeats:(BOOL)repeats block:(JHSafeTimerBlock)block;

/// You must add the new timer to a run loop, using addTimer:forMode:
+ (NSTimer *)jh_timerWithTimeInterval:(NSTimeInterval)interval inTarget:(id)aTarget repeats:(BOOL)repeats block:(JHSafeTimerBlock)block;

@end

NS_ASSUME_NONNULL_END
