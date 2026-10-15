/*
 * FUN_100479c0 at 100479c0
 * undefined FUN_100479c0(void)
 * Address ranges: 100479c0-10047a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100479c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x4b);
  iVar1 = param_1 + param_2 * 0x180;
  uVar2 = 0;
  if (iVar3 != 0x100) {
    uVar2 = param_3;
  }
  if (iVar3 == 0x200) {
    uVar2 = 1;
  }
  *(undefined4 *)(iVar1 + 0x2d0c) = uVar2;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x4b);
  uVar2 = 0;
  if (iVar3 != 0x100) {
    uVar2 = param_4;
  }
  if (iVar3 == 0x200) {
    uVar2 = 1;
  }
  *(undefined4 *)(iVar1 + 0x2d10) = uVar2;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x3153) = 1;
  return;
}

