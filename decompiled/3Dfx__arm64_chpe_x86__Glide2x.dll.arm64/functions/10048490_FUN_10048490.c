/*
 * FUN_10048490 at 10048490
 * undefined FUN_10048490(void)
 * Address ranges: 10048490-1004861b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048490(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  code *extraout_w11;
  
  FUN_1002b8d0(*(undefined4 *)(param_1 + 0x315c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2a80) =
       (uint)(((param_2 != 4 || param_3 != 0) || param_4 != 4) || param_5 != 0);
  *(undefined4 *)(param_1 + 0x2a8c) = 1;
  *(undefined4 *)(param_1 + 0x2a84) = *(undefined4 *)(&DAT_10096f40 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x2a88) = *(undefined4 *)(&DAT_10096f00 + param_3 * 4);
  *(undefined4 *)(param_1 + 0x2a98) = 1;
  uVar1 = 1;
  uVar2 = uVar1;
  if (param_4 == 4) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x2a90) = uVar2;
  if (param_5 == 4) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x2a94) = uVar1;
  uVar2 = 1;
  if (param_3 == 0xf) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x2b28) = uVar2;
  uVar4 = *(uint *)(param_1 + 0x2b2c);
  uVar3 = uVar4 & 0xfffffffe;
  if (param_3 == 0xf) {
    uVar3 = uVar4 | 1;
  }
  *(uint *)(param_1 + 0x2b2c) = uVar3;
  *(undefined1 *)(param_1 + 0x2bc1) = 1;
  uVar3 = 0x400;
  if (param_4 != 4) {
    uVar3 = 0;
  }
  uVar4 = 4;
  if (param_5 != 4) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x2bec) = uVar3 | uVar4 | *(uint *)(param_1 + 0x2bec) & 0xffff0000;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

