/*
 * FUN_1000b470 at 1000b470
 * undefined FUN_1000b470(void)
 * Address ranges: 1000b470-1000b8e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b470(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  
  uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0x1c);
  if (uVar3 != 0) {
    fVar15 = (float)uVar3;
    fVar19 = (float)param_2[7];
    fVar14 = fVar15 * fVar19;
    if (fVar14 != 0.0) {
      fVar18 = (float)param_2[8];
      fVar15 = fVar15 * fVar18;
      if (fVar15 != 0.0) {
        local_c0 = 0;
        fVar17 = (float)param_2[9];
        local_b0 = 0;
        fVar16 = (float)param_2[10];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        uVar5 = param_2[5];
        uVar6 = param_2[4];
        uVar11 = param_2[1];
        fStack_b4 = (float)uVar5;
        local_b8 = (float)uVar6;
        iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x14);
        iVar8 = *(int *)(*(int *)(param_1 + 4) + 0xcf00);
        iVar9 = iVar8 + iVar7 * 0x1510;
        local_ac = 0x3f800000;
        FUN_1006b540(iVar8,iVar7,&local_c0);
        FUN_1006af20(iVar8,iVar7,&DAT_100b50a0);
        FUN_1006abc0(iVar8,iVar7,&DAT_100b4f00);
        FUN_1006b1e0(iVar8,iVar7);
        FUN_1006b950(iVar8,iVar7);
        local_cc = 0;
        local_c4 = 0;
        local_d0 = uVar11;
        FUN_1006bb00(iVar8,iVar7,4,&local_d0,0);
        puVar1 = (undefined4 *)(iVar9 + 0x990);
        FUN_1006b808(iVar8,iVar7);
        FUN_1006b8c8(iVar8,iVar7);
        piVar2 = (int *)(iVar9 + 0x994);
        iVar8 = *piVar2;
        iVar7 = 0;
        if (iVar8 + 10U < 0x401) {
          iVar7 = iVar8;
        }
        *piVar2 = iVar7 + 10;
        pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar12 = (*extraout_w11)(uVar11,*puVar1,0);
        if (-1 < (int)uVar12) {
          FUN_1006e698(fVar19 * 0.0 + fVar17,fVar18 * 0.0 + fVar16,(float)uVar3 * fVar19 + fVar17,
                       (float)uVar4 * fVar18 + fVar16,fVar14,fVar15,uVar12,local_58 + iVar7 * 0x10,
                       uVar6,uVar5);
          uVar11 = (*pcVar10)();
          (*extraout_w11_00)(uVar11,*puVar1,0);
          uVar11 = (*pcVar10)();
          (*extraout_w11_01)(uVar11,10,iVar7);
        }
      }
    }
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x20) != '\0') {
    piVar2 = (int *)(param_1 + 4);
    FUN_10030e80(*piVar2,param_2[6]);
    if ((*(int *)(*piVar2 + 0xd200) != 0) && (uVar13 = FUN_100311e0(*piVar2), (uVar13 & 1) != 0)) {
      FUN_1006abc0(*(undefined4 *)(*piVar2 + 0xcf00),*(undefined4 *)(*piVar2 + 0x14),0x100bb2d0);
      FUN_1006af20(*(undefined4 *)(*piVar2 + 0xcf00),*(undefined4 *)(*piVar2 + 0x14),&DAT_100b50a0);
      FUN_1006b1e0(*(undefined4 *)(*piVar2 + 0xcf00),*(undefined4 *)(*piVar2 + 0x14));
      FUN_1006b640(*(undefined4 *)(*piVar2 + 0xcf00),*(undefined4 *)(*piVar2 + 0x14));
      iVar7 = param_2[6];
      iVar8 = *piVar2;
      local_98 = 0;
      local_8c = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_64 = 0;
      iVar9 = *(int *)(iVar7 + 8);
      iVar7 = *(int *)(iVar7 + 0xc);
      local_5c = 0;
      local_a8 = (float)((iVar9 - *(int *)(iVar8 + 0x88)) + -10);
      fStack_a4 = (float)((iVar7 - *(int *)(iVar8 + 0x8c)) + -10);
      local_a0 = (float)(iVar9 + -10);
      fStack_9c = (float)(iVar7 + -10);
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_6c = *(undefined4 *)(iVar8 + 0xd1fc);
      local_70 = 0;
      local_68 = *(undefined4 *)(iVar8 + 0xd200);
      local_94 = 0x3f800000;
      uStack_90 = 0x3f800000;
      FUN_1000ba20(iVar8,&local_a8,*(undefined4 *)(iVar8 + 0xcf80));
    }
  }
  return;
}

