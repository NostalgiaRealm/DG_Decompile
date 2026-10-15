/*
 * FUN_100635a0 at 100635a0
 * undefined FUN_100635a0(void)
 * Address ranges: 100635a0-1006364b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100635a0(int param_1,int param_2)

{
  uint uVar1;
  code *extraout_w11;
  undefined8 uVar2;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x4f58) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x4f50) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x4f68) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x4f60) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x4f78) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x4f70) = uVar2;
  }
  uVar1 = 0x80000000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x664) = uVar1 | *(uint *)(param_1 + 0x664) & 0x7fffffff;
  return;
}

