//
//  SCCoreBluetooth.h
//  LibBluetooth
//
//  Created by 鐘妘甄 on 2019/5/16.
//  Copyright © 2019 鐘妘甄. All rights reserved.
//

#ifndef SCCoreBluetooth_h
#define SCCoreBluetooth_h

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface SCBluetooth: NSObject<CBPeripheralManagerDelegate, CBCentralManagerDelegate>
{
    // Per
    CBPeripheralManager* peripheral_;
    NSMutableArray* characteristics_;
    NSUserDefaults* userDef_;
    NSString* devName_;
    
    CBCentralManager* central_;

    CBCharacteristic* writeChararteristic_;
}

- (id) initWithName:(NSString*) name;

- (void) initCoreBluetooth;

- (void) runThreadCharateristicData;

- (void) sendServerData: (NSData*) data;

- (void) sendClientData: (NSData*) data;

@end

#endif /* SCCoreBluetooth_h */
