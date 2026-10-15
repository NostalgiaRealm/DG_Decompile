/*
 * FUN_10031150 at 10031150
 * undefined FUN_10031150(void)
 * Address ranges: 10031150-10031b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10031150(int param_1,undefined1 param_2,undefined1 param_3)

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
  int *local_c0 [2];
  int local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x1c4) == *(int *)(param_1 + 0x1d4)) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x1e8);
  FUN_10036aa8(*piVar1);
  FUN_1001d538(*piVar1,0xffffffff);
  iVar17 = *(int *)(param_1 + 0x208);
  uVar18 = *(undefined8 *)(*(int *)(*(int *)(*piVar1 + 0x3688) + 0x1304) + 0x938);
  *(undefined4 *)(iVar17 + 0x10) =
       *(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x3688) + 0x1300) + 0xc);
  *(undefined8 *)(iVar17 + 0x18) = uVar18;
  iVar17 = *(int *)(param_1 + 0x20c);
  uVar18 = *(undefined8 *)(*(int *)(*(int *)(*piVar1 + 0x3688) + 0x1304) + 0x938);
  *(undefined4 *)(iVar17 + 0x10) =
       *(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x3688) + 0x1300) + 0xc);
  *(undefined8 *)(iVar17 + 0x18) = uVar18;
  FUN_10031118(param_1);
  uVar8 = FUN_10011830(*piVar1);
  local_b4 = *(int **)(param_1 + 0x1c0);
  local_b0 = *(int **)(param_1 + 0x1c4);
  local_ac = *(int **)(param_1 + 0x1d4);
  FUN_100125b8(*piVar1,*(int *)(param_1 + 0x208),0x50,*(int *)(param_1 + 0x20c),0x2a);
  iVar20 = *piVar1;
  piVar4 = (int *)(iVar20 + 0x3688);
  uVar18 = *(undefined8 *)(*(int *)(*piVar4 + 0x1304) + 0x938);
  local_a8 = *(int *)(iVar20 + 14000);
  local_a4 = *(int *)(iVar20 + 0x36b4);
  FUN_10069c40(*(int *)(*piVar4 + 0x1304),2,&local_a8);
  FUN_100628e8(*(undefined4 *)(*(int *)(iVar20 + 0x3680) + 0x172c0),*(int *)(iVar20 + 14000),
               *(undefined4 *)(*piVar4 + 0x1300),*(undefined4 *)(*piVar4 + 0x1304),uVar18);
  FUN_100628e8(*(undefined4 *)(*(int *)(iVar20 + 0x3680) + 0x172c0),*(int *)(iVar20 + 0x36b4),
               *(undefined4 *)(*piVar4 + 0x1300),*(undefined4 *)(*piVar4 + 0x1304),uVar18);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  puVar10 = (undefined8 *)(*extraout_w11)(uVar9,local_c0);
  FUN_1006a250(*(undefined4 *)(*piVar4 + 0x1304),7,*puVar10);
  uVar9 = *(undefined4 *)(*piVar4 + 0x1304);
  uVar11 = (*pcVar7)();
  uVar18 = (*extraout_w11_00)(uVar11);
  FUN_1006a2f0(uVar9,6,uVar18);
  FUN_100694c8(*(undefined4 *)(*piVar4 + 0x1304),*(undefined4 *)(iVar20 + 0x36a8),0,1,0x80);
  iVar17 = 0;
  if (0 < *(int *)(*(int *)(iVar20 + 4) + 0x33)) {
    local_98 = iVar20 + 0x3656;
    local_b8 = iVar20 + 0xd6d4;
    local_c0[0] = piVar1;
    do {
      if (*(char *)(local_98 + iVar17) != '\0') {
        iVar13 = *(int *)(iVar17 * 4 + iVar20 + 0xd6d4);
        iVar12 = *(int *)(*(int *)(iVar13 + 0x3018) + 0x3688);
        if (*(char *)(iVar13 + 0x3014) != '\0') {
          uVar16 = FUN_1006cc08(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),
                                iVar12 + 0x1430,*(int *)(iVar13 + 0x301c) << 2,
                                *(int *)(iVar13 + 0x301c) * 5,iVar13 + 0x14);
          if ((uVar16 & 1) != 0) {
            if (*(int *)(iVar12 + 4) == 0x10de) {
              FUN_100694c8(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),0,1,0);
            }
            *(undefined1 *)(iVar13 + 0x3014) = 0;
          }
        }
        if (*(char *)(iVar13 + 0x3015) != '\0') {
          uVar16 = FUN_1006cc08(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),
                                iVar12 + 0x1430,*(int *)(iVar13 + 0x301c) << 1,
                                *(int *)(iVar13 + 0x301c) * 3,iVar13 + 0x1014);
          if ((uVar16 & 1) != 0) {
            if (*(int *)(iVar12 + 4) == 0x10de) {
              FUN_100694c8(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),0,1,0);
            }
            *(undefined1 *)(iVar13 + 0x3015) = 0;
          }
        }
        if (*(char *)(iVar13 + 0x3016) != '\0') {
          uVar16 = FUN_1006cc08(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),
                                iVar12 + 0x1430,*(int *)(iVar13 + 0x301c) * 3,
                                *(int *)(iVar13 + 0x301c) << 2,iVar13 + 0x2014);
          if ((uVar16 & 1) != 0) {
            if (*(int *)(iVar12 + 4) == 0x10de) {
              FUN_100694c8(*(undefined4 *)(iVar12 + 0x1304),*(undefined4 *)(iVar13 + 0x3020),0,1,0);
            }
            *(undefined1 *)(iVar13 + 0x3016) = 0;
          }
        }
        *(undefined1 *)(iVar17 + iVar20 + 0x3656) = 0;
      }
      FUN_10036308(*(undefined4 *)(local_b8 + iVar17 * 4));
      iVar17 = iVar17 + 1;
      piVar1 = local_c0[0];
    } while (iVar17 < *(int *)(*(int *)(iVar20 + 4) + 0x33));
  }
  iVar17 = *piVar1;
  if (((*(char *)(iVar17 + 0x3650) == '\0') && (*(char *)(param_1 + 0x1cc) == '\0')) &&
     (iVar20 = *(int *)(param_1 + 0x210), iVar20 != 0)) goto LAB_100319c4;
  iVar20 = 0;
  if (*(char *)(param_1 + 0x218) != '\0') {
    uVar9 = *(undefined4 *)(iVar17 + 0x3730);
    local_b8 = iVar17 + 0x2dc0;
    FUN_1003dc70(param_1 + 0x214,&local_90,local_b8,uVar9);
    uVar15 = FUN_10032d28(param_1 + 0x228,&local_90);
    if (uVar15 < *(uint *)(param_1 + 0x23c)) {
      uVar19 = 0;
      piVar4 = *(int **)(*(int *)(param_1 + 0x238) + uVar15 * 4);
      uVar5 = piVar4[1];
      if (uVar5 != 0) {
        iVar17 = *piVar4;
        do {
          iVar13 = *(int *)(iVar17 + uVar19 * 4);
          iVar12 = FUN_10083af0(iVar13 + 8,&local_90,0x50);
          if (iVar12 == 0) {
            iVar20 = *(int *)(iVar13 + 0x58);
            goto LAB_1003197c;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar5);
      }
      if (uVar19 != uVar5) goto LAB_1003197c;
    }
    else {
      local_c0[0] = (int *)FUN_10083310(0xc);
      if (local_c0[0] == (int *)0x0) goto LAB_1003197c;
      piVar4 = (int *)(param_1 + 0x238);
      local_c0[0][0] = 0;
      local_c0[0][1] = 0;
      puVar2 = (uint *)(param_1 + 0x240);
      local_c0[0][2] = 0;
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
        iVar17 = FUN_10083400(iVar17);
        if (iVar17 != 0) {
          FUN_10083b40(iVar17,*piVar4,((ulonglong)*puVar2 & 0x3fffffff) << 2);
          FUN_10083420(*piVar4);
          *piVar4 = iVar17;
          *puVar2 = uVar5;
          goto LAB_1003175c;
        }
        bVar6 = false;
      }
      else {
LAB_1003175c:
        *(int **)(*piVar4 + *puVar3 * 4) = local_c0[0];
        *puVar3 = *puVar3 + 1;
        bVar6 = true;
      }
      iVar20 = 0;
      if (!bVar6) goto LAB_1003197c;
    }
    puVar14 = *(undefined4 **)(param_1 + 0x220);
    uVar11 = *(undefined4 *)(param_1 + 0x21c);
    local_a0 = 0x100;
    local_9c = 1;
    local_a8 = FUN_10083400(0x100);
    iVar13 = 0;
    local_a4 = local_a8;
    uVar16 = FUN_10049a28(local_b8,extraout_x1,uVar9,uVar11,*puVar14,&local_a8);
    iVar17 = local_a8;
    if ((uVar16 & 1) != 0) {
      iVar13 = FUN_10076fc8(uVar16,local_a4 - local_a8,local_a8);
    }
    FUN_10083420(iVar17);
    iVar20 = 0;
    if (iVar13 != 0) {
      puVar14 = (undefined4 *)FUN_10083310(0x60);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        *puVar14 = &PTR_FUN_1009f0dc;
        *(undefined8 *)(puVar14 + 4) = uStack_88;
        *(undefined8 *)(puVar14 + 2) = local_90;
        *(undefined8 *)(puVar14 + 8) = uStack_78;
        *(undefined8 *)(puVar14 + 6) = uStack_80;
        *(undefined8 *)(puVar14 + 0xc) = uStack_68;
        *(undefined8 *)(puVar14 + 10) = local_70;
        *(undefined8 *)(puVar14 + 0x10) = uStack_58;
        *(undefined8 *)(puVar14 + 0xe) = uStack_60;
        *puVar14 = &PTR_FUN_1009f0e0;
        puVar14[0x16] = 0;
        *(undefined8 *)(puVar14 + 0x14) = uStack_48;
        *(undefined8 *)(puVar14 + 0x12) = local_50;
      }
      piVar4 = *(int **)(*(int *)(param_1 + 0x238) + uVar15 * 4);
      puVar2 = (uint *)(piVar4 + 1);
      puVar3 = (uint *)(piVar4 + 2);
      uVar15 = *puVar3;
      if (*puVar2 == uVar15) {
        local_c0[0] = (int *)(uVar15 << 1);
        if (uVar15 == 0) {
          local_c0[0] = (int *)0x10;
        }
        iVar17 = (int)local_c0[0] * 4;
        if ((uint)local_c0[0] >> 0x1e != 0) {
          iVar17 = -1;
        }
        iVar17 = FUN_10083400(iVar17);
        if (iVar17 == 0) goto LAB_1003197c;
        FUN_10083b40(iVar17,*piVar4,((ulonglong)*puVar3 & 0x3fffffff) << 2);
        FUN_10083420(*piVar4);
        *piVar4 = iVar17;
        *puVar3 = (uint)local_c0[0];
      }
      *(undefined4 **)(*piVar4 + *puVar2 * 4) = puVar14;
      *puVar2 = *puVar2 + 1;
      puVar14[0x16] = iVar13;
      iVar20 = iVar13;
    }
  }
LAB_1003197c:
  iVar17 = *piVar1;
  *(int *)(param_1 + 0x210) = iVar20;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  if (iVar20 == 0) {
    iVar20 = *(int *)(param_1 + *(int *)(&DAT_100a0280 + *(int *)(iVar17 + 0x3730) * 4) * 4 + 0x1ec)
    ;
  }
LAB_100319c4:
  iVar13 = param_1 + *(int *)(param_1 + 0xf0) * 4;
  FUN_100118f0(iVar17,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(iVar13 + 0x200),
               *(undefined4 *)(iVar13 + 0x1f8),iVar20);
  iVar20 = (int)local_b0 - (int)local_b4;
  iVar17 = 0;
  iVar13 = (int)local_ac - (int)local_b0;
  local_c0[0] = piVar1;
  local_b4 = piVar1;
  local_b0 = piVar1;
  local_ac = piVar1;
  do {
    uVar15 = FUN_100178b8(*local_ac,iVar17);
    FUN_10012078(*local_b0,uVar8);
    FUN_10011960(*local_b4);
    FUN_10011d30(*local_c0[0],uVar8,1);
    FUN_10012448(*piVar1,uVar8);
    FUN_10012650(*piVar1,uVar8);
    FUN_1006b3e0(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),iVar13 >> 2,1,iVar20 >> 2,0,0)
    ;
    iVar17 = iVar17 + 1;
  } while ((uVar15 & 1) != 0);
  FUN_10069430(*(int *)(*(int *)(*piVar1 + 0x3688) + 0x1304) + 4,0);
  FUN_10019468(param_1);
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  FUN_10031058(param_1,param_2,param_3);
  return 1;
}

