//
// Any controller providing preference pane view must support this protocol
//
#import <Cocoa/Cocoa.h>

#import <Cocoa/Cocoa.h>

@protocol MASPreferencesViewController <NSObject>

@optional

- (void)viewWillAppear;
- (void)viewDidDisappear;

- (nullable NSView *)initialKeyView;

@property (nonatomic, readonly) BOOL hasResizableWidth;
@property (nonatomic, readonly) BOOL hasResizableHeight;

@required

@property (nonatomic, readonly, nonnull) NSString *identifier;
@property (nonatomic, readonly, nonnull) NSImage *toolbarItemImage;
@property (nonatomic, readonly, nonnull) NSString *toolbarItemLabel;

@end
