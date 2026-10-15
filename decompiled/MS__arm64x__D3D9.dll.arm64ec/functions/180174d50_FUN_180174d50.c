/*
 * FUN_180174d50 at 180174d50
 * undefined FUN_180174d50(void)
 * Address ranges: 180174d50-180174fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180174d50(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,uint param_6)

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
  undefined8 uVar10;
  uint uVar11;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  uVar7 = (uint)param_4 >> 0x10 & 0xff;
  iVar8 = 4;
  uVar3 = 0;
  do {
    uVar9 = uVar3;
    uVar1 = 1 << (ulonglong)(uVar7 & 3);
    uVar3 = uVar1 | uVar9;
    uVar7 = uVar7 >> 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_58 = param_5 >> 0x10 & 0xff;
  iVar8 = 4;
  local_4c = 0;
  uVar7 = local_58;
  do {
    local_54 = local_4c;
    local_50 = 1 << (ulonglong)(uVar7 & 3);
    local_4c = local_50 | local_54;
    uVar7 = uVar7 >> 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  uVar7 = param_6 >> 0x10 & 0xff;
  iVar8 = 4;
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar2 = 1 << (ulonglong)(uVar7 & 3);
    uVar7 = uVar7 >> 2;
    iVar8 = iVar8 + -1;
    uVar4 = uVar2 | uVar11;
  } while (iVar8 != 0);
  local_60 = (uint)param_4 & 0xff00ffff;
  iVar8 = 0;
  if (local_60 != (param_6 & 0xff00ffff)) {
    iVar8 = 2;
  }
  uStack_5c = param_5 & 0xff00ffff;
  if (uStack_5c == (param_6 & 0xff00ffff)) {
    iVar8 = 1;
  }
  uVar7 = local_4c;
  if (local_60 != uStack_5c) {
    uVar7 = 0;
  }
  uVar1 = uVar2 | uVar1 | uVar9 | uVar11;
  if (iVar8 != 0) {
    uVar1 = uVar3;
  }
  uVar5 = FUN_180174570(uVar11,&local_70,param_2,param_4,uVar7 | uVar1);
  uVar10 = local_70;
  local_68 = 0;
  uVar5 = FUN_1801745f0(uVar5,param_2,param_3,0,param_4 & 0xffffffff,local_70,0,0,0);
  if ((local_60 == uStack_5c) && ((int)uVar10 != 0)) {
    *(undefined1 *)(param_2 + 900) = (undefined1)local_58;
    *(undefined8 *)(param_2 + 0x390) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x398) = 0xffffffffffffffff;
    *(int *)(param_2 + 0x380) = (int)local_70;
  }
  else {
    uVar3 = uVar2 | local_50 | local_54 | uVar11;
    if (iVar8 != 1) {
      uVar3 = local_4c;
    }
    puVar6 = (undefined8 *)FUN_180174570(uVar5,&local_68,param_2,param_5,uVar3);
    uVar10 = *puVar6;
    uVar5 = FUN_1801745f0(puVar6,param_2,param_3,1,param_5,uVar10,0,0,0);
    local_68 = uVar10;
  }
  if (iVar8 != 0) {
    if (iVar8 != 1) goto LAB_180174f58;
    local_70._0_4_ = (int)local_68;
  }
  if ((int)local_70 != 0) {
    local_78 = (undefined1)(param_6 >> 0x10);
    *(int *)(param_2 + 0x3a0) = (int)local_70;
    *(undefined1 *)(param_2 + 0x3a4) = local_78;
    *(undefined8 *)(param_2 + 0x3b0) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x3b8) = 0xffffffffffffffff;
    return;
  }
LAB_180174f58:
  puVar6 = (undefined8 *)FUN_180174570(uVar5,&local_68,param_2,param_6,uVar2 | uVar11);
  FUN_1801745f0(puVar6,param_2,param_3,2,param_6,*puVar6,0,0,0);
  return;
}

