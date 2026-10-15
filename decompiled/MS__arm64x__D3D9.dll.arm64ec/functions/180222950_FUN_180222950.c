/*
 * FUN_180222950 at 180222950
 * undefined FUN_180222950(void)
 * Address ranges: 180222950-180222967;18022298c-18022299b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180222950(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = thunk_FUN_180223b6c();
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_180223b58(param_1,lVar1);
    return uVar2;
  }
  return 0;
}

