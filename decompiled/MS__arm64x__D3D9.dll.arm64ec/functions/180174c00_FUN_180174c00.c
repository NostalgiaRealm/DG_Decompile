/*
 * FUN_180174c00 at 180174c00
 * undefined FUN_180174c00(void)
 * Address ranges: 180174c00-180174d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180174c00(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_50;
  undefined8 local_48;
  
  uVar1 = (uint)param_4 & 0xff00ffff;
  uVar9 = (uint)param_4 >> 0x10 & 0xff;
  iVar8 = 4;
  uVar4 = 0;
  do {
    uVar7 = uVar4;
    uVar2 = 1 << (ulonglong)(uVar9 & 3);
    uVar4 = uVar2 | uVar7;
    uVar9 = uVar9 >> 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  uVar10 = param_5 >> 0x10 & 0xff;
  iVar8 = 4;
  uVar9 = 0;
  do {
    uVar11 = uVar9;
    uVar3 = 1 << (ulonglong)(uVar10 & 3);
    uVar9 = uVar3 | uVar11;
    uVar10 = uVar10 >> 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  uVar2 = uVar2 | uVar3 | uVar11 | uVar7;
  if (uVar1 != (param_5 & 0xff00ffff)) {
    uVar2 = uVar4;
  }
  uVar5 = FUN_180174570(param_1,&local_48,param_2,param_4,uVar2);
  uVar5 = FUN_1801745f0(uVar5,param_2,param_3,0,param_4 & 0xffffffff,local_48,0,0,0);
  if ((uVar1 == (param_5 & 0xff00ffff)) && ((int)local_48 != 0)) {
    local_50 = (undefined1)(param_5 >> 0x10);
    *(int *)(param_2 + 0x380) = (int)local_48;
    *(undefined1 *)(param_2 + 900) = local_50;
    *(undefined8 *)(param_2 + 0x390) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x398) = 0xffffffffffffffff;
  }
  else {
    puVar6 = (undefined8 *)FUN_180174570(uVar5,&local_48,param_2,param_5,uVar9);
    FUN_1801745f0(puVar6,param_2,param_3,1,param_5,*puVar6,0,0,0);
  }
  return;
}

