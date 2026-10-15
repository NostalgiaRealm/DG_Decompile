/*
 * FUN_10075790 at 10075790
 * undefined FUN_10075790(void)
 * Address ranges: 10075790-1007581b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075790(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 8) = 0;
  }
  return;
}

