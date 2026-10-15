/*
 * FUN_1006a7a0 at 1006a7a0
 * undefined FUN_1006a7a0(void)
 * Address ranges: 1006a7a0-1006a863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a7a0(int param_1,longlong *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0x438) != *param_2) ||
      (*(int *)(param_1 + 0x444) != *(int *)((int)param_2 + 0xc))) ||
     (*(int *)(param_1 + 0x440) != (int)param_2[1])) {
    FUN_10068908(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    lVar2 = *param_2;
    *(longlong *)(param_1 + 0x440) = param_2[1];
    *(longlong *)(param_1 + 0x438) = lVar2;
  }
  return;
}

