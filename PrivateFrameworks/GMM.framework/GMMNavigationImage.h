/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;

@interface GMMNavigationImage : PBCodable  {
    int _height;
    NSData *_imageData;
    int _width;
}

@property int width;
@property(retain) NSData * imageData;
@property int height;


- (int)height;
- (id)dictionaryRepresentation;
- (int)width;
- (void)setWidth:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (id)imageData;
- (void)setHeight:(int)arg1;
- (void)writeTo:(id)arg1;
- (void)setImageData:(id)arg1;

@end