/*
 * FUN_1002e3d0 at 1002e3d0
 * undefined FUN_1002e3d0(void)
 * Address ranges: 1002e3d0-1002edaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002e3d0(int param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 extraout_x1;
  int iVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar18;
  uint uVar19;
  int iVar20;
  int *local_90 [2];
  int local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_6c;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x1c4) == *(int *)(param_1 + 0x1d4)) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x1e8);
  FUN_100377d0(*piVar1);
  FUN_1001cf30(*piVar1,0xffffffff);
  iVar17 = *(int *)(param_1 + 0x208);
  uVar18 = *(undefined8 *)(*(int *)(*(int *)(*piVar1 + 0x3308) + 0x1304) + 0x938);
  *(undefined4 *)(iVar17 + 0x10) =
       *(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x3308) + 0x1300) + 0xc);
  *(undefined8 *)(iVar17 + 0x18) = uVar18;
  iVar17 = *(int *)(param_1 + 0x20c);
  uVar18 = *(undefined8 *)(*(int *)(*(int *)(*piVar1 + 0x3308) + 0x1304) + 0x938);
  *(undefined4 *)(iVar17 + 0x10) =
       *(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x3308) + 0x1300) + 0xc);
  *(undefined8 *)(iVar17 + 0x18) = uVar18;
  FUN_1002e398(param_1);
  uVar8 = FUN_1000f8a0(*piVar1);
  local_84 = *(int **)(param_1 + 0x1c0);
  local_80 = *(int **)(param_1 + 0x1c4);
  local_7c = *(int **)(param_1 + 0x1d4);
  FUN_10010630(*piVar1,*(int *)(param_1 + 0x208),0x50,*(int *)(param_1 + 0x20c),0x2a);
  iVar20 = *piVar1;
  piVar4 = (int *)(iVar20 + 0x3308);
  uVar18 = *(undefined8 *)(*(int *)(*piVar4 + 0x1304) + 0x938);
  local_78 = *(int *)(iVar20 + 0x3330);
  local_74 = *(int *)(iVar20 + 0x3334);
  FUN_100645a0(*(int *)(*piVar4 + 0x1304),2,&local_78);
  FUN_1005d238(*(undefined4 *)(*(int *)(iVar20 + 0x3300) + 0x172c0),*(int *)(iVar20 + 0x3330),
               *(undefined4 *)(*piVar4 + 0x1300),*(undefined4 *)(*piVar4 + 0x1304),uVar18);
  FUN_1005d238(*(undefined4 *)(*(int *)(iVar20 + 0x3300) + 0x172c0),*(int *)(iVar20 + 0x3334),
               *(undefined4 *)(*piVar4 + 0x1300),*(undefined4 *)(*piVar4 + 0x1304),uVar18);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  puVar10 = (undefined8 *)(*extraout_w11)(uVar9,local_90);
  FUN_10064bb0(*(undefined4 *)(*piVar4 + 0x1304),7,*puVar10);
  uVar9 = *(undefined4 *)(*piVar4 + 0x1304);
  uVar11 = (*pcVar7)();
  uVar18 = (*extraout_w11_00)(uVar11);
  FUN_10064c50(uVar9,6,uVar18);
  FUN_10063e28(*(undefined4 *)(*piVar4 + 0x1304),*(undefined4 *)(iVar20 + 0x3328),0,1,0x80);
  iVar17 = 0;
  if (0 < *(int *)(*(int *)(iVar20 + 4) + 0x33)) {
    local_68 = iVar20 + 0x32d6;
    local_88 = iVar20 + 0xd33c;
    local_90[0] = piVar1;
    do {
      if (*(char *)(local_68 + iVar17) != '\0') {
        iVar13 = *(int *)(iVar17 * 4 + iVar20 + 0xd33c);
        iVar12 = *(int *)(*(int *)(iVar13 + 0x3018) + 0x3308);
        if (*(char *)(iVar13 + 0x3014) != '\0') {
          uVar16 = FUN_10067568(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),
                                iVar12 + 0x1430,*(int *)(iVar13 + 0x301c) << 2,
                                *(int *)(iVar13 + 0x301c) * 5,iVar13 + 0x14);
          if ((uVar16 & 1) != 0) {
            if (*(int *)(iVar12 + 4) == 0x10de) {
              FUN_10063e28(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),0,1,0);
            }
            *(undefined1 *)(iVar13 + 0x3014) = 0;
          }
        }
        if (*(char *)(iVar13 + 0x3015) != '\0') {
          uVar16 = FUN_10067568(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),
                                iVar12 + 0x1430,*(int *)(iVar13 + 0x301c) << 1,
                                *(int *)(iVar13 + 0x301c) * 3,iVar13 + 0x1014);
          if ((uVar16 & 1) != 0) {
            if (*(int *)(iVar12 + 4) == 0x10de) {
              FUN_10063e28(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),0,1,0);
            }
            *(undefined1 *)(iVar13 + 0x3015) = 0;
          }
        }
        if (*(char *)(iVar13 + 0x3016) != '\0') {
          uVar16 = FUN_10067568(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),
                                iVar12 + 0x1430,*(int *)(iVar13 + 0x301c) * 3,
                                *(int *)(iVar13 + 0x301c) << 2,iVar13 + 0x2014);
          if ((uVar16 & 1) != 0) {
            if (*(int *)(iVar12 + 4) == 0x10de) {
              FUN_10063e28(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),0,1,0);
            }
            *(undefined1 *)(iVar13 + 0x3016) = 0;
          }
        }
        *(undefined1 *)(iVar17 + iVar20 + 0x32d6) = 0;
      }
      FUN_100370f8(*(undefined4 *)(local_88 + iVar17 * 4));
      iVar17 = iVar17 + 1;
      piVar1 = local_90[0];
    } while (iVar17 < *(int *)(*(int *)(iVar20 + 4) + 0x33));
  }
  iVar17 = *piVar1;
  if (((*(char *)(iVar17 + 0x32d0) == '\0') && (*(char *)(param_1 + 0x1cc) == '\0')) &&
     (iVar20 = *(int *)(param_1 + 0x210), iVar20 != 0)) goto LAB_1002ec20;
  iVar20 = 0;
  if (*(char *)(param_1 + 0x218) != '\0') {
    uVar9 = *(undefined4 *)(iVar17 + 0x33b0);
    local_88 = iVar17 + 0x2c70;
    FUN_10039658(iVar17,&local_60,local_88,uVar9);
    uVar15 = FUN_1002ff78(param_1 + 0x228,&local_60);
    if (uVar15 < *(uint *)(param_1 + 0x23c)) {
      uVar19 = 0;
      piVar4 = *(int **)(*(int *)(param_1 + 0x238) + uVar15 * 4);
      uVar5 = piVar4[1];
      if (uVar5 != 0) {
        iVar17 = *piVar4;
        do {
          iVar13 = *(int *)(iVar17 + uVar19 * 4);
          iVar12 = FUN_1007e450(iVar13 + 4,&local_60,0x20);
          if (iVar12 == 0) {
            iVar20 = *(int *)(iVar13 + 0x24);
            goto LAB_1002ebd8;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar5);
      }
      if (uVar19 != uVar5) goto LAB_1002ebd8;
    }
    else {
      local_90[0] = (int *)FUN_1007dc70(0xc);
      if (local_90[0] == (int *)0x0) goto LAB_1002ebd8;
      piVar4 = (int *)(param_1 + 0x238);
      local_90[0][0] = 0;
      local_90[0][1] = 0;
      puVar2 = (uint *)(param_1 + 0x240);
      local_90[0][2] = 0;
      puVar3 = (uint *)(param_1 + 0x23c);
      uVar19 = *puVar2;
      if (*puVar3 == uVar19) {
        uVar5 = uVar19 << 1;
        if (uVar19 == 0) {
          uVar5 = 0x10;
        }
        iVar17 = uVar5 * 4;
        if (uVar5 >> 0x1e != 0) {
          iVar17 = -1;
        }
        iVar17 = FUN_1007dd60(iVar17);
        if (iVar17 != 0) {
          FUN_1007e4a0(iVar17,*piVar4,((ulonglong)*puVar2 & 0x3fffffff) << 2);
          FUN_1007dd80(*piVar4);
          *piVar4 = iVar17;
          *puVar2 = uVar5;
          goto LAB_1002e9d4;
        }
        bVar6 = false;
      }
      else {
LAB_1002e9d4:
        *(int **)(*piVar4 + *puVar3 * 4) = local_90[0];
        *puVar3 = *puVar3 + 1;
        bVar6 = true;
      }
      iVar20 = 0;
      if (!bVar6) goto LAB_1002ebd8;
    }
    puVar14 = *(undefined4 **)(param_1 + 0x220);
    uVar11 = *(undefined4 *)(param_1 + 0x21c);
    local_70 = 0x100;
    local_6c = 1;
    local_78 = FUN_1007dd60(0x100);
    iVar13 = 0;
    local_74 = local_78;
    uVar16 = FUN_10044358(local_88,extraout_x1,uVar9,uVar11,*puVar14,&local_78);
    iVar17 = local_78;
    if ((uVar16 & 1) != 0) {
      iVar13 = FUN_10071928(uVar16,local_74 - local_78,local_78);
    }
    FUN_1007dd80(iVar17);
    iVar20 = 0;
    if (iVar13 != 0) {
      puVar14 = (undefined4 *)FUN_1007dc70(0x28);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        *(undefined8 *)(puVar14 + 3) = uStack_58;
        *(undefined8 *)(puVar14 + 1) = local_60;
        *(undefined8 *)(puVar14 + 7) = uStack_48;
        *(undefined8 *)(puVar14 + 5) = uStack_50;
        *puVar14 = &PTR_FUN_10098d00;
        puVar14[9] = 0;
      }
      piVar4 = *(int **)(*(int *)(param_1 + 0x238) + uVar15 * 4);
      puVar2 = (uint *)(piVar4 + 1);
      puVar3 = (uint *)(piVar4 + 2);
      uVar15 = *puVar3;
      if (*puVar2 == uVar15) {
        local_90[0] = (int *)(uVar15 << 1);
        if (uVar15 == 0) {
          local_90[0] = (int *)0x10;
        }
        iVar17 = (int)local_90[0] * 4;
        if ((uint)local_90[0] >> 0x1e != 0) {
          iVar17 = -1;
        }
        iVar17 = FUN_1007dd60(iVar17);
        if (iVar17 == 0) goto LAB_1002ebd8;
        FUN_1007e4a0(iVar17,*piVar4,((ulonglong)*puVar3 & 0x3fffffff) << 2);
        FUN_1007dd80(*piVar4);
        *piVar4 = iVar17;
        *puVar3 = (uint)local_90[0];
      }
      *(undefined4 **)(*piVar4 + *puVar2 * 4) = puVar14;
      *puVar2 = *puVar2 + 1;
      puVar14[9] = iVar13;
      iVar20 = iVar13;
    }
  }
LAB_1002ebd8:
  iVar17 = *piVar1;
  *(int *)(param_1 + 0x210) = iVar20;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  if (iVar20 == 0) {
    iVar20 = *(int *)(param_1 + *(int *)(&DAT_10099c20 + *(int *)(iVar17 + 0x33b0) * 4) * 4 + 0x1ec)
    ;
  }
LAB_1002ec20:
  iVar13 = param_1 + *(int *)(param_1 + 0xf0) * 4;
  FUN_1000f960(iVar17,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(iVar13 + 0x200),
               *(undefined4 *)(iVar13 + 0x1f8),iVar20);
  iVar20 = (int)local_80 - (int)local_84;
  iVar17 = 0;
  iVar13 = (int)local_7c - (int)local_80;
  local_90[0] = piVar1;
  local_84 = piVar1;
  local_80 = piVar1;
  local_7c = piVar1;
  do {
    uVar15 = FUN_10017408(*local_7c,iVar17);
    FUN_100100f0(*local_80,uVar8);
    FUN_1000f9d0(*local_84);
    FUN_1000fda8(*local_90[0],uVar8,1);
    FUN_100104c0(*piVar1,uVar8);
    FUN_100106c8(*piVar1,uVar8);
    FUN_10065d40(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),iVar13 >> 2,1,iVar20 >> 2,0,0)
    ;
    iVar17 = iVar17 + 1;
  } while ((uVar15 & 1) != 0);
  FUN_10063d90(*(int *)(*(int *)(*piVar1 + 0x3308) + 0x1304) + 4,0);
  FUN_10018d40(param_1);
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  FUN_1002e2d8(param_1,param_2,param_3);
  return 1;
}

