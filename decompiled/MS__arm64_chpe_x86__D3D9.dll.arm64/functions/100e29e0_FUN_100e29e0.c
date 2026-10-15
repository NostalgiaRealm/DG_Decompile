/*
 * FUN_100e29e0 at 100e29e0
 * undefined FUN_100e29e0(void)
 * Address ranges: 100e29e0-100e3027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e29e0(uint param_1,ushort *param_2,int *param_3,undefined4 param_4,uint *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,int param_11)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *extraout_w8;
  undefined1 uVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar16;
  undefined8 uVar17;
  uint *local_8c;
  ushort *local_88;
  int *local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint *local_74;
  undefined4 *local_70;
  uint *local_6c;
  uint local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  
  local_8c = param_5;
  local_88 = param_2;
  local_84 = param_3;
  if (((*(uint *)(param_1 - 0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar5 = true;
    iVar8 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar8 == 0) {
      FUN_100071d0(0);
    }
  }
  local_80 = 0x2a;
  local_7c = 0;
  local_78 = param_1 - 0x66b4;
  iVar8 = FUN_100085d0(local_78,local_88,local_84,param_4,&local_8c,param_6,param_7,param_8,param_9)
  ;
  if (iVar8 == 0x876086f) {
    local_8c = (uint *)0x1;
  }
  else if (iVar8 < 0) goto LAB_100e2fdc;
  if (param_11 != 0) {
    iVar8 = -0x7789f794;
    goto LAB_100e2fdc;
  }
  local_74 = *(uint **)(param_1 - 0x58cc);
  iVar8 = -0x7ff8fff2;
  puVar9 = (undefined4 *)FUN_101321c0(0xe0);
  if (puVar9 == (undefined4 *)0x0) goto LAB_100e2fdc;
  *(undefined8 *)(puVar9 + 0x33) = 0;
  puVar9[0x35] = puVar9 + 0x32;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar9[4] = 0;
  uVar16 = 0;
  if (local_78 != 0) {
    uVar16 = param_1;
  }
  puVar9[5] = uVar16;
  puVar9[6] = 4;
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined8 *)(puVar9 + 10) = 0;
  *(undefined2 *)(puVar9 + 0xc) = local_8c._0_2_;
  puVar9[0x24] = local_74;
  puVar9[0x25] = 0;
  puVar9[0x26] = local_88;
  puVar9[0x27] = local_84;
  puVar9[0x28] = param_4;
  puVar9[0x29] = param_6;
  puVar9[0x2a] = param_7;
  piVar3 = puVar9 + 0x2c;
  piVar4 = puVar9 + 0x25;
  puVar9[0x2b] = local_80;
  puVar9[0x2c] = param_8;
  puVar9[0x2d] = local_7c;
  local_68 = local_7c;
  *(undefined1 *)(puVar9 + 0x2e) = 0;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined8 *)(puVar9 + 0xe) = 0;
  *(undefined8 *)(puVar9 + 0x14) = 0;
  *(undefined8 *)(puVar9 + 0x12) = 0;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined8 *)(puVar9 + 0x16) = 0;
  *(undefined8 *)(puVar9 + 0x1c) = 0;
  *(undefined8 *)(puVar9 + 0x1a) = 0;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined8 *)(puVar9 + 0x1e) = 0;
  *(undefined8 *)(puVar9 + 0x22) = 0;
  *puVar9 = &PTR_D3DPERF_SetOptions_native_1015fe14;
  puVar9[0x30] = &PTR_FUN_1015e6dc;
  puVar9[0x32] = &PTR_FUN_1015fdbc;
  puVar9[0x36] = 2;
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*piVar3 != 3) {
    puVar13 = puVar9 + 0x2b;
    puVar12 = puVar9 + 0x28;
    puVar14 = puVar9 + 0x27;
    uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar11 = (*extraout_w11)(uVar10,*extraout_w8,*puVar14,*puVar12,*puVar13);
    *piVar4 = iVar11;
  }
  if ((*piVar4 != 0) || (*piVar3 == 3)) {
    uVar16 = puVar9[0x29] & 0x200;
    if ((uVar16 == 0) && (*piVar3 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(puVar9 + 0x2e) = uVar15;
    if ((uVar16 == 0) && (*piVar3 == 0)) {
      uVar17 = 0;
    }
    else {
      uVar17 = 1;
    }
    local_88 = (ushort *)(puVar9 + 0xc);
    uVar16 = 0;
    if (*local_88 != 0) {
      local_74 = puVar9 + 0x26;
      local_80 = -0x7ff8fff2;
      local_8c = puVar9 + 0x27;
      local_6c = puVar9 + 0x28;
      local_70 = puVar9 + 0x2a;
      local_84 = piVar4;
      local_7c = param_1;
      do {
        local_50 = *local_74 >> (ulonglong)(uVar16 & 0x1f);
        uStack_4c = *local_8c >> (ulonglong)(uVar16 & 0x1f);
        local_48 = *local_6c >> (ulonglong)(uVar16 & 0x1f);
        local_60 = *local_70;
        uStack_5c = puVar9[6];
        local_58 = puVar9[0x29];
        iStack_54 = *piVar3;
        if (local_50 == 0) {
          local_50 = 1;
        }
        if (uStack_4c == 0) {
          uStack_4c = 1;
        }
        if (local_48 == 0) {
          local_48 = 1;
        }
        (*pcVar6)();
        cVar7 = (*extraout_w11_00)(puVar9,uVar16,&local_60,uVar17);
        param_1 = local_7c;
        iVar8 = local_80;
        piVar4 = local_84;
      } while ((cVar7 != '\0') && (uVar16 = uVar16 + 1, uVar16 < *local_88));
    }
    if (uVar16 == *local_88) {
      piVar3 = (int *)(param_1 - 0x589c);
      puVar1 = (uint *)(param_1 - 0x5894);
      puVar2 = (uint *)(param_1 - 0x5898);
      uVar16 = *puVar1;
      if (*puVar2 == uVar16) {
        local_70 = (undefined4 *)(uVar16 << 1);
        if (uVar16 == 0) {
          local_70 = (undefined4 *)&DAT_00000010;
        }
        iVar11 = (int)local_70 * 4;
        if ((uint)local_70 >> 0x1e != 0) {
          iVar11 = -1;
        }
        iVar11 = FUN_101322b0(iVar11);
        if (iVar11 != 0) {
          FUN_101325a0(iVar11,*piVar3,((ulonglong)*puVar1 & 0x3fffffff) << 2);
          FUN_101322d0(*piVar3);
          *piVar3 = iVar11;
          *puVar1 = (uint)local_70;
          goto LAB_100e2f2c;
        }
      }
      else {
LAB_100e2f2c:
        *(undefined4 **)(*piVar3 + *puVar2 * 4) = puVar9;
        *puVar2 = *puVar2 + 1;
        iVar8 = FUN_100ed100(puVar9 + 0x32,&DAT_1015e480,param_9);
        if (-1 < iVar8) {
          (&DAT_10171578)[*(int *)(param_1 - 0x58c4) * 0x45] =
               (&DAT_10171578)[*(int *)(param_1 - 0x58c4) * 0x45] - (ulonglong)local_68;
          puVar13 = (undefined4 *)0x0;
          if (puVar9 != (undefined4 *)0x0) {
            puVar13 = puVar9 + 0x30;
          }
          FUN_10001a00(local_78,puVar13);
          goto LAB_100e2fdc;
        }
        FUN_1000d260(local_78,puVar9);
      }
      FUN_100ecf68(puVar9);
    }
    else {
      for (iVar11 = uVar16 + 1; iVar11 != 0; iVar11 = iVar11 + -1) {
        (*pcVar6)();
        (*extraout_w11_01)(puVar9,iVar11);
      }
      if (*piVar4 != 0) {
        uVar10 = (*pcVar6)();
        (*extraout_w11_02)(uVar10,1);
      }
      *piVar4 = 0;
    }
  }
  FUN_100ecab0(puVar9);
  FUN_10132260(puVar9,0xe0);
LAB_100e2fdc:
  if (bVar5) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar8;
}

