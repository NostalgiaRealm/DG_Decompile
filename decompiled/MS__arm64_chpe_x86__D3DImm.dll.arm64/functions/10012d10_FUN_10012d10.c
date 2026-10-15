/*
 * FUN_10012d10 at 10012d10
 * undefined FUN_10012d10(void)
 * Address ranges: 10012d10-1001336f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10012d10(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined2 *puVar3;
  short sVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  uint uVar13;
  int *piVar14;
  int *local_180;
  code *local_17c;
  int local_178;
  undefined8 *local_174;
  int *local_170;
  undefined4 *local_16c;
  int local_168;
  int *local_164;
  undefined *puStack_160;
  undefined8 local_15c;
  undefined *local_154;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_144;
  undefined *local_13c;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_12c;
  undefined *local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  iVar7 = FUN_10070aa0(DAT_100acbc0,&PTR_s_DGD3D11ROOT_100a2010);
  piVar14 = (int *)(param_1 + 0x26);
  *piVar14 = iVar7;
  if (iVar7 == 0) {
    return 0;
  }
  piVar1 = (int *)((int)param_1 + 0x134);
  local_48 = 0;
  local_164 = (int *)(param_1 + 0x27);
  local_178 = 0;
  uStack_68 = 0x100000001;
  local_70 = 0x100000001;
  local_50 = 8;
  *local_164 = iVar7 + *piVar1 * 0x1510 + 0x510;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puStack_160 = &DAT_100a22cc;
  local_154 = &DAT_100a22cc;
  local_15c = 0x400000004;
  local_150 = 0x400000004;
  local_144 = 0x400000004;
  local_138 = 0x400000004;
  local_12c = 0x400000004;
  local_120 = 0x400000004;
  local_60 = 0x10000001c;
  uStack_58 = 0;
  local_148 = &DAT_100a22cc;
  local_13c = &DAT_100a22cc;
  local_130 = &DAT_100a22cc;
  local_124 = &DAT_100a22cc;
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar7 = (*extraout_w11)(uVar8,&local_70,&puStack_160,&local_178);
  if (-1 < iVar7) {
    local_108 = 0;
    local_118 = 0x40000001c;
    uStack_110 = 0xffffffff00000000;
    uVar8 = (*pcVar2)();
    iVar7 = (*extraout_w11_00)(uVar8,local_178,&local_118,(undefined4 *)((int)param_1 + 0x124));
    if (-1 < iVar7) {
      local_17c = (code *)0x0;
      local_b0 = 8;
      local_d0 = 0x100000001;
      uStack_c8 = 0x600000001;
      local_c0 = 0x10000001c;
      uStack_b8 = 0;
      local_a8 = 4;
      local_16c = (undefined4 *)((int)param_1 + 0x124);
      uVar8 = (*pcVar2)();
      iVar7 = (*extraout_w11_01)(uVar8,&local_d0,&puStack_160,&local_17c);
      if (-1 < iVar7) {
        local_f0 = 0;
        local_100 = 0x90000001c;
        uStack_f8 = 0xffffffff00000000;
        uVar8 = (*pcVar2)();
        iVar7 = (*extraout_w11_02)(uVar8,local_17c,&local_100,param_1 + 0x25);
        if (-1 < iVar7) {
          local_90 = 0x1c;
          uStack_88 = 8;
          local_80 = 0;
          uStack_98 = 0x100000001;
          local_a0 = 0x100000001;
          local_180 = (int *)0x0;
          uVar8 = (*pcVar2)();
          iVar7 = (*extraout_w11_03)(uVar8,&local_a0,&puStack_160,&local_180);
          if (-1 < iVar7) {
            local_d8 = 0;
            local_e8 = 0x80000001c;
            uStack_e0 = 0xffffffff00000000;
            uVar8 = (*pcVar2)();
            iVar7 = (*extraout_w11_04)(uVar8,local_180,&local_e8);
            if (-1 < iVar7) {
              local_170 = piVar1;
              uVar8 = (*pcVar2)();
              (*extraout_w11_05)(uVar8);
              uVar8 = (*pcVar2)();
              (*extraout_w11_06)(uVar8);
              uVar8 = (*pcVar2)();
              (*extraout_w11_07)(uVar8);
              local_168 = (int)param_1 + 0x6c;
              iVar7 = *(int *)(*piVar14 + *piVar1 * 0x1510 + 0x520);
              uVar12 = FUN_1006db40(*piVar14,*piVar1);
              uVar8 = DAT_100acbc0;
              if ((uVar12 & 1) != 0) {
                puVar3 = (undefined2 *)0x100a2098;
                if (iVar7 < 0xb000) {
                  puVar3 = &DAT_100a2078;
                }
                uVar13 = 0;
                *(undefined8 *)((int)param_1 + 0xec) = 0;
                *(undefined8 *)((int)param_1 + 0xe4) = 0;
                *(undefined8 *)((int)param_1 + 0xfc) = 0;
                *(undefined8 *)((int)param_1 + 0xf4) = 0;
                *(undefined8 *)((int)param_1 + 0x10c) = 0;
                *(undefined8 *)((int)param_1 + 0x104) = 0;
                bVar5 = true;
                *(undefined4 *)((int)param_1 + 0x114) = 0;
                local_178 = *piVar14 + *piVar1 * 0x1510 + 0x510;
                local_17c = pcVar2;
                local_180 = piVar14;
                local_174 = param_1;
                do {
                  piVar14 = local_180;
                  if (!bVar5) goto LAB_10013244;
                  sVar4 = puVar3[uVar13];
                  if (sVar4 != 0) {
                    uVar9 = FUN_10081780(uVar8,sVar4);
                    iVar7 = FUN_100817e8(uVar8,puVar3[uVar13]);
                    if (iVar7 != 0) {
                      uVar10 = (*local_17c)();
                      iVar11 = (*extraout_w11_08)(uVar10,iVar7,uVar9,0);
                      if (-1 < iVar11) {
                        FUN_10081dc0(iVar7);
                        goto LAB_1001315c;
                      }
                    }
                    FUN_10081dc0(iVar7);
                    bVar5 = false;
                  }
LAB_1001315c:
                  puVar6 = local_174;
                  piVar14 = local_180;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < 0xd);
                if (bVar5) {
                  iVar7 = (int)local_174 + 0x11c;
                  pcVar2 = (code *)(local_174 + 0x24);
                  uVar12 = FUN_1006dce8(*local_180,*local_170);
                  if ((uVar12 & 1) != 0) {
                    bVar5 = true;
                    uVar13 = 0;
                    local_180 = piVar14;
                    local_17c = pcVar2;
                    local_178 = iVar7;
                    local_174 = (undefined8 *)((int)param_1 + 0xe4);
                    do {
                      uVar8 = DAT_100acbc0;
                      sVar4 = puVar3[uVar13];
                      if (sVar4 == 0) {
                        *(undefined4 *)((int)puVar6 + uVar13 * 4 + 4) = 0;
                        *(undefined4 *)((int)puVar6 + uVar13 * 4 + 0x38) = 0;
                      }
                      else {
                        uVar9 = FUN_10081780(DAT_100acbc0,sVar4);
                        iVar7 = FUN_100817e8(uVar8,sVar4);
                        if (iVar7 != 0) {
                          *(int *)((int)puVar6 + uVar13 * 4 + 4) = iVar7;
                          *(undefined4 *)((int)puVar6 + uVar13 * 4 + 0x38) = uVar9;
                        }
                        bVar5 = (bool)(iVar7 != 0 & bVar5);
                      }
                      piVar14 = local_180;
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < 0xd);
                    if (bVar5) {
                      return 1;
                    }
                    FUN_1006de68();
                  }
                }
LAB_10013244:
                FUN_1006def8();
                FUN_1006dc70();
              }
              FUN_1006e100(*piVar14,*local_170,*local_16c);
              goto LAB_10013338;
            }
            uVar8 = (*pcVar2)();
            (*extraout_w11_09)(uVar8);
          }
          uVar8 = (*pcVar2)();
          (*extraout_w11_10)(uVar8);
        }
        uVar8 = (*pcVar2)();
        (*extraout_w11_11)(uVar8);
      }
      uVar8 = (*pcVar2)();
      (*extraout_w11_12)(uVar8);
    }
    uVar8 = (*pcVar2)();
    (*extraout_w11_13)(uVar8);
  }
LAB_10013338:
  FUN_10070b58(*piVar14);
  *piVar14 = 0;
  *local_164 = 0;
  return 0;
}

