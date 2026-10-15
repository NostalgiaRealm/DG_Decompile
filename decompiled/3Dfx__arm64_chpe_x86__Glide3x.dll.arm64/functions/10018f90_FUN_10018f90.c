/*
 * FUN_10018f90 at 10018f90
 * undefined FUN_10018f90(void)
 * Address ranges: 10018f90-1001911b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018f90(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  code *extraout_w11;
  
  FUN_1001bfa8(*(undefined4 *)(param_1 + 0x32dc));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2b20) =
       (uint)(((param_2 != 4 || param_3 != 0) || param_4 != 4) || param_5 != 0);
  *(undefined4 *)(param_1 + 0x2b2c) = 1;
  *(undefined4 *)(param_1 + 0x2b24) = *(undefined4 *)(&DAT_10099b50 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x2b28) = *(undefined4 *)(&DAT_10099b10 + param_3 * 4);
  *(undefined4 *)(param_1 + 0x2b38) = 1;
  uVar1 = 1;
  uVar2 = uVar1;
  if (param_4 == 4) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x2b30) = uVar2;
  if (param_5 == 4) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x2b34) = uVar1;
  uVar2 = 1;
  if (param_3 == 0xf) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x2bc8) = uVar2;
  uVar4 = *(uint *)(param_1 + 0x2bcc);
  uVar3 = uVar4 & 0xfffffffe;
  if (param_3 == 0xf) {
    uVar3 = uVar4 | 1;
  }
  *(uint *)(param_1 + 0x2bcc) = uVar3;
  *(undefined1 *)(param_1 + 0x2c61) = 1;
  uVar3 = 0x400;
  if (param_4 != 4) {
    uVar3 = 0;
  }
  uVar4 = 4;
  if (param_5 != 4) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x2c8c) = uVar3 | uVar4 | *(uint *)(param_1 + 0x2c8c) & 0xffff0000;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

