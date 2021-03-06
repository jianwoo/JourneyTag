//
//  JTGameService.h
//  JourneyTag
//
//  Created by Ben Ford on 5/8/10.
//  Copyright 2010 Ben Ford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JTServiceBase.h"

@interface JTGameService : JTServiceBase {

}
- (void) getAccountsByHighScoreWithDelegate:(id)delegate didFinish:(SEL)didFinish didFail:(SEL)didFail;
- (void)getLastTenPhotosWithDelegate:(id)delegate didFinish:(SEL)didFinish didFail:(SEL)didFail;
@end
