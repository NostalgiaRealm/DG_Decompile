/*
 * FUN_100ab7f8 at 100ab7f8
 * undefined FUN_100ab7f8(void)
 * Address ranges: 100ab7f8-100ab973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ab7f8(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
                 ,char param_7,char param_8,byte param_9)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int extraout_w1;
  undefined4 uVar5;
  undefined4 extraout_s17;
  undefined4 extraout_s18;
  
  uVar5 = 0x3f800000;
  if (param_7 == '\0') {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x1ce38) = uVar5;
  uVar5 = 0x3f800000;
  if (param_8 == '\0') {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x1ce3c) = uVar5;
  *(uint *)(param_1 + 0x1ce74) = param_5 & 0xff;
  *(uint *)(param_1 + 0x1ceb8) = param_6 & 0xff;
  *(uint *)(param_1 + 0x1ceb0) = param_4;
  *(uint *)(param_1 + 0x1cea8) = param_3 & param_4;
  uVar4 = FUN_100aa9e8(param_1,param_2,0,param_4);
  iVar3 = extraout_w1 * 0x2c;
  uVar1 = uVar4 & CONCAT31(CONCAT21(CONCAT11((&DAT_10136ee8)[iVar3],(&DAT_10136ee9)[iVar3]),
                                    (&DAT_10136eea)[iVar3]),(&DAT_10136eeb)[iVar3]);
  if (*(char *)(extraout_w1 + 0x1012cba0) == '\0') {
    uVar1 = uVar1 & 0xff;
  }
  cVar2 = *(char *)(extraout_w1 + 0x1012cd80);
  if (cVar2 == '\0') {
    uVar1 = uVar1 & 0xffffff00;
  }
  *(uint *)(param_1 + 0x1ceb4) = uVar1;
  uVar4 = FUN_100aa9e8(uVar4,extraout_w1,0,param_3);
  *(uint *)(param_1 + 0x1ceac) = uVar4 & uVar1;
  *(uint *)(param_1 + 0x1ce78) = (uint)param_9;
  *(undefined4 *)(param_1 + 0x1ce88) = 0;
  *(undefined8 *)(param_1 + 0x1ce80) = 0;
  uVar5 = extraout_s17;
  if (cVar2 == '\0') {
    uVar5 = extraout_s18;
  }
  *(undefined4 *)(param_1 + 0x1ce8c) = uVar5;
  return;
}

