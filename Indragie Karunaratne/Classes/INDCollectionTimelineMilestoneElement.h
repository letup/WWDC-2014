//
//  INDCollectionTimelineMilestoneElement.h
//  Indragie Karunaratne
//
//  Created by Indragie Karunaratne on 2014-04-09.
//  Copyright (c) 2014 Indragie Karunaratne. All rights reserved.
//

#import <Mantle/Mantle.h>

/**
 *  Collection view element model representing a timeline milestone.
 */
@interface INDCollectionTimelineMilestoneElement : MTLModel <MTLJSONSerializing>

/**
 *  Image representing the milestone.
 */
@property (nonatomic, strong, readonly) UIImage *image;

@end
