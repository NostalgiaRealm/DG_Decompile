/*
 * FUN_10046a98 at 10046a98
 * undefined FUN_10046a98(void)
 * Address ranges: 10046a98-1004701f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10046d74) */
/* WARNING: Removing unreachable block (ram,0x10046dbc) */
/* WARNING: Removing unreachable block (ram,0x10046d84) */
/* WARNING: Removing unreachable block (ram,0x10046dc0) */
/* WARNING: Removing unreachable block (ram,0x10046df4) */
/* WARNING: Removing unreachable block (ram,0x10046e00) */
/* WARNING: Removing unreachable block (ram,0x10046e18) */
/* WARNING: Removing unreachable block (ram,0x10046e28) */
/* WARNING: Removing unreachable block (ram,0x10046e58) */

undefined8 FUN_10046a98(int param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  bool bVar10;
  code *pcVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 extraout_x1;
  int iVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar19;
  undefined1 auVar20 [16];
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_60 [32];
  
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x28)) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x3c);
  FUN_100254d8(*piVar1);
  iVar5 = *(int *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 0x28);
  FUN_100469e0(param_1);
  FUN_100239d8(*piVar1);
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar15 = *piVar1;
  if (((*(char *)(iVar15 + 0x3150) == '\0') && (*(char *)(param_1 + 0x20) == '\0')) &&
     (iVar18 = *(int *)(param_1 + 0x5c), iVar18 != 0)) goto LAB_10046edc;
  iVar18 = 0;
  if (*(char *)(param_1 + 100) != '\0') {
    uVar17 = *(undefined4 *)(iVar15 + 0x218);
    FUN_1004a2e0(iVar15,local_60,iVar15 + 0x2bd0,uVar17);
    uVar16 = FUN_100405d8(param_1 + 0x74,local_60);
    if (uVar16 < *(uint *)(param_1 + 0x88)) {
      uVar19 = 0;
      piVar2 = *(int **)(*(int *)(param_1 + 0x84) + uVar16 * 4);
      uVar16 = piVar2[1];
      if (uVar16 != 0) {
        iVar18 = *piVar2;
        do {
          iVar14 = *(int *)(iVar18 + uVar19 * 4);
          iVar13 = FUN_1007a730(iVar14 + 4,local_60,0x20);
          if (iVar13 == 0) {
            iVar18 = *(int *)(iVar14 + 0x24);
            goto LAB_10046e98;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar16);
      }
      iVar18 = 0;
      if (uVar19 != uVar16) goto LAB_10046e98;
    }
    else {
      puVar12 = (undefined8 *)FUN_10079f50(0xc);
      if (puVar12 == (undefined8 *)0x0) goto LAB_10046e98;
      piVar2 = (int *)(param_1 + 0x84);
      *puVar12 = 0;
      puVar3 = (uint *)(param_1 + 0x88);
      *(undefined4 *)(puVar12 + 1) = 0;
      puVar4 = (uint *)(param_1 + 0x8c);
      uVar16 = *puVar4;
      if (*puVar3 == uVar16) {
        uVar19 = uVar16 << 1;
        if (uVar16 == 0) {
          uVar19 = 0x10;
        }
        iVar18 = uVar19 * 4;
        if (uVar19 >> 0x1e != 0) {
          iVar18 = -1;
        }
        iVar18 = FUN_1007a040(iVar18);
        if (iVar18 != 0) {
          FUN_1007a780(iVar18,*piVar2,((ulonglong)*puVar4 & 0x3fffffff) << 2);
          FUN_1007a060(*piVar2);
          *piVar2 = iVar18;
          *puVar4 = uVar19;
          goto LAB_10046c38;
        }
        bVar10 = false;
      }
      else {
LAB_10046c38:
        *(undefined8 **)(*piVar2 + *puVar3 * 4) = puVar12;
        *puVar3 = *puVar3 + 1;
        bVar10 = true;
      }
      iVar18 = 0;
      if (!bVar10) goto LAB_10046e98;
    }
    iVar18 = 0;
    puVar8 = *(undefined4 **)(param_1 + 0x6c);
    uVar9 = *(undefined4 *)(param_1 + 0x68);
    local_70 = 0x100;
    local_6c = 1;
    local_78 = FUN_1007a040(0x100);
    local_74 = local_78;
    auVar20 = FUN_10053e08(iVar15 + 0x2bd0,extraout_x1,uVar17,uVar9,puVar8[4],&local_78);
    iVar15 = local_78;
    if ((auVar20._0_8_ & 1) != 0) {
      uVar17 = (*pcVar11)(*puVar8,auVar20._8_8_,local_74 - local_78);
      iVar14 = (*extraout_w11)(uVar17,iVar15);
      if (-1 < iVar14) {
        FUN_1007a060(iVar15);
        goto LAB_10046e98;
      }
    }
    FUN_1007a060(iVar15);
  }
LAB_10046e98:
  iVar15 = *piVar1;
  *(int *)(param_1 + 0x5c) = iVar18;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (iVar18 == 0) {
    iVar18 = *(int *)(param_1 + *(int *)(&DAT_10096e70 + *(int *)(iVar15 + 0x218) * 4) * 4 + 0x40);
  }
LAB_10046edc:
  FUN_10023908(iVar15,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x4c),iVar18);
  iVar15 = 0;
  do {
    uVar16 = FUN_1002e3b8(*piVar1,iVar15);
    FUN_10023600(*piVar1);
    FUN_10023058(*piVar1);
    uVar17 = (*pcVar11)();
    (*extraout_w11_00)(uVar17,iVar7 - iVar5 >> 2,iVar5 - iVar6 >> 2,0);
    iVar15 = iVar15 + 1;
  } while ((uVar16 & 1) != 0);
  FUN_100482c0(param_1);
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  FUN_10046878(param_1,param_2,param_3);
  (*(code *)PTR_FUN_1009d090)(*(int *)(*piVar1 + 0x3180) + 0x4a0);
  return 1;
}

