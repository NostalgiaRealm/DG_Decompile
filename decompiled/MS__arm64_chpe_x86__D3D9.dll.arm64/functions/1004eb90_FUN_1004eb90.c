/*
 * FUN_1004eb90 at 1004eb90
 * undefined FUN_1004eb90(void)
 * Address ranges: 1004eb90-1004ec37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1004eb90(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  code *extraout_w11;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  local_10 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x1510 + 0x510;
  local_20 = *(undefined4 *)(param_1 + 0x14);
  bVar1 = *(int *)(param_1 + 0x1c) != 1;
  uStack_1c = 2;
  if (bVar1) {
    uStack_1c = 0;
  }
  uStack_14 = 0x10000;
  if (bVar1) {
    uStack_14 = 0;
  }
  local_18 = 2;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar3 = (*extraout_w11)(uVar2,&local_20,0);
  return ~uVar3 >> 0x1f;
}

