/*
 * FUN_1800a0700 at 1800a0700
 * undefined FUN_1800a0700(void)
 * Address ranges: 1800a0700-1800a082f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a0700(longlong param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,char param_7,char param_8,byte param_9)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int extraout_w1;
  uint extraout_w1_00;
  undefined4 uVar4;
  undefined4 extraout_s17;
  undefined4 extraout_s18;
  
  uVar4 = 0x3f800000;
  if (param_7 == '\0') {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x1ce48) = uVar4;
  uVar4 = 0x3f800000;
  if (param_8 == '\0') {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x1ce4c) = uVar4;
  *(uint *)(param_1 + 0x1ce84) = param_5 & 0xff;
  *(uint *)(param_1 + 0x1cec8) = param_6 & 0xff;
  *(uint *)(param_1 + 0x1cec0) = param_4;
  *(uint *)(param_1 + 0x1ceb8) = param_3 & param_4;
  uVar3 = FUN_1800a0038((int)param_1,param_2,0);
  lVar2 = (longlong)extraout_w1 * 0x2c;
  uVar1 = uVar3 & CONCAT31(CONCAT21(CONCAT11((&DAT_18024a978)[lVar2],(&DAT_18024a979)[lVar2]),
                                    (&DAT_18024a97a)[lVar2]),(&DAT_18024a97b)[lVar2]);
  if ((&DAT_180231858)[extraout_w1] == '\0') {
    uVar1 = uVar1 & 0xff;
  }
  if ((&DAT_180231518)[extraout_w1] == '\0') {
    uVar1 = uVar1 & 0xffffff00;
  }
  *(uint *)(param_1 + 0x1cec4) = uVar1;
  uVar3 = FUN_1800a0038(uVar3,extraout_w1,0,param_3);
  *(uint *)(param_1 + 0x1cebc) = uVar3 & uVar1;
  *(uint *)(param_1 + 0x1ce88) = (uint)param_9;
  *(undefined4 *)(param_1 + 0x1ce98) = 0;
  *(undefined8 *)(param_1 + 0x1ce90) = 0;
  uVar4 = extraout_s17;
  if ((&DAT_180231518)[extraout_w1_00] == '\0') {
    uVar4 = extraout_s18;
  }
  *(undefined4 *)(param_1 + 0x1ce9c) = uVar4;
  return;
}

