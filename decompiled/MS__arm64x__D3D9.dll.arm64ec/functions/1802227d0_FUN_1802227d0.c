/*
 * FUN_1802227d0 at 1802227d0
 * undefined FUN_1802227d0(void)
 * Address ranges: 1802227d0-1802227eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802227d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = thunk_FUN_180223b6c();
  if ((lVar2 != 0) && (iVar1 = thunk_FUN_180223b58(param_1,lVar2), iVar1 != 0)) {
    uVar3 = FUN_1802229a8(iVar1);
    lVar2 = thunk_FUN_180223b6c(param_1,param_2,param_3);
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_180223b58(param_1,lVar2);
      if (((iVar1 != 0) && (lVar2 = thunk_FUN_180223b44(param_1,lVar2), lVar2 != 0)) &&
         (lVar2 = thunk_FUN_180223b30(), lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(uVar3,lVar2,iVar1);
      }
    }
    FUN_1802229d8(uVar3);
  }
  return 0;
}

