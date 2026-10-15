/*
 * FUN_1801e6fa8 at 1801e6fa8
 * undefined FUN_1801e6fa8(void)
 * Address ranges: 1801e6fa8-1801e717b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e6fa8(longlong param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  lVar11 = DAT_180258900;
  puVar3 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x100) != 0) {
    puVar3 = (uint *)(*(longlong *)(param_1 + -0x100) + -0x59c0);
  }
  if (((*puVar3 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar8 = true;
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    lVar11 = DAT_180258900;
    if (iVar9 == 0) {
      FUN_1801085c8();
      lVar11 = DAT_180258900;
    }
  }
  iStack_74 = *(int *)(param_1 + -0x30);
  local_70 = *(int *)(param_1 + -0x2c);
  local_80 = 0;
  iStack_6c = *(int *)(param_1 + -0x28);
  local_78 = 0;
  if (param_2 == (int *)0x0) {
    puVar10 = (undefined8 *)FUN_18011aca0(param_1 + -0x58,auStack_50,&local_80);
    uVar19 = *puVar10;
    *(undefined8 *)(param_1 + -0x50) = puVar10[1];
    *(undefined8 *)(param_1 + -0x58) = uVar19;
    *(undefined8 *)(param_1 + -0x48) = puVar10[2];
  }
  else {
    iVar9 = param_2[2];
    iVar5 = param_2[3];
    iVar4 = *param_2;
    iVar6 = param_2[1];
    local_80 = *(undefined8 *)param_2;
    local_78 = param_2[4];
    iVar7 = param_2[5];
    uVar18 = 0x8876086c;
    bVar1 = (((iStack_74 < 1 || local_70 < 1) || iStack_6c < 1) || iVar9 - iVar4 < 0) !=
            (((0 < iStack_74 && 0 < local_70) && 0 < iStack_6c) && SBORROW4(iVar9,iVar4));
    bVar2 = (((iStack_74 < 1 || local_70 < 1) || iStack_6c < 1) || iVar9 == iVar4) || bVar1;
    if (((bVar2 || iVar5 == iVar6) ||
         (bVar2 || iVar5 - iVar6 < 0) !=
         (((((0 < iStack_74 && 0 < local_70) && 0 < iStack_6c) && iVar9 != iVar4) && !bVar1) &&
         SBORROW4(iVar5,iVar6))) || (iVar7 <= local_78)) {
      iVar17 = 0;
      iVar16 = 0;
      iVar15 = 0;
      iVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
    }
    else {
      iVar17 = iVar4;
      if (iVar4 < 1) {
        iVar17 = 0;
      }
      iVar16 = iVar6;
      if (iVar6 < 1) {
        iVar16 = 0;
      }
      iVar15 = local_78;
      if (local_78 < 1) {
        iVar15 = 0;
      }
      iVar14 = iVar9;
      if (iStack_74 <= iVar9) {
        iVar14 = iStack_74;
      }
      iVar13 = iVar5;
      if (local_70 <= iVar5) {
        iVar13 = local_70;
      }
      iVar12 = iVar7;
      if (iStack_6c <= iVar7) {
        iVar12 = iStack_6c;
      }
    }
    if ((((iVar4 != iVar17) || (iVar6 != iVar16)) || (local_78 != iVar15)) ||
       (((iVar9 != iVar14 || (iVar5 != iVar13)) || (bVar1 = true, iVar7 != iVar12)))) {
      bVar1 = false;
    }
    iStack_74 = iVar9;
    local_70 = iVar5;
    iStack_6c = iVar7;
    puVar10 = (undefined8 *)FUN_18011aca0(param_1 + -0x58,auStack_68,&local_80);
    uVar19 = *puVar10;
    *(undefined8 *)(param_1 + -0x50) = puVar10[1];
    *(undefined8 *)(param_1 + -0x58) = uVar19;
    *(undefined8 *)(param_1 + -0x48) = puVar10[2];
    if (!bVar1) goto LAB_1801e714c;
  }
  uVar18 = 0;
LAB_1801e714c:
  if (bVar8) {
    thunk_FUN_18022370c(lVar11);
  }
  else {
    *(undefined4 *)(lVar11 + 0x2c) = 0;
  }
  return uVar18;
}

