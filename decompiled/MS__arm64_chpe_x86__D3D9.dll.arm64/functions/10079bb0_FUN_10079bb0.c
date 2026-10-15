/*
 * FUN_10079bb0 at 10079bb0
 * undefined FUN_10079bb0(void)
 * Address ranges: 10079bb0-10079c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079bb0(int param_1,int param_2)

{
  uint uVar1;
  code *extraout_w11;
  undefined8 uVar2;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x6bc8) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x6bc0) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x6bd8) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x6bd0) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x6be8) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x6be0) = uVar2;
  }
  uVar1 = 0x80000000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xf80) = uVar1 | *(uint *)(param_1 + 0xf80) & 0x7fffffff;
  return;
}

