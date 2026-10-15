/*
 * FUN_1802227ec at 1802227ec
 * undefined FUN_1802227ec(void)
 * Address ranges: 1802227ec-18022286b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802227ec(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  iVar1 = thunk_FUN_180223b58(in_stack_00000010,param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_1802229a8(iVar1);
    lVar3 = thunk_FUN_180223b6c(in_stack_00000010,in_stack_00000018,in_stack_00000020);
    if (lVar3 != 0) {
      iVar1 = thunk_FUN_180223b58(in_stack_00000010,lVar3);
      if (((iVar1 != 0) && (lVar3 = thunk_FUN_180223b44(in_stack_00000010,lVar3), lVar3 != 0)) &&
         (lVar3 = thunk_FUN_180223b30(), lVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(uVar2,lVar3,iVar1);
      }
    }
    FUN_1802229d8(uVar2);
  }
  return 0;
}

