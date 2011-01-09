/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;



@interface NSSQLColumn : NSSQLProperty 
{
    NSString *_columnName;
    NSInteger _sqlType;
    NSUInteger _precision;
    NSInteger _scale;
    NSUInteger _fetchIndex;
    NSUInteger _slot;
    NSUInteger _allowAliasing;
}


- (void)_setColumnName:(id)arg1;
- (NSUInteger)precision;
- (void)setPrecision:(NSUInteger)arg1;
- (NSUInteger)roughSizeEstimate;
- (NSUInteger)fetchIndex;
- (void)_setFetchIndex:(NSUInteger)arg1;
- (void)_setSlotIfDefault:(NSUInteger)arg1;
- (id)cloneForReadOnlyFetching;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)_setSQLType:(NSUInteger)arg1;
- (id)initForReadOnlyFetching;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithColumnName:(id)arg1 sqlType:(NSUInteger)arg2;
- (void)setAllowAliasing:(BOOL)arg1;
- (BOOL)allowAliasing;
- (id)columnName;
- (NSUInteger)sqlType;
- (NSUInteger)slot;
- (void)setScale:(NSInteger)arg1;
- (id)description;
- (NSInteger)scale;
- (void)dealloc;

@end