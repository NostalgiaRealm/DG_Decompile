/*
 * grGlideSetState at 100020e5
 * undefined __stdcall grGlideSetState(undefined4 * param_1)
 * Address ranges: 100020e5-100020fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideSetState,4
 */

/* __stdcall grGlideSetState,4 */

void grGlideSetState(undefined4 *param_1)

{
  undefined *this;
  char cVar1;
  
                    /* 0x20e5  46  _grGlideSetState@4 */
  cVar1 = '\0';
  this = FUN_10012ab2();
  FUN_10013870(this,param_1,cVar1);
  return;
}

