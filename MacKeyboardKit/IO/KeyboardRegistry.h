/*!
    @header KeyboardRegistry.h
    @brief Header file for the KeyboardRegistry class.
*/

#import <Foundation/Foundation.h>
#import "KeyboardDevice.h"
#import "KeyboardRegistryDelegate.h"

/*!
    @class KeyboardRegistry
    @brief Provides a listing of all keyboard devices.
*/
@interface KeyboardRegistry : NSObject

@property id<KeyboardRegistryDelegate> delegate;

- (instancetype)init;
- (void)dealloc;

@end
