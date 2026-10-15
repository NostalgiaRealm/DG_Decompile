/*
 * FUN_10071500 at 10071500
 * undefined FUN_10071500(void)
 * Address ranges: 10071500-1007171b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071500(undefined8 param_1,int param_2,undefined4 param_3,ulonglong param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint extraout_w12;
  byte extraout_w13;
  int iVar11;
  int iVar12;
  byte bVar13;
  undefined8 local_50 [2];
  
  uVar9 = param_6;
  uVar6 = FUN_10070b58(param_1,param_5 >> 0x10 & 0xff);
  uVar4 = uVar9 >> 0x10;
  uVar7 = FUN_10070b58(uVar6,uVar9 >> 0x10 & 0xff);
  uVar1 = (uint)param_4 & 0xff00ffff;
  iVar10 = 0;
  if (uVar1 != (uVar9 & 0xff00ffff)) {
    iVar10 = 2;
  }
  if ((param_5 & 0xff00ffff) == (uVar9 & 0xff00ffff)) {
    iVar10 = 1;
  }
  uVar8 = FUN_10070b58(uVar7,(uint)param_4 >> 0x10 & 0xff);
  bVar2 = extraout_w13;
  if (uVar1 != extraout_w12) {
    bVar2 = 0;
  }
  bVar13 = (byte)uVar7;
  bVar3 = bVar13;
  if (iVar10 != 0) {
    bVar3 = 0;
  }
  param_4 = param_4 & 0xffffffff;
  uVar8 = FUN_10070cc0(uVar8,local_50,param_2,param_4,(byte)uVar8 | bVar2 | bVar3);
  iVar12 = 0;
  uVar8 = FUN_10070d50(uVar8,param_2,param_3,0,param_4 & 0xffffffff,local_50[0],0,0,0);
  iVar11 = (int)local_50[0];
  if ((uVar1 == (param_5 & 0xff00ffff)) && (iVar11 != 0)) {
    *(int *)(param_2 + 0x280) = iVar11;
    *(char *)(param_2 + 0x284) = (char)(param_5 >> 0x10);
    *(undefined8 *)(param_2 + 0x290) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x298) = 0xffffffffffffffff;
  }
  else {
    if (iVar10 != 1) {
      bVar13 = 0;
    }
    puVar5 = (undefined8 *)FUN_10070cc0(uVar8,local_50,param_2,param_5,bVar13 | (byte)uVar6);
    uVar6 = *puVar5;
    uVar8 = FUN_10070d50(puVar5,param_2,param_3,1,param_5,uVar6,0,0,0);
    iVar12 = (int)uVar6;
  }
  if (iVar10 == 0) {
    if (iVar11 == 0) {
LAB_100716bc:
      puVar5 = (undefined8 *)FUN_10070cc0(uVar8,local_50,param_2,param_6,uVar7 & 0xff);
      FUN_10070d50(puVar5,param_2,param_3,2,param_6,*puVar5,0,0,0);
      return;
    }
    *(int *)(param_2 + 0x2a0) = iVar11;
  }
  else {
    if ((iVar10 != 1) || (iVar12 == 0)) goto LAB_100716bc;
    *(int *)(param_2 + 0x2a0) = iVar12;
  }
  *(char *)(param_2 + 0x2a4) = (char)uVar4;
  *(undefined8 *)(param_2 + 0x2b0) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x2b8) = 0xffffffffffffffff;
  return;
}

