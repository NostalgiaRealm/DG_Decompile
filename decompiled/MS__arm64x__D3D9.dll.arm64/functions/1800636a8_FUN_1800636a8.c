/*
 * FUN_1800636a8 at 1800636a8
 * undefined FUN_1800636a8(void)
 * Address ranges: 1800636a8-180063903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800636a8(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58 [2];
  
  uVar8 = (uint)param_4 >> 0x10 & 0xff;
  iVar9 = 4;
  uVar3 = 0;
  do {
    uVar10 = uVar3;
    uVar1 = 1 << (ulonglong)(uVar8 & 3);
    uVar3 = uVar1 | uVar10;
    uVar8 = uVar8 >> 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_68 = param_5 >> 0x10 & 0xff;
  iVar9 = 4;
  local_58[0] = 0;
  uVar8 = local_68;
  do {
    local_64 = local_58[0];
    local_60 = 1 << (ulonglong)(uVar8 & 3);
    local_58[0] = local_60 | local_64;
    uVar8 = uVar8 >> 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar8 = param_6 >> 0x10 & 0xff;
  iVar9 = 4;
  uVar5 = 0;
  do {
    uVar12 = uVar5;
    uVar2 = 1 << (ulonglong)(uVar8 & 3);
    uVar8 = uVar8 >> 2;
    iVar9 = iVar9 + -1;
    uVar5 = uVar2 | uVar12;
  } while (iVar9 != 0);
  local_70 = (uint)param_4 & 0xff00ffff;
  iVar9 = 0;
  if (local_70 != (param_6 & 0xff00ffff)) {
    iVar9 = 2;
  }
  uStack_6c = param_5 & 0xff00ffff;
  if (uStack_6c == (param_6 & 0xff00ffff)) {
    iVar9 = 1;
  }
  uVar8 = local_58[0];
  if (local_70 != uStack_6c) {
    uVar8 = 0;
  }
  uVar1 = uVar2 | uVar1 | uVar10 | uVar12;
  if (iVar9 != 0) {
    uVar1 = uVar3;
  }
  uVar6 = FUN_180063038(param_1,&local_78,param_2,param_4,uVar8 | uVar1);
  uVar4 = local_78;
  uVar11 = 0;
  uVar6 = FUN_1800630b0(uVar6,param_2,param_3,0,param_4 & 0xffffffff,local_78,0,0,0);
  if ((local_70 == uStack_6c) && ((int)uVar4 != 0)) {
    *(undefined1 *)(param_2 + 900) = (undefined1)local_68;
    *(undefined8 *)(param_2 + 0x390) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x398) = 0xffffffffffffffff;
    *(int *)(param_2 + 0x380) = (int)local_78;
  }
  else {
    uVar3 = uVar2 | local_60 | local_64 | uVar12;
    if (iVar9 != 1) {
      uVar3 = local_58[0];
    }
    puVar7 = (undefined8 *)FUN_180063038(uVar6,local_58,param_2,param_5,uVar3);
    uVar11 = *puVar7;
    uVar6 = FUN_1800630b0(puVar7,param_2,param_3,1,param_5,uVar11,0,0,0);
  }
  if (iVar9 == 0) {
    if ((int)local_78 == 0) {
LAB_1800638ac:
      puVar7 = (undefined8 *)FUN_180063038(uVar6,&local_78,param_2,param_6,uVar2 | uVar12);
      FUN_1800630b0(puVar7,param_2,param_3,2,param_6,*puVar7,0,0,0);
      return;
    }
    *(int *)(param_2 + 0x3a0) = (int)local_78;
  }
  else {
    if ((iVar9 != 1) || ((int)uVar11 == 0)) goto LAB_1800638ac;
    *(int *)(param_2 + 0x3a0) = (int)uVar11;
  }
  *(char *)(param_2 + 0x3a4) = (char)(param_6 >> 0x10);
  *(undefined8 *)(param_2 + 0x3b0) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x3b8) = 0xffffffffffffffff;
  return;
}

