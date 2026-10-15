/*
 * FUN_10048490 at 10048490
 * undefined FUN_10048490(void)
 * Address ranges: 10048490-10048553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048490(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar1 = param_1 + param_2 * 0x180;
  uVar3 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 0x4f) == '\0') {
    uVar3 = param_3;
  }
  *(undefined4 *)(iVar1 + 0x2d14) = uVar3;
  puVar2 = (uint *)(iVar1 + 0x2d18);
  uVar4 = 4;
  if (param_4 == 0) {
    uVar4 = 0;
  }
  *puVar2 = uVar4 | *puVar2 & 0xfffffffb;
  FUN_10047a98(param_1,param_2);
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

