//
//  UnuAnnotation.h
//  MapboxTrial
//
//  Created by mihriban minaz on 21/02/2017.
//
//

#import <Foundation/Foundation.h>
#import "MGLPointAnnotation.h"

typedef NS_ENUM(NSInteger, UnuAnnotationType) {
	Unknown = 0,
  Scooter = 1,
  Destination = 2,
};

NS_ASSUME_NONNULL_BEGIN

/** The `MGLPointAnnotation` class defines a concrete annotation object located at a specified point. You can use this class, rather than define your own, in situations where all you want to do is associate a point on the map with a title. */
@interface UnuAnnotation : MGLPointAnnotation

@property (nonatomic, assign) UnuAnnotationType annotationType;
@property (nonatomic, assign) NSString *annotationIdentifier;
@property (nonatomic, assign) NSString *annotationImage;

- (id)initWithIdentifier:(NSString*)identifier withAnnotationType:(UnuAnnotationType)annotationType;
@end

NS_ASSUME_NONNULL_END
