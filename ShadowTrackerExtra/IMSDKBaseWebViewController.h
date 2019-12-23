//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class IMSDKPopupShareView, IMSDKWKWebViewJavascriptBridge, NSBundle, NSLayoutConstraint, NSString, UIButton, UILabel, UIView;

@interface IMSDKBaseWebViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isCompleted;
    _Bool _isPresented;
    _Bool _isManualClose;
    _Bool _hiddenBars;
    _Bool _navNestScroll;
    _Bool _supportIphoneX;
    id <IMSDKWebViewPluginDelegate> _webViewDelegate;
    UIView *_xibView;
    UIView *_backgroundWebView;
    UIView *_backgroundProgressView;
    UILabel *_topTitleLabel;
    UIView *_titleBar;
    UIView *_toolBar;
    UIButton *_backBtn;
    UIButton *_forwardBtn;
    UIButton *_closeBtn;
    UIButton *_shareBtn;
    UIButton *_refreshBtn;
    NSLayoutConstraint *_heightConstraintTitleBar;
    NSLayoutConstraint *_topConstraintTitleBar;
    NSLayoutConstraint *_heightConstraintToolBar;
    NSLayoutConstraint *_bottomConstraintToolBar;
    NSLayoutConstraint *_leftMarginContraintWebView;
    NSLayoutConstraint *_rightMarginContraintWebView;
    double _lastPositionY;
    NSBundle *_bundle;
    NSString *_background;
    NSString *_homeUrl;
    IMSDKWKWebViewJavascriptBridge *_bridge;
    CDUnknownBlockType _jsCallback;
    IMSDKPopupShareView *_popupShareView;
    UIView *_subWebView;
    UIView *_subProgressView;
}

@property(retain, nonatomic) UIView *subProgressView; // @synthesize subProgressView=_subProgressView;
@property(retain, nonatomic) UIView *subWebView; // @synthesize subWebView=_subWebView;
@property(retain, nonatomic) IMSDKPopupShareView *popupShareView; // @synthesize popupShareView=_popupShareView;
@property(copy, nonatomic) CDUnknownBlockType jsCallback; // @synthesize jsCallback=_jsCallback;
@property(retain, nonatomic) IMSDKWKWebViewJavascriptBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) NSString *homeUrl; // @synthesize homeUrl=_homeUrl;
@property(retain, nonatomic) NSString *background; // @synthesize background=_background;
@property(nonatomic) _Bool supportIphoneX; // @synthesize supportIphoneX=_supportIphoneX;
@property(nonatomic) _Bool navNestScroll; // @synthesize navNestScroll=_navNestScroll;
@property(nonatomic) _Bool hiddenBars; // @synthesize hiddenBars=_hiddenBars;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(nonatomic) double lastPositionY; // @synthesize lastPositionY=_lastPositionY;
@property(nonatomic) _Bool isManualClose; // @synthesize isManualClose=_isManualClose;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
@property(nonatomic) __weak NSLayoutConstraint *rightMarginContraintWebView; // @synthesize rightMarginContraintWebView=_rightMarginContraintWebView;
@property(nonatomic) __weak NSLayoutConstraint *leftMarginContraintWebView; // @synthesize leftMarginContraintWebView=_leftMarginContraintWebView;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraintToolBar; // @synthesize bottomConstraintToolBar=_bottomConstraintToolBar;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraintToolBar; // @synthesize heightConstraintToolBar=_heightConstraintToolBar;
@property(nonatomic) __weak NSLayoutConstraint *topConstraintTitleBar; // @synthesize topConstraintTitleBar=_topConstraintTitleBar;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraintTitleBar; // @synthesize heightConstraintTitleBar=_heightConstraintTitleBar;
@property(nonatomic) __weak UIButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(nonatomic) __weak UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UIButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(nonatomic) __weak UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) __weak UIView *toolBar; // @synthesize toolBar=_toolBar;
@property(nonatomic) __weak UIView *titleBar; // @synthesize titleBar=_titleBar;
@property(nonatomic) __weak UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(nonatomic) __weak UIView *backgroundProgressView; // @synthesize backgroundProgressView=_backgroundProgressView;
@property(nonatomic) __weak UIView *backgroundWebView; // @synthesize backgroundWebView=_backgroundWebView;
@property(retain, nonatomic) UIView *xibView; // @synthesize xibView=_xibView;
@property(nonatomic) __weak id <IMSDKWebViewPluginDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
- (void).cxx_destruct;
- (void)shareWebView:(id)arg1;
- (void)reload:(id)arg1;
- (void)back:(id)arg1;
- (void)forward:(id)arg1;
- (void)refresh:(id)arg1;
- (void)close:(id)arg1;
- (void)resetWebviewContentBlank;
- (void)dismiss;
- (void)reloadWebView;
- (void)forwardWebView;
- (void)backWebView;
- (_Bool)canGoForward;
- (_Bool)canGoBack;
- (void)callJSFunction:(id)arg1;
- (void)setHome:(id)arg1 openID:(id)arg2;
- (void)hideAllBars:(_Bool)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)shareURL;
- (id)progressView;
- (id)webView;
- (_Bool)prefersStatusBarHidden;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)panGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)showTabBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)registerBridgeHandler:(id)arg1;
- (void)hideAllBarsIfNeed;
- (void)loadXibByIsPortrait:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1 openID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

