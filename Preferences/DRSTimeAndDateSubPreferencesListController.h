#import <Preferences/PSListController.h>
#import <Preferences/PSListItemsController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBListController.h>
#import <CepheiPrefs/CepheiPrefs.h>
#import <Cephei/HBPreferences.h>

@interface DRSTimeAndDateSubPreferencesListController : HBListController <UIFontPickerViewControllerDelegate>
@property(nonatomic, retain)HBAppearanceSettings* appearanceSettings;
@property(nonatomic, retain)HBPreferences* preferences;
@property(nonatomic, retain)UILabel* titleLabel;
@property(nonatomic, retain)UIBlurEffect* blur;
@property(nonatomic, retain)UIVisualEffectView* blurView;
@property(nonatomic, retain)UIFontPickerViewController* timeFontPicker;
@property(nonatomic, retain)UIFontPickerViewController* dateFontPicker;
- (void)showTimeFontPicker;
- (void)showDateFontPicker;
@end
