/*
 * FUN_10099800 at 10099800
 * undefined FUN_10099800(void)
 * Address ranges: 10099800-1009a023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099800(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_108;
  int local_104;
  undefined4 local_100;
  int *local_fc;
  undefined4 local_f8;
  float local_f4;
  float fStack_f0;
  undefined8 local_e8;
  float local_e0;
  float afStack_dc [3];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  uint uStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x1c);
  if (uVar2 != 0) {
    uVar10 = *param_2;
    fVar18 = (float)param_2[8];
    fVar17 = (float)param_2[10];
    fVar16 = (float)param_2[9];
    fVar15 = (float)param_2[0xb];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    local_100 = param_2[2];
    local_f8 = param_2[1];
    local_104 = *(int *)(*(int *)(param_1 + 4) + 0x1cf00);
    iVar7 = local_104 + *(int *)(*(int *)(param_1 + 4) + 0x14) * 0x16c0;
    piVar1 = (int *)(iVar7 + 0x19c4);
    local_fc = (int *)(iVar7 + 0x6c8);
    *(int *)(*piVar1 + 0x634) = *(int *)(*piVar1 + 0x634) + 1;
    *(undefined8 *)(iVar7 + 0x750) = *(undefined8 *)(*piVar1 + 0x938);
    FUN_100e9430(*local_fc + 0x38,local_d0,2,*(undefined4 *)(*(int *)(iVar7 + 0x19c0) + 0xc));
    local_108 = (int)local_c8;
    if ((int)local_c8 != 0) {
      fStack_f0 = fVar18 * 0.0 + fVar17;
      local_f4 = fVar16 * 0.0 + fVar15;
      *(int *)(*piVar1 + 0x948) = local_104;
      fVar14 = (float)uVar2;
      (*pcVar8)();
      (*extraout_w11)(uVar10,&local_b0);
      *(undefined4 *)(iVar7 + 0x708) = 1;
      *(undefined4 *)(iVar7 + 0x70c) = local_100;
      *(undefined4 *)(iVar7 + 0x730) = (undefined4)local_8c;
      *(undefined4 *)(iVar7 + 0x734) = local_8c._4_4_;
      uVar9 = FUN_10097610(iVar7 + 0x1cc0,&DAT_1012f0e0);
      *(undefined4 *)(iVar7 + 0x6ec) = uVar9;
      uVar9 = FUN_100514b8(iVar7 + 0x1cb0,&DAT_1012f078);
      *(undefined4 *)(iVar7 + 0x6f8) = uVar9;
      uVar9 = FUN_10050958(iVar7 + 0x1ce0,&DAT_1012f0b0);
      *(undefined4 *)(iVar7 + 0x6f4) = uVar9;
      if (*(int *)(*local_fc + 0x2c) != 0) {
        *(int *)(*local_fc + 0x2c) = 0;
      }
      FUN_100e1588(*piVar1,uVar10,0,0,4);
      iVar5 = *piVar1;
      puVar11 = (undefined4 *)(iVar7 + 0x6d0);
      FUN_100ec3e0(*(undefined4 *)(iVar5 + 0x8e4),*puVar11,*(undefined4 *)(iVar5 + 0x8e0),iVar5,
                   *(undefined8 *)(iVar5 + 0x938));
      FUN_100e2330(*piVar1,*puVar11);
      FUN_100e2520(*piVar1,5);
      local_c8 = 0x1000000200;
      FUN_100e2c50(*piVar1,0,1,local_d0);
      *(undefined4 *)(iVar7 + 0x6d8) = *(undefined4 *)(iVar7 + 0x1854);
      *(undefined4 *)(iVar7 + 0x6d4) = *(undefined4 *)(iVar7 + 0x1860);
      *(undefined4 *)(iVar7 + 0x6fc) = *(undefined4 *)(iVar7 + 0x1868);
      uVar10 = FUN_100e7ac8(iVar7 + 0x1d00,puVar11);
      FUN_100e2490(*piVar1,uVar10);
      iVar7 = *piVar1;
      FUN_100ec3e0(*(undefined4 *)(iVar7 + 0x8e4),uVar10,*(undefined4 *)(iVar7 + 0x8e0),iVar7,
                   *(undefined8 *)(iVar7 + 0x938));
      FUN_100e2fd0(*piVar1,1,&local_f8,0,0);
      local_e8 = 0;
      afStack_dc[1] = 0.0;
      local_c0 = 0;
      local_e0 = (float)local_a0;
      afStack_dc[0] = (float)local_98;
      uStack_b4 = local_98;
      afStack_dc[2] = 1.0;
      FUN_100e3410(*piVar1,1,&local_e8);
      uVar12 = FUN_100e32e0(*piVar1,1,&local_c0);
      FUN_100dcd48(fStack_f0,local_f4,(float)uVar3 * fVar18 + fVar17,(float)uVar4 * fVar16 + fVar15,
                   fVar14 * fVar18,fVar14 * fVar16,uVar12,local_108,local_a0,local_98);
      FUN_100e3940(*piVar1,10,1,0,0);
      FUN_100e14f0(*piVar1 + 4,0);
    }
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x20) != '\0') {
    piVar1 = (int *)(param_1 + 4);
    FUN_100ab178(*piVar1,param_2[7]);
    if ((*(int *)(*piVar1 + 0x1d044) != 0) && (uVar13 = FUN_100ab4d8(*piVar1), (uVar13 & 1) != 0)) {
      iVar7 = *(int *)(*piVar1 + 0x1cf04);
      uVar13 = FUN_100ed630(*(undefined4 *)(iVar7 + 0x15e8),1,
                            *(undefined4 *)(*(int *)(iVar7 + 0x1300) + 0xc),
                            *(undefined8 *)(*(int *)(iVar7 + 0x1304) + 0x938),&local_e8);
      if ((uVar13 & 1) != 0) {
        iVar7 = *piVar1;
        iVar5 = *(int *)(iVar7 + 0x14);
        iVar6 = *(int *)(iVar7 + 0x1cf00);
        uVar10 = FUN_100dfee0(*(undefined4 *)(*(int *)(iVar7 + 0x1cf04) + 0x15d8),&local_108,
                              *(undefined4 *)(iVar7 + 0x1d048),0);
        puVar11 = (undefined4 *)(*pcVar8)(uVar10);
        (*extraout_w11_00)(*(undefined4 *)(iVar6 + iVar5 * 0x18 + 0x520),1,local_e0,*puVar11,0);
        iVar7 = *(int *)(*(int *)(*piVar1 + 0x1cf04) + 0x1304);
        FUN_100ec3e0(*(undefined4 *)(iVar7 + 0x8e4),*(undefined4 *)(*piVar1 + 0x1cf0c),
                     *(undefined4 *)(iVar7 + 0x8e0),iVar7,*(undefined8 *)(iVar7 + 0x938));
        FUN_100e2330(*(undefined4 *)(*(int *)(*piVar1 + 0x1cf04) + 0x1304),
                     *(undefined4 *)(*piVar1 + 0x1cf0c));
        FUN_100e1588(*(undefined4 *)(*(int *)(*piVar1 + 0x1cf04) + 0x1304),*param_2,0,0,4);
        FUN_100e1588(*(undefined4 *)(*(int *)(*piVar1 + 0x1cf04) + 0x1304),
                     *(undefined4 *)(*piVar1 + 0x1d044),0,0,0x80);
        *(undefined4 *)(*piVar1 + 0x1cf44) = 1;
        iVar7 = *piVar1;
        uVar10 = FUN_10097610(*(int *)(*piVar1 + 0x1cf04) + 0x1600,0x10136cf0);
        *(undefined4 *)(iVar7 + 0x1cf28) = uVar10;
        uVar10 = FUN_100514b8(*(int *)(*piVar1 + 0x1cf04) + 0x15f0,&DAT_1012f078);
        *(undefined4 *)(*piVar1 + 0x1cf34) = uVar10;
        uVar10 = FUN_10050958(*(int *)(*piVar1 + 0x1cf04) + 0x1620,&DAT_1012f0b0);
        *(undefined4 *)(*piVar1 + 0x1cf30) = uVar10;
        *(undefined4 *)(*piVar1 + 0x1cf38) = *(undefined4 *)(*piVar1 + 0x1d028);
        *(undefined4 *)(*piVar1 + 0x1cf48) = param_2[2];
        *(undefined4 *)(*piVar1 + 0x1cf4c) = 0;
        FUN_100e2240(*(undefined4 *)(*(int *)(*piVar1 + 0x1cf04) + 0x1304),1,afStack_dc);
        FUN_100e2850(*(undefined4 *)(*(int *)(*piVar1 + 0x1cf04) + 0x1304),6,local_e8);
        FUN_100e2fd0(*(undefined4 *)(*(int *)(*piVar1 + 0x1cf04) + 0x1304),1,param_2 + 1,0,0);
        iVar7 = param_2[7];
        iVar5 = *piVar1;
        local_a0 = 0;
        local_94 = 0;
        local_8c = 0;
        local_84 = 0;
        iVar6 = *(int *)(iVar7 + 8);
        local_74 = 0;
        iVar7 = *(int *)(iVar7 + 0xc);
        local_64 = 0;
        local_4c = 0;
        local_6c = 0;
        local_5c = 0;
        local_54 = 0;
        local_b0 = (float)((iVar6 - *(int *)(iVar5 + 0x88)) + -10);
        fStack_ac = (float)((iVar7 - *(int *)(iVar5 + 0x8c)) + -10);
        local_a8 = (float)(iVar6 + -10);
        fStack_a4 = (float)(iVar7 + -10);
        uStack_78 = *param_2;
        local_7c = 0;
        uStack_9c = 0x3f800000;
        local_98 = 0x3f800000;
        FUN_10093400(iVar5,&local_b0,*(undefined4 *)(iVar5 + 0x1cffc));
      }
    }
  }
  return;
}

