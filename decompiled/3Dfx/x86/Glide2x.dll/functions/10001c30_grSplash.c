/*
 * grSplash at 10001c30
 * undefined __stdcall grSplash(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10001c30-10001c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSplash,20
 */

/* __stdcall grSplash,20 */

void grSplash(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined *this;
  
                    /* 0x1c30  60  _grSplash@20 */
  this = FUN_10012760();
  FUN_1001536d(this,param_1,param_2,param_3,param_4,param_5);
  return;
}

