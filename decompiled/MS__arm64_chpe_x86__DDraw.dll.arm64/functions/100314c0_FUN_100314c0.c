/*
 * FUN_100314c0 at 100314c0
 * undefined FUN_100314c0(void)
 * Address ranges: 100314c0-100315ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100314c0(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
                 ,char param_7,char param_8,byte param_9)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int extraout_w1;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_s18;
  undefined4 extraout_s19;
  
  uVar6 = 0x3f800000;
  if (param_7 == '\0') {
    uVar6 = 0;
  }
  uVar5 = 0x3f800000;
  if (param_8 == '\0') {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0xceb8) = param_6 & 0xff;
  *(uint *)(param_1 + 0xceb0) = param_4;
  *(uint *)(param_1 + 0xcea8) = param_3 & param_4;
  *(uint *)(param_1 + 0xce74) = param_5 & 0xff;
  *(undefined4 *)(param_1 + 0xce38) = uVar6;
  *(undefined4 *)(param_1 + 0xce3c) = uVar5;
  uVar4 = FUN_10030738(param_1,param_2,0,param_4);
  iVar3 = extraout_w1 * 0x2c;
  uVar1 = uVar4 & CONCAT31(CONCAT21(CONCAT11((&DAT_100bb7a8)[iVar3],(&DAT_100bb7a9)[iVar3]),
                                    (&DAT_100bb7aa)[iVar3]),(&DAT_100bb7ab)[iVar3]);
  if (*(char *)(extraout_w1 + 0x100b3810) == '\0') {
    uVar1 = uVar1 & 0xff;
  }
  cVar2 = *(char *)(extraout_w1 + 0x100b3590);
  if (cVar2 == '\0') {
    uVar1 = uVar1 & 0xffffff00;
  }
  *(uint *)(param_1 + 0xceb4) = uVar1;
  uVar4 = FUN_10030738(uVar4,extraout_w1,0,param_3);
  *(undefined4 *)(param_1 + 0xce88) = 0;
  *(uint *)(param_1 + 0xceac) = uVar4 & uVar1;
  uVar6 = extraout_s18;
  if (cVar2 == '\0') {
    uVar6 = extraout_s19;
  }
  *(uint *)(param_1 + 0xce78) = (uint)param_9;
  *(undefined4 *)(param_1 + 0xce8c) = uVar6;
  *(undefined8 *)(param_1 + 0xce80) = 0;
  return;
}

