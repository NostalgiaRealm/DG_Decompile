/*
 * FUN_10085ab0 at 10085ab0
 * undefined FUN_10085ab0(void)
 * Address ranges: 10085ab0-10085f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085ab0(int param_1,undefined4 *param_2)

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
        FUN_100d83d0(iVar7,iVar6,&local_c0);
        FUN_100d7d88(iVar7,iVar6,&DAT_1012e880,0);
        FUN_100d7a20(iVar7,iVar6,&DAT_1012e6e0);
        FUN_100d8060(iVar7,iVar6,&DAT_1012e858);
        FUN_100d88d0(iVar7,iVar6,5,*(undefined4 *)(iVar8 + 0x988),*(undefined4 *)(iVar8 + 0x980),
                     *(undefined4 *)(iVar8 + 0x974),0);
        local_cc = 0;
        local_c4 = 0;
        local_d0 = uVar10;
        FUN_100d8a98(iVar7,iVar6,4,&local_d0,0);
        FUN_100d8708(iVar7,iVar6);
        FUN_100d8830(iVar7,iVar6,0,0);
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
          FUN_100dcd48(fVar18 * 0.0 + fVar16,fVar17 * 0.0 + fVar15,(float)uVar2 * fVar18 + fVar16,
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
    FUN_100ab178(*piVar1,param_2[6]);
    if ((*(int *)(*piVar1 + 0x1d200) != 0) && (uVar12 = FUN_100ab4d8(*piVar1), (uVar12 & 1) != 0)) {
      FUN_100d7a20(*(undefined4 *)(*piVar1 + 0x1cf00),*(undefined4 *)(*piVar1 + 0x14),0x10136a10);
      FUN_100d7d88(*(undefined4 *)(*piVar1 + 0x1cf00),*(undefined4 *)(*piVar1 + 0x14),&DAT_1012e880,
                   0);
      FUN_100d8060(*(undefined4 *)(*piVar1 + 0x1cf00),*(undefined4 *)(*piVar1 + 0x14),&DAT_1012e858)
      ;
      FUN_100d84d0(*(undefined4 *)(*piVar1 + 0x1cf00),*(undefined4 *)(*piVar1 + 0x14));
      iVar6 = param_2[6];
      local_98 = 0;
      iVar7 = *piVar1;
      local_8c = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_64 = 0;
      local_5c = 0;
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
      FUN_100860b0(iVar7,&local_a8,*(undefined4 *)(iVar7 + 0x1cf80));
    }
  }
  return;
}

