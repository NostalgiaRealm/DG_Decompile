/*
 * grGlideSetState at 1000213a
 * undefined __stdcall grGlideSetState(undefined4 * param_1)
 * Address ranges: 1000213a-10002151
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideSetState,4
 */

/* __stdcall grGlideSetState,4 */

void grGlideSetState(undefined4 *param_1)

{
  undefined *this;
  char cVar1;
  
                    /* 0x213a  55  _grGlideSetState@4 */
  cVar1 = '\0';
  this = FUN_10005411();
  FUN_10006279(this,param_1,cVar1);
  return;
}

