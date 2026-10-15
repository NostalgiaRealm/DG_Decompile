/*
 * FUN_1802228b0 at 1802228b0
 * undefined FUN_1802228b0(void)
 * Address ranges: 1802228b0-1802228c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1802228b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_180223b6c();
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_180223b58(param_1,lVar2);
    if (((iVar1 != 0) && (lVar2 = thunk_FUN_180223b44(param_1,lVar2), lVar2 != 0)) &&
       (lVar2 = thunk_FUN_180223b30(), lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_4,lVar2,iVar1);
    }
  }
  return 0;
}

