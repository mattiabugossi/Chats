#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface ACConversationsViewController : UITableViewController

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
