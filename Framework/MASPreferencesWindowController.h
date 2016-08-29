//
// You create an application Preferences window using code like this:
//     _preferencesWindowController = [[MASPreferencesWindowController alloc] initWithViewControllers:controllers
//                                                                                              title:title]
//
// To open the Preferences window:
//     [_preferencesWindowController showWindow:sender]
//

#import "MASPreferencesViewController.h"

extern NSString *_Nonnull const kMASPreferencesWindowControllerDidChangeViewNotification;

__attribute__((__visibility__("default")))
#if MAC_OS_X_VERSION_MAX_ALLOWED > MAC_OS_X_VERSION_10_5
@interface MASPreferencesWindowController : NSWindowController <NSToolbarDelegate, NSWindowDelegate>
#else
@interface MASPreferencesWindowController : NSWindowController
#endif
{
@private
    NSMutableArray *_viewControllers;
    NSMutableDictionary *_minimumViewRects;
    NSString *_title;
    NSViewController <MASPreferencesViewController> *_selectedViewController;
    NSToolbar * __unsafe_unretained _toolbar;
}

@property (nonatomic, readonly, nonnull) NSMutableArray *viewControllers;
@property (nonatomic, readonly) NSUInteger indexOfSelectedController;
@property (nonatomic, readonly, retain, nullable) NSViewController <MASPreferencesViewController> *selectedViewController;
@property (nonatomic, readonly, nullable) NSString *title;
@property (nonatomic, assign, nonnull) IBOutlet NSToolbar *toolbar;

- (nonnull id)initWithViewControllers:(nonnull NSArray *)viewControllers;
- (nonnull id)initWithViewControllers:(nonnull NSArray *)viewControllers title:(nullable NSString *)title;
- (void)addViewController:(nonnull NSViewController <MASPreferencesViewController> *) viewController;

- (void)selectControllerAtIndex:(NSUInteger)controllerIndex;
- (void)selectControllerWithIdentifier:(nonnull NSString *)identifier;

- (IBAction)goNextTab:(nullable id)sender;
- (IBAction)goPreviousTab:(nullable id)sender;

@end
