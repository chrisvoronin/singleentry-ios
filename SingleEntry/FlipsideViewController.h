//
//  FlipsideViewController.h
//  SingleEntry
//
//  Created by Eric Glaenzer on 1/16/12.
//
// Copyright 2015 Socket Mobile, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
- (BOOL)isSoftScanEnabled;
-(NSString*)getScanApiVersion;
@end

@interface FlipsideViewController : UIViewController
@property BOOL softScannerEnabled;
@property (weak, nonatomic) IBOutlet UILabel *scanApiVersion;
@property (weak, nonatomic) IBOutlet UISwitch *enableSoftScan;
@property (weak, nonatomic) IBOutlet id <FlipsideViewControllerDelegate> delegate;

- (BOOL) hasSoftScanChanged;
- (IBAction)done:(id)sender;

@end