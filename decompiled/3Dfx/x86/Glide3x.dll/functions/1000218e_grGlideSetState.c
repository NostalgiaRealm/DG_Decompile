/*
 * grGlideSetState at 1000218e
 * undefined __stdcall grGlideSetState(undefined4 * param_1)
 * Address ranges: 1000218e-100021a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideSetState,4
 */

/* __stdcall grGlideSetState,4 */

void grGlideSetState(undefined4 *param_1)

{
  undefined *this;
  char cVar1;
  
                    /* 0x218e  47  _grGlideSetState@4 */
  cVar1 = '\0';
  this = FUN_1000504c();
  FUN_10005e87(this,param_1,cVar1);
  return;
}

