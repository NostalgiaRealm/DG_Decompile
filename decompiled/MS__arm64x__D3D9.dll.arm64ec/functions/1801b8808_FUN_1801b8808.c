/*
 * FUN_1801b8808 at 1801b8808
 * undefined FUN_1801b8808(void)
 * Address ranges: 1801b8808-1801b893b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b8808(longlong param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,char param_7,char param_8,byte param_9)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int extraout_w1;
  uint extraout_w1_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = 0x3f800000;
  uVar6 = 0;
  uVar5 = 0x3f800000;
  if (param_7 == '\0') {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x1ce48) = uVar5;
  uVar5 = 0x3f800000;
  if (param_8 == '\0') {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x1ce4c) = uVar5;
  *(uint *)(param_1 + 0x1ce84) = param_5 & 0xff;
  *(uint *)(param_1 + 0x1cec8) = param_6 & 0xff;
  *(uint *)(param_1 + 0x1cec0) = param_4;
  *(uint *)(param_1 + 0x1ceb8) = param_3 & param_4;
  uVar3 = FUN_1801b7f38((int)param_1,param_2,0);
  lVar2 = (longlong)extraout_w1 * 0x2c;
  uVar1 = uVar3 & CONCAT31(CONCAT21(CONCAT11((&DAT_180248468)[lVar2],(&DAT_180248469)[lVar2]),
                                    (&DAT_18024846a)[lVar2]),(&DAT_18024846b)[lVar2]);
  if ((&DAT_18022dd78)[extraout_w1] == '\0') {
    uVar1 = uVar1 & 0xff;
  }
  if ((&DAT_18022da48)[extraout_w1] == '\0') {
    uVar1 = uVar1 & 0xffffff00;
  }
  *(uint *)(param_1 + 0x1cec4) = uVar1;
  uVar3 = FUN_1801b7f38(uVar3,extraout_w1,0,param_3);
  *(uint *)(param_1 + 0x1cebc) = uVar3 & uVar1;
  *(uint *)(param_1 + 0x1ce88) = (uint)param_9;
  *(undefined4 *)(param_1 + 0x1ce98) = 0;
  *(undefined8 *)(param_1 + 0x1ce90) = 0;
  if ((&DAT_18022da48)[extraout_w1_00] == '\0') {
    uVar6 = uVar4;
  }
  *(undefined4 *)(param_1 + 0x1ce9c) = uVar6;
  return;
}

