/* 3.8 Goto and Labels */

// rarely used, but useful for dealing with errors that occur in several places

/*
 * for (............)
 * {
 *      for ( .........)
 *      {
 *          if (disaster)
 *              goto error;
 *      }
 * }
 *      error: 
 *          // clean up the mess
 */
