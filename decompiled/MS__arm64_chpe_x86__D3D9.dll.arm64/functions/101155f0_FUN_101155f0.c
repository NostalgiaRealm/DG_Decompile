/*
 * FUN_101155f0 at 101155f0
 * undefined FUN_101155f0(void)
 * Address ranges: 101155f0-101156b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101155f0(int param_1,longlong *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0x438) != *param_2) ||
      (*(int *)(param_1 + 0x444) != *(int *)((int)param_2 + 0xc))) ||
     (*(int *)(param_1 + 0x440) != (int)param_2[1])) {
    FUN_10113218(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    lVar2 = *param_2;
    *(longlong *)(param_1 + 0x440) = param_2[1];
    *(longlong *)(param_1 + 0x438) = lVar2;
  }
  return;
}

