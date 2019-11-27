# JHSafeTimer
Use NSTimer with block and don’t worry about cyclical references.

---

# Usage
```

- (void)buttonAction:(UIButton *)button
{
    if (!_timer) {
        // self is JHTimerVC
        _timer = [NSTimer jh_scheduledTimerWithTimeInterval:1 inTarget:self repeats:YES block:^(NSTimer * _Nonnull timer, JHTimerVC *vc) {
            [vc timerCount:timer button:vc.button];
        }];
        
        // or
        _timer = [NSTimer jh_timerWithTimeInterval:1 inTarget:self repeats:YES block:^(NSTimer * _Nonnull timer, JHTimerVC *vc) {
            [vc timerCount:timer button:vc.button2];
        }];
        [[NSRunLoop currentRunLoop] addTimer:_timer forMode:NSRunLoopCommonModes];
    }
}

- (void)timerCount:(NSTimer *)timer button:(UIButton *)button
{
    NSString *title = button.currentTitle;
    NSInteger count = title.intValue - 1;
    if (count < 0) {
       [button setTitle:@"停止" forState:0];
       [timer invalidate];
       timer = nil;
    }else{
       [button setTitle:@(count).stringValue forState:0];
    }
}
```

---

# Log

### 2019-11-27
- upload.
