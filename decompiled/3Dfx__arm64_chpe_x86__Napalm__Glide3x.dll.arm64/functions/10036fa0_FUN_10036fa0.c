/*
 * FUN_10036fa0 at 10036fa0
 * undefined FUN_10036fa0(void)
 * Address ranges: 10036fa0-10037073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036fa0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x4b);
  iVar3 = param_1 + param_2 * 0x250;
  uVar1 = 0;
  if (iVar2 != 0x100) {
    uVar1 = param_3;
  }
  if (iVar2 == 0x200) {
    uVar1 = 1;
  }
  *(undefined4 *)(iVar3 + 0x2f70) = uVar1;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x4b);
  uVar1 = 0;
  if (iVar2 != 0x100) {
    uVar1 = param_4;
  }
  if (iVar2 == 0x200) {
    uVar1 = 1;
  }
  *(undefined4 *)(iVar3 + 0x2f74) = uVar1;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x3653) = 1;
  return;
}

