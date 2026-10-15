/*
 * FUN_10038370 at 10038370
 * undefined FUN_10038370(void)
 * Address ranges: 10038370-10038433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038370(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar3 = param_1 + param_2 * 0x1a0;
  uVar2 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 0x4f) == '\0') {
    uVar2 = param_3;
  }
  *(undefined4 *)(iVar3 + 0x2db4) = uVar2;
  puVar1 = (uint *)(iVar3 + 0x2db8);
  uVar4 = 4;
  if (param_4 == 0) {
    uVar4 = 0;
  }
  *puVar1 = uVar4 | *puVar1 & 0xfffffffb;
  FUN_10037198(param_1,param_2);
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

