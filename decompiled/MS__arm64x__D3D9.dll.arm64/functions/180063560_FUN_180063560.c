/*
 * FUN_180063560 at 180063560
 * undefined FUN_180063560(void)
 * Address ranges: 180063560-1800636a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063560(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_50 [2];
  
  uVar1 = (uint)param_4 & 0xff00ffff;
  uVar10 = (uint)param_4 >> 0x10 & 0xff;
  iVar9 = 4;
  uVar4 = 0;
  do {
    uVar8 = uVar4;
    uVar2 = 1 << (ulonglong)(uVar10 & 3);
    uVar4 = uVar2 | uVar8;
    uVar10 = uVar10 >> 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar5 = param_5 >> 0x10 & 0xff;
  iVar9 = 4;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar3 = 1 << (ulonglong)(uVar5 & 3);
    uVar10 = uVar3 | uVar11;
    uVar5 = uVar5 >> 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar2 = uVar2 | uVar3 | uVar11 | uVar8;
  if (uVar1 != (param_5 & 0xff00ffff)) {
    uVar2 = uVar4;
  }
  uVar6 = FUN_180063038(param_1,local_50,param_2,param_4,uVar2);
  uVar6 = FUN_1800630b0(uVar6,param_2,param_3,0,param_4 & 0xffffffff,local_50[0],0,0,0);
  if ((uVar1 == (param_5 & 0xff00ffff)) && ((int)local_50[0] != 0)) {
    *(int *)(param_2 + 0x380) = (int)local_50[0];
    *(char *)(param_2 + 900) = (char)(param_5 >> 0x10);
    *(undefined8 *)(param_2 + 0x390) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x398) = 0xffffffffffffffff;
  }
  else {
    puVar7 = (undefined8 *)FUN_180063038(uVar6,local_50,param_2,param_5,uVar10);
    FUN_1800630b0(puVar7,param_2,param_3,1,param_5,*puVar7,0,0,0);
  }
  return;
}

