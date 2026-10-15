/*
 * FUN_1800cb708 at 1800cb708
 * undefined FUN_1800cb708(void)
 * Address ranges: 1800cb708-1800cb8d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800cb708(longlong param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [32];
  
  lVar10 = DAT_18024e310;
  puVar3 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x100) != 0) {
    puVar3 = (uint *)(*(longlong *)(param_1 + -0x100) + -0x59c0);
  }
  if (((*puVar3 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar8 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    lVar10 = DAT_18024e310;
    if (iVar8 == 0) {
      FUN_180003398();
      lVar10 = DAT_18024e310;
    }
  }
  iStack_64 = *(int *)(param_1 + -0x30);
  local_60 = *(int *)(param_1 + -0x2c);
  local_70 = 0;
  iStack_5c = *(int *)(param_1 + -0x28);
  local_68 = 0;
  if (param_2 == (int *)0x0) {
    puVar9 = (undefined8 *)FUN_18000f2e0(param_1 + -0x58,auStack_40,&local_70);
    uVar19 = *puVar9;
    *(undefined8 *)(param_1 + -0x50) = puVar9[1];
    *(undefined8 *)(param_1 + -0x58) = uVar19;
    *(undefined8 *)(param_1 + -0x48) = puVar9[2];
  }
  else {
    iVar8 = param_2[2];
    iVar4 = param_2[3];
    iVar11 = *param_2;
    iVar5 = param_2[1];
    local_70 = *(undefined8 *)param_2;
    local_68 = param_2[4];
    iVar6 = param_2[5];
    uVar18 = 0x8876086c;
    bVar1 = (((iStack_64 < 1 || local_60 < 1) || iStack_5c < 1) || iVar8 - iVar11 < 0) !=
            (((0 < iStack_64 && 0 < local_60) && 0 < iStack_5c) && SBORROW4(iVar8,iVar11));
    bVar2 = (((iStack_64 < 1 || local_60 < 1) || iStack_5c < 1) || iVar8 == iVar11) || bVar1;
    if (((bVar2 || iVar4 == iVar5) ||
         (bVar2 || iVar4 - iVar5 < 0) !=
         (((((0 < iStack_64 && 0 < local_60) && 0 < iStack_5c) && iVar8 != iVar11) && !bVar1) &&
         SBORROW4(iVar4,iVar5))) || (iVar6 <= local_68)) {
      iVar17 = 0;
      iVar16 = 0;
      iVar15 = 0;
      iVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
    }
    else {
      iVar17 = iVar11;
      if (iVar11 < 1) {
        iVar17 = 0;
      }
      iVar16 = iVar5;
      if (iVar5 < 1) {
        iVar16 = 0;
      }
      iVar15 = local_68;
      if (local_68 < 1) {
        iVar15 = 0;
      }
      iVar14 = iVar8;
      if (iStack_64 <= iVar8) {
        iVar14 = iStack_64;
      }
      iVar13 = iVar4;
      if (local_60 <= iVar4) {
        iVar13 = local_60;
      }
      iVar12 = iVar6;
      if (iStack_5c <= iVar6) {
        iVar12 = iStack_5c;
      }
    }
    if ((((iVar11 != iVar17) || (iVar5 != iVar16)) || (local_68 != iVar15)) ||
       (((iVar8 != iVar14 || (iVar4 != iVar13)) || (iVar11 = 1, iVar6 != iVar12)))) {
      iVar11 = 0;
    }
    iStack_64 = iVar8;
    local_60 = iVar4;
    iStack_5c = iVar6;
    puVar9 = (undefined8 *)FUN_18000f2e0(param_1 + -0x58,auStack_58,&local_70);
    uVar19 = *puVar9;
    *(undefined8 *)(param_1 + -0x50) = puVar9[1];
    *(undefined8 *)(param_1 + -0x58) = uVar19;
    *(undefined8 *)(param_1 + -0x48) = puVar9[2];
    if (iVar11 == 0) goto LAB_1800cb8a8;
  }
  uVar18 = 0;
LAB_1800cb8a8:
  if (bVar7) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar10);
  }
  else {
    *(undefined4 *)(lVar10 + 0x2c) = 0;
  }
  return uVar18;
}

