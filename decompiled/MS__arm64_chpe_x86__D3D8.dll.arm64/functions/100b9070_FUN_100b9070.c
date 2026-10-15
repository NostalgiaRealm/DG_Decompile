/*
 * FUN_100b9070 at 100b9070
 * undefined FUN_100b9070(void)
 * Address ranges: 100b9070-100b966f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b9070(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  ushort *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *extraout_w8;
  undefined1 uVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar18;
  undefined8 uVar19;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  undefined4 *local_70;
  int local_6c;
  uint local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  
  local_7c = param_5;
  local_78 = param_2;
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar7 = true;
    iVar13 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar13 == 0) {
      FUN_10006560(0);
    }
  }
  iVar13 = param_1 + -0x58e0;
  local_6c = iVar13;
  iVar10 = FUN_10007830(iVar13,local_78,param_3,param_4,&local_7c,param_6,param_7,param_8,param_9);
  if (iVar10 < 0) goto LAB_100b9624;
  local_74 = *(uint **)(param_1 + -0x4dbc);
  iVar10 = -0x7ff8fff2;
  puVar11 = (undefined4 *)FUN_100febf0(0xd8);
  if (puVar11 == (undefined4 *)0x0) goto LAB_100b9624;
  *(undefined8 *)(puVar11 + 0x33) = 0;
  puVar11[0x35] = puVar11 + 0x32;
  *(undefined8 *)(puVar11 + 2) = 0;
  puVar11[4] = 0;
  iVar5 = 0;
  if (iVar13 != 0) {
    iVar5 = param_1;
  }
  puVar11[5] = iVar5;
  puVar11[6] = 4;
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined8 *)(puVar11 + 10) = 0;
  *(undefined2 *)(puVar11 + 0xc) = local_7c._0_2_;
  puVar11[0x24] = local_74;
  puVar11[0x25] = 0;
  puVar11[0x26] = local_78;
  puVar11[0x27] = param_3;
  puVar11[0x28] = param_4;
  puVar11[0x29] = param_6;
  puVar11[0x2a] = param_7;
  piVar6 = puVar11 + 0x2c;
  puVar11[0x2b] = 0x1c;
  puVar11[0x2c] = param_8;
  piVar1 = puVar11 + 0x25;
  puVar11[0x2d] = 0;
  local_68 = 0;
  *(undefined1 *)(puVar11 + 0x2e) = 0;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined8 *)(puVar11 + 0xe) = 0;
  *(undefined8 *)(puVar11 + 0x14) = 0;
  *(undefined8 *)(puVar11 + 0x12) = 0;
  *(undefined8 *)(puVar11 + 0x18) = 0;
  *(undefined8 *)(puVar11 + 0x16) = 0;
  *(undefined8 *)(puVar11 + 0x1c) = 0;
  *(undefined8 *)(puVar11 + 0x1a) = 0;
  *(undefined8 *)(puVar11 + 0x20) = 0;
  *(undefined8 *)(puVar11 + 0x1e) = 0;
  *(undefined8 *)(puVar11 + 0x22) = 0;
  *puVar11 = &PTR_FUN_1012a714;
  puVar11[0x30] = &PTR_FUN_101292ec;
  puVar11[0x32] = &PTR_FUN_1012a6c8;
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*piVar6 != 3) {
    puVar15 = puVar11 + 0x2b;
    puVar14 = puVar11 + 0x28;
    puVar16 = puVar11 + 0x27;
    uVar12 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar13 = (*extraout_w11)(uVar12,*extraout_w8,*puVar16,*puVar14,*puVar15);
    *piVar1 = iVar13;
  }
  if ((*piVar1 != 0) || (*piVar6 == 3)) {
    uVar18 = puVar11[0x29] & 0x200;
    if ((uVar18 == 0) && (*piVar6 == 0)) {
      uVar17 = 0;
    }
    else {
      uVar17 = 1;
    }
    *(undefined1 *)(puVar11 + 0x2e) = uVar17;
    if ((uVar18 == 0) && (*piVar6 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = 1;
    }
    puVar2 = (ushort *)(puVar11 + 0xc);
    uVar18 = 0;
    if (*puVar2 != 0) {
      local_7c = puVar11 + 0x28;
      local_74 = puVar11 + 0x26;
      local_78 = puVar11 + 0x27;
      local_70 = puVar11 + 0x2a;
      do {
        uStack_4c = *local_74 >> (ulonglong)(uVar18 & 0x1f);
        local_48 = *local_78 >> (ulonglong)(uVar18 & 0x1f);
        uStack_44 = *local_7c >> (ulonglong)(uVar18 & 0x1f);
        local_60 = *local_70;
        uStack_5c = puVar11[6];
        local_58 = puVar11[0x29];
        iStack_54 = *piVar6;
        if (uStack_4c == 0) {
          uStack_4c = 1;
        }
        local_50 = 0;
        if (local_48 == 0) {
          local_48 = 1;
        }
        if (uStack_44 == 0) {
          uStack_44 = 1;
        }
        (*pcVar8)();
        cVar9 = (*extraout_w11_00)(puVar11,uVar18,&local_60,uVar19);
      } while ((cVar9 != '\0') && (uVar18 = uVar18 + 1, uVar18 < *puVar2));
    }
    iVar10 = -0x7ff8fff2;
    if (uVar18 == *puVar2) {
      piVar6 = (int *)(param_1 + -0x4d8c);
      puVar3 = (uint *)(param_1 + -0x4d84);
      puVar4 = (uint *)(param_1 + -0x4d88);
      uVar18 = *puVar3;
      if (*puVar4 == uVar18) {
        local_70 = (undefined4 *)(uVar18 << 1);
        if (uVar18 == 0) {
          local_70 = (undefined4 *)&DAT_00000010;
        }
        iVar13 = (int)local_70 * 4;
        if ((uint)local_70 >> 0x1e != 0) {
          iVar13 = -1;
        }
        iVar13 = FUN_100fece0(iVar13);
        if (iVar13 != 0) {
          FUN_100ff660(iVar13,*piVar6,((ulonglong)*puVar3 & 0x3fffffff) << 2);
          FUN_100fed00(*piVar6);
          *piVar6 = iVar13;
          *puVar3 = (uint)local_70;
          goto LAB_100b9584;
        }
      }
      else {
LAB_100b9584:
        *(undefined4 **)(*piVar6 + *puVar4 * 4) = puVar11;
        *puVar4 = *puVar4 + 1;
        iVar10 = FUN_100c1800(puVar11 + 0x32,&DAT_10129110,param_9);
        if (-1 < iVar10) {
          (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] =
               (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] - (ulonglong)local_68;
          puVar15 = (undefined4 *)0x0;
          if (puVar11 != (undefined4 *)0x0) {
            puVar15 = puVar11 + 0x30;
          }
          FUN_100019b0(local_6c,puVar15);
          goto LAB_100b9624;
        }
        FUN_1000c1e0(local_6c,puVar11);
      }
      FUN_100c1668(puVar11);
    }
    else {
      for (iVar13 = uVar18 + 1; iVar13 != 0; iVar13 = iVar13 + -1) {
        (*pcVar8)();
        (*extraout_w11_01)(puVar11,iVar13);
      }
      if (*piVar1 != 0) {
        uVar12 = (*pcVar8)();
        (*extraout_w11_02)(uVar12,1);
      }
      *piVar1 = 0;
    }
  }
  FUN_100c11c0(puVar11);
  FUN_100fec90(puVar11,0xd8);
LAB_100b9624:
  if (bVar7) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar10;
}

