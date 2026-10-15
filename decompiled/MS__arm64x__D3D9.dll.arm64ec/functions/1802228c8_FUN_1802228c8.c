/*
 * FUN_1802228c8 at 1802228c8
 * undefined FUN_1802228c8(void)
 * Address ranges: 1802228c8-180222913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802228c8(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  iVar1 = thunk_FUN_180223b58(in_stack_00000010,param_1);
  if (((iVar1 != 0) && (lVar2 = thunk_FUN_180223b44(in_stack_00000010,param_1), lVar2 != 0)) &&
     (lVar2 = thunk_FUN_180223b30(), lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(in_stack_00000018,lVar2,iVar1);
  }
  return 0;
}

