//
//  UnuAnnotation.m
//  MapboxTrial
//
//  Created by mihriban minaz on 21/02/2017.
//
//

#import "UnuAnnotation.h"

@implementation UnuAnnotation

- (id)initWithIdentifier:(NSString*)identifier withAnnotationType:(UnuAnnotationType)annotationType {
  self = [super init];
  if (self) {
    _annotationType = annotationType;
    _annotationIdentifier = identifier;
    if (_annotationType == Scooter) {
      _annotationImage = @"pin_unu";
    }
    else if (_annotationType == Destination) {
      _annotationImage = @"pin_destination";
    }
    else {
      _annotationImage = @"pin_destination";
    }
  }
  return self;
}

@end

