/*
 * FUN_10035760 at 10035760
 * undefined FUN_10035760(void)
 * Address ranges: 10035760-10035d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10035a58) */
/* WARNING: Removing unreachable block (ram,0x10035abc) */
/* WARNING: Removing unreachable block (ram,0x10035a68) */
/* WARNING: Removing unreachable block (ram,0x10035ac0) */
/* WARNING: Removing unreachable block (ram,0x10035af4) */
/* WARNING: Removing unreachable block (ram,0x10035b00) */
/* WARNING: Removing unreachable block (ram,0x10035b18) */
/* WARNING: Removing unreachable block (ram,0x10035b28) */
/* WARNING: Removing unreachable block (ram,0x10035b58) */

undefined8 FUN_10035760(int param_1,undefined1 param_2,undefined1 param_3)

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
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_90 [80];
  
  if (*(int *)(param_1 + 0x1c4) == *(int *)(param_1 + 0x1d4)) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x1e8);
  FUN_10014e08(*piVar1);
  iVar5 = *(int *)(param_1 + 0x1c0);
  iVar6 = *(int *)(param_1 + 0x1c4);
  iVar7 = *(int *)(param_1 + 0x1d4);
  FUN_10036aa8(*piVar1);
  FUN_1001d538(*piVar1,0xffffffff);
  FUN_100356a8(param_1);
  FUN_100141e8(*piVar1);
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar15 = *piVar1;
  if (((*(char *)(iVar15 + 0x3650) == '\0') && (*(char *)(param_1 + 0x1cc) == '\0')) &&
     (iVar18 = *(int *)(param_1 + 0x210), iVar18 != 0)) goto LAB_10035bdc;
  iVar18 = 0;
  if (*(char *)(param_1 + 0x218) != '\0') {
    uVar17 = *(undefined4 *)(iVar15 + 0x3cc);
    FUN_1003dc70(param_1 + 0x214,local_90,iVar15 + 0x2dc0,uVar17);
    uVar16 = FUN_10032d28(param_1 + 0x228,local_90);
    if (uVar16 < *(uint *)(param_1 + 0x23c)) {
      uVar19 = 0;
      piVar2 = *(int **)(*(int *)(param_1 + 0x238) + uVar16 * 4);
      uVar16 = piVar2[1];
      if (uVar16 != 0) {
        iVar18 = *piVar2;
        do {
          iVar14 = *(int *)(iVar18 + uVar19 * 4);
          iVar13 = FUN_10083af0(iVar14 + 8,local_90,0x50);
          if (iVar13 == 0) {
            iVar18 = *(int *)(iVar14 + 0x58);
            goto LAB_10035b98;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar16);
      }
      iVar18 = 0;
      if (uVar19 != uVar16) goto LAB_10035b98;
    }
    else {
      puVar12 = (undefined8 *)FUN_10083310(0xc);
      if (puVar12 == (undefined8 *)0x0) goto LAB_10035b98;
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
        iVar18 = FUN_10083400(iVar18);
        if (iVar18 != 0) {
          FUN_10083b40(iVar18,*piVar2,((ulonglong)*puVar4 & 0x3fffffff) << 2);
          FUN_10083420(*piVar2);
          *piVar2 = iVar18;
          *puVar4 = uVar19;
          goto LAB_1003591c;
        }
        bVar10 = false;
      }
      else {
LAB_1003591c:
        *(undefined8 **)(*piVar2 + *puVar3 * 4) = puVar12;
        *puVar3 = *puVar3 + 1;
        bVar10 = true;
      }
      iVar18 = 0;
      if (!bVar10) goto LAB_10035b98;
    }
    iVar18 = 0;
    puVar8 = *(undefined4 **)(param_1 + 0x220);
    uVar9 = *(undefined4 *)(param_1 + 0x21c);
    local_a0 = 0x100;
    local_9c = 1;
    local_a8 = FUN_10083400(0x100);
    local_a4 = local_a8;
    auVar20 = FUN_10049a28(iVar15 + 0x2dc0,extraout_x1,uVar17,uVar9,puVar8[4],&local_a8);
    iVar15 = local_a8;
    if ((auVar20._0_8_ & 1) != 0) {
      uVar17 = (*pcVar11)(*puVar8,auVar20._8_8_,local_a4 - local_a8);
      iVar14 = (*extraout_w11)(uVar17,iVar15);
      if (-1 < iVar14) {
        FUN_10083420(iVar15);
        goto LAB_10035b98;
      }
    }
    FUN_10083420(iVar15);
  }
LAB_10035b98:
  iVar15 = *piVar1;
  *(int *)(param_1 + 0x210) = iVar18;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  if (iVar18 == 0) {
    iVar18 = *(int *)(param_1 + *(int *)(&DAT_100a0280 + *(int *)(iVar15 + 0x3cc) * 4) * 4 + 0x1ec);
  }
LAB_10035bdc:
  iVar14 = param_1 + *(int *)(param_1 + 0xf0) * 4;
  FUN_10014130(iVar15,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(iVar14 + 0x200),
               *(undefined4 *)(iVar14 + 0x1f8),iVar18);
  iVar15 = 0;
  do {
    uVar16 = FUN_100178b8(*piVar1,iVar15);
    FUN_10013df8(*piVar1);
    FUN_10013848(*piVar1);
    uVar17 = (*pcVar11)();
    (*extraout_w11_00)(uVar17,iVar7 - iVar6 >> 2,iVar6 - iVar5 >> 2,0);
    iVar15 = iVar15 + 1;
  } while ((uVar16 & 1) != 0);
  FUN_10019468(param_1);
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  FUN_10035540(param_1,param_2,param_3);
  (*(code *)PTR_FUN_100a8090)(*(int *)(*piVar1 + 0x3680) + 0x4a0);
  return 1;
}

