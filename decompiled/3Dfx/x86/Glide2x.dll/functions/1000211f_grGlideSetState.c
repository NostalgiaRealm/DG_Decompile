/*
 * grGlideSetState at 1000211f
 * undefined __stdcall grGlideSetState(undefined4 * param_1)
 * Address ranges: 1000211f-10002136
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideSetState,4
 */

/* __stdcall grGlideSetState,4 */

void grGlideSetState(undefined4 *param_1)

{
  undefined *this;
  char cVar1;
  
                    /* 0x211f  46  _grGlideSetState@4 */
  cVar1 = '\0';
  this = FUN_10012760();
  FUN_1001357d(this,param_1,cVar1);
  return;
}

