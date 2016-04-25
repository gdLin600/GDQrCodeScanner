//
//  GDQrCodeScanner.h
//  GDQrCodeScannerExample
//
//  Created by 林广德 on 16/4/25.
//  Copyright © 2016年 林广德. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@interface GDQrCodeScanner : AVCaptureSession
/**
 *  创建一个二维码扫描器
 *
 *  @param superView            扫描容器视图的父视图
 *  @param scannerContainerView 容器视图
 *
 *  @return <#return value description#>
 */
+ (instancetype)qrCodeScannerWithSuperView:(UIView *)superView scannerContainerView:(UIView *)scannerContainerView;
- (instancetype)initWithSuperView:(UIView *)superView scannerContainerView:(UIView *)scannerContainerView;
@end
