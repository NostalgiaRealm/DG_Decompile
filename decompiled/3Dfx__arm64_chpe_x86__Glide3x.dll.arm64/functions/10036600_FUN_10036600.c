/*
 * FUN_10036600 at 10036600
 * undefined FUN_10036600(void)
 * Address ranges: 10036600-10036ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x100368f0) */
/* WARNING: Removing unreachable block (ram,0x10036938) */
/* WARNING: Removing unreachable block (ram,0x10036900) */
/* WARNING: Removing unreachable block (ram,0x1003693c) */
/* WARNING: Removing unreachable block (ram,0x10036970) */
/* WARNING: Removing unreachable block (ram,0x1003697c) */
/* WARNING: Removing unreachable block (ram,0x10036994) */
/* WARNING: Removing unreachable block (ram,0x100369a4) */
/* WARNING: Removing unreachable block (ram,0x100369d4) */

undefined8 FUN_10036600(int param_1,undefined1 param_2,undefined1 param_3)

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
  
  if (*(int *)(param_1 + 0x1c4) == *(int *)(param_1 + 0x1d4)) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x1e8);
  FUN_10014978(*piVar1);
  iVar5 = *(int *)(param_1 + 0x1c0);
  iVar6 = *(int *)(param_1 + 0x1c4);
  iVar7 = *(int *)(param_1 + 0x1d4);
  FUN_100377d0(*piVar1);
  FUN_1001cf30(*piVar1,0xffffffff);
  FUN_10036548(param_1);
  FUN_10013150(*piVar1);
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar15 = *piVar1;
  if (((*(char *)(iVar15 + 0x32d0) == '\0') && (*(char *)(param_1 + 0x1cc) == '\0')) &&
     (iVar18 = *(int *)(param_1 + 0x210), iVar18 != 0)) goto LAB_10036a58;
  iVar18 = 0;
  if (*(char *)(param_1 + 0x218) != '\0') {
    uVar17 = *(undefined4 *)(iVar15 + 0x290);
    FUN_10039658(iVar15,local_60,iVar15 + 0x2c70,uVar17);
    uVar16 = FUN_1002ff78(param_1 + 0x228,local_60);
    if (uVar16 < *(uint *)(param_1 + 0x23c)) {
      uVar19 = 0;
      piVar2 = *(int **)(*(int *)(param_1 + 0x238) + uVar16 * 4);
      uVar16 = piVar2[1];
      if (uVar16 != 0) {
        iVar18 = *piVar2;
        do {
          iVar14 = *(int *)(iVar18 + uVar19 * 4);
          iVar13 = FUN_1007e450(iVar14 + 4,local_60,0x20);
          if (iVar13 == 0) {
            iVar18 = *(int *)(iVar14 + 0x24);
            goto LAB_10036a14;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar16);
      }
      iVar18 = 0;
      if (uVar19 != uVar16) goto LAB_10036a14;
    }
    else {
      puVar12 = (undefined8 *)FUN_1007dc70(0xc);
      if (puVar12 == (undefined8 *)0x0) goto LAB_10036a14;
      piVar2 = (int *)(param_1 + 0x238);
      *puVar12 = 0;
      puVar3 = (uint *)(param_1 + 0x23c);
      *(undefined4 *)(puVar12 + 1) = 0;
      puVar4 = (uint *)(param_1 + 0x240);
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
        iVar18 = FUN_1007dd60(iVar18);
        if (iVar18 != 0) {
          FUN_1007e4a0(iVar18,*piVar2,((ulonglong)*puVar4 & 0x3fffffff) << 2);
          FUN_1007dd80(*piVar2);
          *piVar2 = iVar18;
          *puVar4 = uVar19;
          goto LAB_100367b4;
        }
        bVar10 = false;
      }
      else {
LAB_100367b4:
        *(undefined8 **)(*piVar2 + *puVar3 * 4) = puVar12;
        *puVar3 = *puVar3 + 1;
        bVar10 = true;
      }
      iVar18 = 0;
      if (!bVar10) goto LAB_10036a14;
    }
    iVar18 = 0;
    puVar8 = *(undefined4 **)(param_1 + 0x220);
    uVar9 = *(undefined4 *)(param_1 + 0x21c);
    local_70 = 0x100;
    local_6c = 1;
    local_78 = FUN_1007dd60(0x100);
    local_74 = local_78;
    auVar20 = FUN_10044358(iVar15 + 0x2c70,extraout_x1,uVar17,uVar9,puVar8[4],&local_78);
    iVar15 = local_78;
    if ((auVar20._0_8_ & 1) != 0) {
      uVar17 = (*pcVar11)(*puVar8,auVar20._8_8_,local_74 - local_78);
      iVar14 = (*extraout_w11)(uVar17,iVar15);
      if (-1 < iVar14) {
        FUN_1007dd80(iVar15);
        goto LAB_10036a14;
      }
    }
    FUN_1007dd80(iVar15);
  }
LAB_10036a14:
  iVar15 = *piVar1;
  *(int *)(param_1 + 0x210) = iVar18;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  if (iVar18 == 0) {
    iVar18 = *(int *)(param_1 + *(int *)(&DAT_10099c20 + *(int *)(iVar15 + 0x290) * 4) * 4 + 0x1ec);
  }
LAB_10036a58:
  iVar14 = param_1 + *(int *)(param_1 + 0xf0) * 4;
  FUN_10013080(iVar15,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(iVar14 + 0x200),
               *(undefined4 *)(iVar14 + 0x1f8),iVar18);
  iVar15 = 0;
  do {
    uVar16 = FUN_10017408(*piVar1,iVar15);
    FUN_10012d48(*piVar1);
    FUN_10012798(*piVar1);
    uVar17 = (*pcVar11)();
    (*extraout_w11_00)(uVar17,iVar7 - iVar6 >> 2,iVar6 - iVar5 >> 2,0);
    iVar15 = iVar15 + 1;
  } while ((uVar16 & 1) != 0);
  FUN_10018d40(param_1);
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  FUN_100363e0(param_1,param_2,param_3);
  (*(code *)PTR_FUN_100a0090)(*(int *)(*piVar1 + 0x3300) + 0x4a0);
  return 1;
}

