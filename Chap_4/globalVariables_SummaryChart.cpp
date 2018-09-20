// Uninitialized definition:
int g_x;        // defines uninitialized global variable (external linkage, default since non-const)
static int g_x; // defines uninitialized static global variable (internal linkage, enforced by the static)
const int g_x;  // not allowed: const variables must be initialized

// Forward declaration via extern keyword:
extern int g_z;       // forward declaration for global variable defined elsewhere
extern const int g_z; // forward declaration for const global variable defined elsewhere

// Initialized definition:
int g_y(1);        // defines initialized global variable (external linkage, default since non-const)
static int g_y(1); // defines initialized static global variable (internal linkage, enforced by the static)
const int g_y(1);  // defines initialized const (thus, static) global variable (internal linkage, default because const)

// Initialized definition w/extern keyword:
extern int g_w(1);       // defines initialized global variable (external linkage, extern keyword is redundant in this case, since non-const)
extern const int g_w(1); // defines initialized const global variable (external linkage enforced by "extern", otherwise static since const)