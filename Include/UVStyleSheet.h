//
//  UVStyleSheet.h
//  UserVoice
//
//  Created by UserVoice on 10/28/09.
//  Copyright 2009 UserVoice Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UVStyleSheet : NSObject 

+ (UVStyleSheet *)instance;

@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UIColor *tableViewBackgroundColor;
@property (nonatomic, retain) UIColor *navigationBarBackgroundColor;
@property (nonatomic, retain) UIColor *navigationBarTextColor;
@property (nonatomic, retain) UIColor *navigationBarTextShadowColor;
@property (nonatomic, retain) UIImage *navigationBarBackgroundImage;
@property (nonatomic, retain) UIFont  *navigationBarFont;
@property (nonatomic, retain) UIColor *navigationBarTintColor;
@property (nonatomic, retain) UIColor *navigationBarActivityIndicatorColor;
@property (nonatomic, assign) BOOL navigationBarTranslucency;
@property (nonatomic, retain) UIColor *loadingViewBackgroundColor;
@property (nonatomic, assign) UIStatusBarStyle preferredStatusBarStyle;

#pragma mark - Additional property for setting

@property (nonatomic, retain) UIColor *textViewTextColor;
@property (nonatomic, retain) UIColor *textMain;
@property (nonatomic, retain) UIColor *placeholderColor;

@property (nonatomic, retain) UIColor *cellBackground;
@property (nonatomic, retain) UIColor *tableViewBackground;
@property (nonatomic, retain) UIColor *toolbarBackground;
@property (nonatomic, retain) UIColor *separatorLine;

@property (nonatomic, retain) UIColor *selectionColor;

@property (nonatomic, retain) UIColor *actionTintColor;
@property (nonatomic, retain) UIColor *disabledActionTintColor;

//The tint color to apply to the search bar background.
@property (nonatomic, retain) UIColor *searchBarBarTintColor;
//The tint color to apply to key elements in the search bar.
@property (nonatomic, retain) UIColor *searchBarTintColor;

@property (nonatomic, retain) UIColor *redMain;

@end
