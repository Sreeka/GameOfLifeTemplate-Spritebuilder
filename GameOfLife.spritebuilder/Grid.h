//
//  Grid.h
//  GameOfLife
//
//  Created by Sree K on 2/07/2014.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;
- (void)evolveStep;
- (void) countNeighbors;
//- (void) updateCreatures;
@property (nonatomic, assign) BOOL isIndexValidForX;
@property (nonatomic, assign) BOOL isIndexValidForY;
@end
