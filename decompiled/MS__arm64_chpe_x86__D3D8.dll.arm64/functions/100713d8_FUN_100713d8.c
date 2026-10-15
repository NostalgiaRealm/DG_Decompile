/*
 * FUN_100713d8 at 100713d8
 * undefined FUN_100713d8(void)
 * Address ranges: 100713d8-100714fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100713d8(undefined8 param_1,int param_2,undefined4 param_3,ulonglong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint extraout_w12;
  uint uVar5;
  undefined8 local_50 [2];
  
  uVar1 = (uint)param_4 & 0xff00ffff;
  uVar4 = FUN_10070b58(param_1,(uint)param_4 >> 0x10 & 0xff);
  uVar4 = FUN_10070b58(uVar4,param_5 >> 0x10 & 0xff);
  uVar5 = (uint)uVar4 & 0xff;
  uVar2 = uVar5 | extraout_w12;
  if (uVar1 != (param_5 & 0xff00ffff)) {
    uVar2 = extraout_w12;
  }
  param_4 = param_4 & 0xffffffff;
  uVar4 = FUN_10070cc0(uVar4,local_50,param_2,param_4,uVar2);
  uVar4 = FUN_10070d50(uVar4,param_2,param_3,0,param_4 & 0xffffffff,local_50[0],0,0,0);
  if ((uVar1 == (param_5 & 0xff00ffff)) && ((int)local_50[0] != 0)) {
    *(int *)(param_2 + 0x280) = (int)local_50[0];
    *(char *)(param_2 + 0x284) = (char)(param_5 >> 0x10);
    *(undefined8 *)(param_2 + 0x290) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x298) = 0xffffffffffffffff;
  }
  else {
    puVar3 = (undefined8 *)FUN_10070cc0(uVar4,local_50,param_2,param_5,uVar5);
    FUN_10070d50(puVar3,param_2,param_3,1,param_5,*puVar3,0,0,0);
  }
  return;
}

