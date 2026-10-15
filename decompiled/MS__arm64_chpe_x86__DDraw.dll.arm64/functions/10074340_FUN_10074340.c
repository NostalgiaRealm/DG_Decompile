/*
 * FUN_10074340 at 10074340
 * undefined FUN_10074340(void)
 * Address ranges: 10074340-10074d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10074340(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,uint param_6
            )

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int iVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  float fVar18;
  float fVar19;
  undefined4 local_1e0;
  int *local_1dc;
  int local_1d8 [2];
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  char local_1a8;
  char local_1a7;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  int *local_170;
  int *local_16c;
  int local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  undefined4 uStack_14c;
  int local_148;
  uint local_144;
  undefined8 local_140;
  int local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined1 auStack_f0 [16];
  uint local_e0;
  uint local_d8;
  undefined4 local_d0;
  undefined1 auStack_b8 [16];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 auStack_80 [16];
  ulonglong local_70;
  undefined4 local_68;
  
  local_16c = (int *)(param_2 + 8);
  iVar7 = param_1 + *local_16c * 0x16c0;
  iVar1 = iVar7 + 0x6c0;
  uVar5 = *(undefined4 *)(param_2 + *(int *)(param_2 + 0xd68) * 4 + 0xd70);
  local_144 = param_6;
  FUN_10073b50(*(undefined4 *)(iVar7 + 0x1c9c),&local_1e0,*(undefined4 *)(param_2 + 0xd78),
               *(int *)(param_2 + 0xd68));
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar2 = (uint *)(param_3 + 1);
  uVar12 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar12,auStack_b8);
  (*pcVar11)();
  (*extraout_w11_00)(uVar5,auStack_f0);
  uVar15 = FUN_1006ca68(param_1,local_1d8,param_2,param_5,local_a8,local_a0,local_e0,local_d8,
                        param_4);
  if (((local_1d8[0] == 0) && (local_1a8 == '\0')) && (local_1a7 == '\0')) {
    return 0;
  }
  piVar4 = (int *)(iVar7 + 0x19c4);
  *(int *)(*piVar4 + 0x634) = *(int *)(*piVar4 + 0x634) + 1;
  if (*param_3 != 0) {
    FUN_10073c78(uVar15,iVar1,*puVar2,*param_3,param_4);
  }
  if (local_1a8 != '\0') {
    uVar15 = FUN_1007d820(*piVar4,uVar5,0,0,4);
    uVar12 = FUN_1006cdd0(uVar15,local_1d8,local_e0,local_d8,auStack_80);
    local_160 = 0;
    local_158 = 0;
    FUN_1007f950(*piVar4,local_1e0,&local_160,uVar12,auStack_80);
  }
  if (param_3[2] == 0) goto LAB_10074c04;
  if (((local_1d8[0] != 0) || (local_1a7 != '\0')) ||
     ((local_1c0 - local_1c8 != local_1b0 - local_1b8 ||
      (bVar10 = true, local_1bc - local_1c4 != local_1ac - local_1b4)))) {
    bVar10 = false;
  }
  if (!bVar10) {
    local_170 = (int *)(param_2 + 0x24);
    uVar6 = *(uint *)(param_2 + 0x18);
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      uVar15 = SoftwareBreakpoint(0xf004,0x10074580);
      (*(code *)uVar15)();
    }
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = (local_1c0 - local_1c8) / uVar6;
    }
    if (uVar8 < (uint)((local_1b0 - local_1b8) * 2)) {
      uVar6 = *(uint *)(param_2 + 0x1c);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        uVar15 = SoftwareBreakpoint(0xf004,0x100745a4);
        (*(code *)uVar15)();
      }
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = (uint)(local_1bc - local_1c4) / uVar6;
      }
      bVar9 = false;
      if ((uint)((local_1ac - local_1b4) * 2) <= uVar8) goto LAB_100745b8;
    }
    else {
LAB_100745b8:
      bVar9 = true;
    }
    local_148 = 3;
    if (*local_170 != 7) {
      local_148 = 1;
    }
    piVar14 = (int *)(iVar7 + 0x19c0);
    iVar17 = 5;
    if (!bVar9) {
      iVar17 = 0;
    }
    uVar16 = FUN_1007c0d0(*(undefined4 *)(iVar7 + 0x1ca8),iVar17 + local_148,
                          *(undefined4 *)(*piVar14 + 0xc),*(undefined8 *)(*piVar4 + 0x938),
                          &local_130);
    if ((uVar16 & 1) != 0) {
      local_1dc = (int *)(iVar7 + 0x6cc);
      puVar13 = (undefined8 *)
                FUN_100773f0(*local_1dc + 0x38,&local_160,2,*(undefined4 *)(*piVar14 + 0xc),
                             *(undefined8 *)(iVar7 + 0x750));
      uStack_f8 = puVar13[1];
      local_100 = *puVar13;
      if ((int)uStack_f8 != 0) {
        local_168[0] = iVar7 + 0x760;
        FUN_1006cec8(param_1,param_2);
        FUN_100917a0(uStack_f8 & 0xffffffff,local_168[0],0x1040);
        if (*(int *)(*local_1dc + 0x2c) != 0) {
          *(int *)(*local_1dc + 0x2c) = 0;
        }
      }
      local_1dc = (int *)(iVar7 + 0x6c8);
      FUN_100773f0(*local_1dc + 0x38,&local_140,2,*(undefined4 *)(*piVar14 + 0xc),
                   *(undefined8 *)(iVar7 + 0x750));
      if (local_138 != 0) {
        *(int *)(*piVar4 + 0x948) = param_1;
        if (*local_170 == 7) {
          uVar16 = FUN_1008ab10(param_1,*local_16c,&local_100,&local_130,&local_140,1,*puVar2,
                                param_3[3],local_a8);
          if ((uVar16 & 1) != 0) {
            *puVar2 = *(uint *)(iVar7 + 0x1d64);
            piVar14 = (int *)FUN_10073b50(*(undefined4 *)(iVar7 + 0x1c98),local_168,
                                          *(int *)(iVar7 + 0x1d58) + 1,0);
            param_3[3] = *piVar14;
          }
        }
        *(undefined4 *)(iVar7 + 0x708) = 1;
        *(undefined4 *)(iVar7 + 0x70c) = local_d0;
        uVar12 = FUN_1001cbb0(iVar7 + 0x1cc0,&DAT_100b57d0);
        *(undefined4 *)(iVar7 + 0x6ec) = uVar12;
        uVar12 = FUN_1001d200(iVar7 + 0x1cb0,&DAT_100b5760);
        *(undefined4 *)(iVar7 + 0x6f8) = uVar12;
        uVar12 = FUN_1001cf08(iVar7 + 0x1ce0,&DAT_100b5798);
        *(undefined4 *)(iVar7 + 0x6f4) = uVar12;
        if (*(int *)(*local_1dc + 0x2c) != 0) {
          *(int *)(*local_1dc + 0x2c) = 0;
        }
        puVar3 = (undefined4 *)(iVar7 + 0x6d0);
        FUN_1007d4d8(*piVar4,*puVar3);
        FUN_1007e490(*piVar4,*puVar3);
        FUN_1007e3a0(*piVar4,1,(int)&local_128 + 4);
        FUN_1007e680(*piVar4,5);
        local_160 = local_140;
        local_158 = 0x1000000200;
        FUN_1007edb0(*piVar4,0,1,&local_160);
        FUN_1007e920(*piVar4,0,local_100);
        if (*local_170 != 7) {
          local_180 = 0;
          local_1a0 = CONCAT44(&local_130,local_1d8);
          local_198 = CONCAT44(iVar1,&local_140);
          local_190 = CONCAT44(*puVar2,param_2);
          uStack_188 = CONCAT44(local_148,param_3[3]);
          FUN_1006d060(param_1,local_1d8,param_2,&local_1a0);
          *puVar2 = local_190._4_4_;
          param_3[3] = (int)uStack_188;
        }
        if (((local_1d8[0] != 0) || (local_1a7 != '\0')) ||
           ((local_1c0 - local_1c8 != local_1b0 - local_1b8 ||
            (bVar10 = true, local_1bc - local_1c4 != local_1ac - local_1b4)))) {
          bVar10 = false;
        }
        if (bVar10) goto LAB_10074b74;
        *(undefined4 *)(iVar7 + 0x6d8) =
             *(undefined4 *)(iVar1 + (uint)*(byte *)(local_1d8[0] + 0x100b54d8) * 4 + 0x10f0);
        *(undefined4 *)(iVar7 + 0x6d4) = *(undefined4 *)(iVar7 + 0x185c);
        *(undefined4 *)(iVar7 + 0x6fc) = *(undefined4 *)(iVar7 + 0x1864);
        uVar12 = FUN_10075d20(iVar7 + 0x1d00,puVar3);
        FUN_1007d4d8(*piVar4,uVar12);
        FUN_1007e5f0(*piVar4,uVar12);
        FUN_1007d820(*piVar4,uVar5,0,0,4);
        FUN_1007d820(*piVar4,*puVar2,0,0,0x80);
        param_3 = param_3 + 3;
        uVar12 = (*pcVar11)();
        (*extraout_w11_01)(uVar12,1,local_128 & 0xffffffff,*param_3,0);
        FUN_1007e9b0(*piVar4,1,CONCAT44(uStack_12c,local_130));
        FUN_1007f130(*piVar4,1,&local_1e0,0,0);
        local_1a0 = 0;
        local_198 = CONCAT44((float)local_d8,(float)local_e0);
        local_160 = 0;
        local_190 = 0x3f80000000000000;
        local_158 = CONCAT44(local_d8,local_e0);
        FUN_1007f570(*piVar4,1,&local_1a0);
        uVar15 = FUN_1007f440(*piVar4,1,&local_160);
        if (*(char *)(local_1d8[0] + 0x100b5518) == '\0') {
          local_70 = 0;
          local_68 = 0;
        }
        else {
          uVar12 = (*pcVar11)();
          uVar15 = (*extraout_w11_02)(uVar12,auStack_80);
          local_70 = local_70 & 0xffffffff;
        }
        FUN_1006d3b0(uVar15,param_2,local_1d8,local_138,local_70,local_68);
        FUN_1007faa0(*piVar4,4,1,0,0);
        bVar10 = false;
      }
    }
    if (!bVar10) goto LAB_10074c04;
  }
LAB_10074b74:
  FUN_1007d820(*piVar4,uVar5,0,0,0x400);
  FUN_1007d820(*piVar4,*puVar2,0,0,0x800);
  uStack_12c = 0;
  local_128 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_1a0 = (ulonglong)*puVar2;
  local_110 = 0;
  local_198 = 0;
  local_160 = CONCAT44(local_1c4,local_1c8);
  uStack_188 = 0;
  local_190 = 0;
  local_180 = 0;
  local_158 = (ulonglong)local_1c0 << 0x20;
  local_150 = local_1bc;
  uStack_14c = 1;
  local_130 = uVar5;
  FUN_1007f8a0(*piVar4,&local_130,local_1b8,local_1b4,0,&local_1a0,&local_160);
LAB_10074c04:
  uVar16 = (ulonglong)local_144;
  if (local_144 != 0) {
    fVar18 = (float)(uint)((local_1b0 - local_1b8) * *(int *)(param_2 + 0x18)) /
             (float)(int)(local_1c0 - local_1c8);
    local_1a0 = CONCAT44(local_1e0,uVar5);
    local_198 = CONCAT44(local_1d0,local_d0);
    fVar19 = (float)(uint)((local_1ac - local_1b4) * *(int *)(param_2 + 0x1c)) /
             (float)(local_1bc - local_1c4);
    local_190 = CONCAT44(local_e0,uStack_1cc);
    uStack_188 = CONCAT44(&local_1b8,local_d8);
    local_180 = CONCAT44(fVar19,fVar18);
    local_178 = (float)local_1b8 - (float)local_1c8 * fVar18;
    fStack_174 = (float)local_1b4 - (float)local_1c4 * fVar19;
    (*pcVar11)();
    (*extraout_w11_03)(uVar16 & 0xffffffff,&local_1a0);
  }
  FUN_1007d440(*piVar4 + 4,0);
  return 1;
}

