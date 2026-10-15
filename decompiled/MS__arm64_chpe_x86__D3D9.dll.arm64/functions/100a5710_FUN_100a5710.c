/*
 * FUN_100a5710 at 100a5710
 * undefined FUN_100a5710(void)
 * Address ranges: 100a5710-100a5be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a5710(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  int local_58;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x1c);
  if (uVar2 != 0) {
    fVar14 = (float)uVar2;
    fVar18 = (float)param_2[7];
    fVar13 = fVar14 * fVar18;
    if (fVar13 != 0.0) {
      fVar17 = (float)param_2[8];
      fVar14 = fVar14 * fVar17;
      if (fVar14 != 0.0) {
        local_c0 = 0;
        fVar16 = (float)param_2[9];
        local_b0 = 0;
        fVar15 = (float)param_2[10];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        uVar4 = param_2[5];
        uVar5 = param_2[4];
        uVar10 = param_2[1];
        fStack_b4 = (float)uVar4;
        local_b8 = (float)uVar5;
        iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x14);
        iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x1cf00);
        iVar8 = iVar7 + iVar6 * 0x1510;
        local_ac = 0x3f800000;
        FUN_1010ab10(iVar7,iVar6,&local_c0);
        FUN_1010a4c8(iVar7,iVar6,&DAT_101656c0,0);
        FUN_10109c20(iVar7,iVar6,&DAT_10165520,0,0xffffffff,0);
        FUN_1010a7a0(iVar7,iVar6,&DAT_10165698);
        FUN_1010b010(iVar7,iVar6,5,*(undefined4 *)(iVar8 + 0x988),*(undefined4 *)(iVar8 + 0x980),
                     *(undefined4 *)(iVar8 + 0x974),0);
        local_cc = 0;
        local_c4 = 0;
        local_d0 = uVar10;
        FUN_1010b1d8(iVar7,iVar6,4,&local_d0,0);
        FUN_1010ae48(iVar7,iVar6);
        FUN_1010af70(iVar7,iVar6,0,0);
        iVar7 = *(int *)(iVar8 + 0x994);
        iVar6 = 0;
        if (iVar7 + 10U < 0x401) {
          iVar6 = iVar7;
        }
        *(int *)(iVar8 + 0x994) = iVar6 + 10;
        pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar11 = (*extraout_w11)(uVar10,*(undefined4 *)(iVar8 + 0x990),0);
        if (-1 < (int)uVar11) {
          FUN_1010f488(fVar18 * 0.0 + fVar16,fVar17 * 0.0 + fVar15,(float)uVar2 * fVar18 + fVar16,
                       (float)uVar3 * fVar17 + fVar15,fVar13,fVar14,uVar11,local_58 + iVar6 * 0x10,
                       uVar5,uVar4);
          uVar10 = (*pcVar9)();
          (*extraout_w11_00)(uVar10,*(undefined4 *)(iVar8 + 0x990),0);
          uVar10 = (*pcVar9)();
          (*extraout_w11_01)(uVar10,10,iVar6);
        }
      }
    }
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x20) != '\0') {
    piVar1 = (int *)(param_1 + 4);
    FUN_100cb938(*piVar1,param_2[6]);
    if ((*(int *)(*piVar1 + 0x1d200) != 0) && (uVar12 = FUN_100cbc98(*piVar1), (uVar12 & 1) != 0)) {
      FUN_10109c20(*(undefined4 *)(*piVar1 + 0x1cf00),*(undefined4 *)(*piVar1 + 0x14),0x1016ed60,0,
                   0xffffffff,0);
      FUN_1010a4c8(*(undefined4 *)(*piVar1 + 0x1cf00),*(undefined4 *)(*piVar1 + 0x14),&DAT_101656c0,
                   0);
      FUN_1010a7a0(*(undefined4 *)(*piVar1 + 0x1cf00),*(undefined4 *)(*piVar1 + 0x14),&DAT_10165698)
      ;
      FUN_1010ac10(*(undefined4 *)(*piVar1 + 0x1cf00),*(undefined4 *)(*piVar1 + 0x14));
      iVar6 = param_2[6];
      local_98 = 0;
      iVar7 = *piVar1;
      local_8c = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_64 = 0;
      iVar8 = *(int *)(iVar6 + 8);
      iVar6 = *(int *)(iVar6 + 0xc);
      local_a8 = (float)((iVar8 - *(int *)(iVar7 + 0x88)) + -10);
      fStack_a4 = (float)((iVar6 - *(int *)(iVar7 + 0x8c)) + -10);
      local_a0 = (float)(iVar8 + -10);
      fStack_9c = (float)(iVar6 + -10);
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_6c = *(undefined4 *)(iVar7 + 0x1d1fc);
      local_70 = 0;
      local_94 = 0x3f800000;
      uStack_90 = 0x3f800000;
      local_68 = *(undefined4 *)(iVar7 + 0x1d200);
      local_5c = 0;
      FUN_100a5d20(iVar7,&local_a8,*(undefined4 *)(iVar7 + 0x1cf80));
    }
  }
  return;
}

