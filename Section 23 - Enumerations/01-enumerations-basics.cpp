/*
==========================================================
Description: Basics of Enumerations.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note:
    1.  Structure of Enumeration
    
        enum-key enum-name : enumerator-type { };

        - enum-name is optional.
        - enumerator-type can be omitted and compiler will try
          to deduce it.
    
    2. Enumeration can be scoped or unscoped.

    3. Initialisation can be implicit or explicit.

        a. implicit
            enum {Red. Green, Blue};
        b. explicit
            enum {Red=1, Green=2, Blue=3};
        c. implicit/explicit
            enum {Red=1, Green, Blue};
    
    4. Underlying type is dependent on size of variable in enum list.

    5. Anonymous enumeration is not type safe.
  
*/

