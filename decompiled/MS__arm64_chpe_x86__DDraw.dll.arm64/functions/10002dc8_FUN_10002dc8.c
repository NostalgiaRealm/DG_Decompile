/*
 * FUN_10002dc8 at 10002dc8
 * undefined FUN_10002dc8(void)
 * Address ranges: 10002dc8-10003257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10002dc8(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined8 uVar17;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined1 auStack_80 [64];
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar5 = param_1 * 0x228;
  if ((&DAT_100be33a)[iVar5] == '\0') {
    return 0;
  }
  uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar11 = (*extraout_w11)(uVar10);
  if (param_2 == 0 || param_2 == iVar11) {
    bVar8 = true;
    if (param_2 != 0) goto LAB_10002e5c;
  }
  else {
    bVar8 = false;
LAB_10002e5c:
    if (!bVar8) {
      iVar12 = (*(code *)PTR_FUN_100ba1e8)(param_2,auStack_80,0x40);
      if (iVar12 == 0) {
        return 0;
      }
      FUN_10091640(auStack_80);
      iVar12 = FUN_10091880(auStack_80,&DAT_100b3328);
      bVar8 = iVar12 == 0;
      if ((iVar12 != 0) && (iVar12 = (*(code *)PTR_FUN_100ba214)(param_2), iVar11 == iVar12)) {
        iVar11 = FUN_10091880(auStack_80,s_mciwndclass_100b3338);
        bVar8 = iVar11 == 0;
      }
      if (!bVar8) {
        return 0;
      }
    }
  }
  uVar10 = (*pcVar7)();
  cVar9 = (*extraout_w11_00)(uVar10);
  if (cVar9 != '\0') {
    return 0;
  }
  iVar11 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar11 == 0) {
    FUN_10001c10(0);
  }
  iVar11 = param_1 * 0x228;
  piVar1 = (int *)(&DAT_100be32c + iVar11);
  if (*piVar1 != 0) goto LAB_100031fc;
  iVar12 = *(int *)(&DAT_100be328 + iVar5);
  if (iVar12 == 0) {
LAB_10002f90:
    puVar13 = (undefined4 *)FUN_100913c0(0x88);
    if (puVar13 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)(&DAT_100be2ec + iVar5);
      uVar4 = *(undefined4 *)(&DAT_100be2e8 + iVar5);
      uVar10 = *(undefined4 *)(&DAT_100be2cc + param_1 * 0x45);
      uVar2 = *(undefined4 *)((int)&DAT_100be2cc + iVar5 + 4);
      uVar6 = (&DAT_100be2cc)[param_1 * 0x45];
      puVar13[1] = (&DAT_100be150)[param_1 * 0x8a];
      *(undefined8 *)(puVar13 + 2) = 0;
      *(undefined8 *)(puVar13 + 4) = 0;
      puVar13[6] = 0xffffffff;
      *(undefined8 *)(puVar13 + 0x10) = 0;
      *(undefined8 *)(puVar13 + 0xe) = 0;
      *(undefined8 *)(puVar13 + 0x14) = 0;
      *(undefined8 *)(puVar13 + 0x12) = 0;
      *(undefined8 *)(puVar13 + 0x18) = 0;
      *(undefined8 *)(puVar13 + 0x16) = 0;
      *(undefined8 *)(puVar13 + 9) = 0;
      *puVar13 = &PTR_FUN_100b1a5c;
      puVar13[0x1a] = param_3;
      uVar14 = (*pcVar7)();
      uVar14 = (*extraout_w11_01)(uVar14);
      uStack_98 = 0;
      puVar13[0x1b] = uVar14;
      puVar13[0x1c] = uVar4;
      local_88 = (uint)local_88._3_1_ << 0x18;
      puVar13[0x1d] = uVar3;
      uVar17 = *(undefined8 *)(&DAT_100be300 + param_1 * 0x228);
      *(undefined8 *)(puVar13 + 0x20) = *(undefined8 *)(param_1 * 0x228 + 0x100be308);
      *(undefined8 *)(puVar13 + 0x1e) = uVar17;
      *(undefined8 *)(puVar13 + 9) = 0;
      *(undefined8 *)(puVar13 + 7) = uVar6;
      puVar16 = puVar13 + 8;
      *(undefined8 *)(puVar13 + 0xb) = 1;
      puVar13[0xd] = local_88;
      *(undefined4 **)(&DAT_100be328 + iVar5) = puVar13;
      local_a0 = uVar10;
      uStack_9c = uVar2;
      uVar10 = (*pcVar7)();
      iVar12 = (*extraout_w11_02)(uVar10,*extraout_w8,*puVar16,5,1,0,0);
      puVar13[2] = iVar12;
      if (iVar12 != 0) {
        uVar10 = (*pcVar7)();
        (*extraout_w11_03)(uVar10,&local_b0,5);
        puVar13[0xe] = 0x20;
        puVar13[0xf] = local_b0;
        puVar13[0x10] = uStack_ac;
        puVar13[0x11] = local_a8;
        goto LAB_1000318c;
      }
      iVar12 = *(int *)(&DAT_100be328 + iVar5);
      if (iVar12 != 0) {
        FUN_10004360(iVar12);
        FUN_10091460(iVar12,0x88);
      }
    }
    *(undefined4 *)(&DAT_100be328 + iVar5) = 0;
  }
  else if (((int)*(undefined8 *)(iVar12 + 0x1c) != *(int *)(&DAT_100be2cc + param_1 * 0x45)) ||
          ((int)((ulonglong)*(undefined8 *)(iVar12 + 0x1c) >> 0x20) !=
           *(int *)((int)&DAT_100be2cc + iVar5 + 4))) {
    FUN_10004360(iVar12);
    FUN_10091460(iVar12,0x88);
    goto LAB_10002f90;
  }
LAB_1000318c:
  iVar5 = *(int *)(&DAT_100be328 + iVar5);
  if (iVar5 != 0) {
    iVar12 = 0;
    uVar15 = FUN_10007df0(iVar5 + 4,0,0,0,0);
    if (((uVar15 & 1) != 0) && (iVar12 = (*(code *)PTR_FUN_100ba008)(0), iVar12 != 0)) {
      uVar10 = (*(code *)PTR_FUN_100ba058)(iVar12,*(undefined4 *)(iVar5 + 0x48));
      *(undefined4 *)(iVar5 + 0x50) = uVar10;
    }
    *piVar1 = iVar12;
    *(undefined4 *)(&DAT_100be330 + iVar11) = 0;
  }
LAB_100031fc:
  if (*piVar1 != 0) {
    *(int *)(&DAT_100be330 + iVar11) = *(int *)(&DAT_100be330 + iVar11) + 1;
  }
  *param_4 = 1;
  iVar5 = *piVar1;
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return iVar5;
}

