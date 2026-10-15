/*
 * FUN_100a5050 at 100a5050
 * undefined FUN_100a5050(void)
 * Address ranges: 100a5050-100a553f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100a5050(uint param_1,uint param_2,int param_3,char *param_4,code *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  char *local_140;
  char *local_13c;
  code *local_138;
  undefined4 local_130;
  byte local_110;
  code *local_10c;
  uint local_108;
  undefined4 *local_104;
  uint local_100;
  undefined8 local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  char *local_dc;
  int local_d8;
  undefined4 *local_d4;
  undefined4 *local_d0;
  uint local_cc;
  int local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  int local_88 [6];
  undefined1 auStack_70 [4];
  int local_6c;
  
  iVar15 = *(int *)(param_1 + 0x14);
  uStack_b8 = 0;
  local_c0 = 0;
  uVar8 = 0;
  local_100 = *(uint *)(iVar15 + 0x1cf00);
  local_108 = *(uint *)(iVar15 + 0x14);
  if (*(char *)(param_1 - 3) == '\0') {
    local_c0._0_4_ = 0;
    iVar15 = (int)local_c0;
  }
  else {
    puVar5 = (undefined8 *)
             FUN_100ae748(param_1 - 0x1c,&local_b0,iVar15,param_2,param_3,param_4,param_5);
    iVar15 = (int)((ulonglong)*puVar5 >> 0x20);
    param_3 = (int)*puVar5;
    param_4 = (char *)(iVar15 << 2);
    param_5 = (code *)((int)puVar5[1] * iVar15 * 4);
    iVar15 = param_3;
  }
  local_10c = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_104 = (undefined4 *)(param_1 + 0x18);
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar10 = (*extraout_w11)(uVar6,local_88,0);
  if (-1 < (int)uVar10) {
    iVar7 = local_100 + local_108 * 0x16c0;
    local_108 = iVar7 + 0x6c0;
    if (((*(int *)(iVar7 + 0x19a8) == 0) && (local_88[0] == 4)) &&
       (uVar10 = FUN_100ecac0(*(undefined4 *)(local_100 + 0x172c0),*(undefined4 *)(param_1 + 0x18),
                              param_2), (uVar10 & 1) != 0)) {
      uVar6 = (*local_10c)();
      iVar7 = (*extraout_w11_00)(uVar6,param_2,0,0);
      if (-1 < iVar7) {
        uVar6 = (*local_10c)();
        uVar8 = (*extraout_w11_01)(uVar6,param_2,0,param_3,param_4,param_5);
        uVar8 = ~uVar8 >> 0x1f;
        uVar6 = (*local_10c)();
        (*extraout_w11_02)(uVar6,param_2,0);
      }
    }
    else {
      local_ec = *(uint *)(param_1 - 0x18) >> (ulonglong)(param_2 & 0x1f);
      if (local_ec == 0) {
        local_ec = 1;
      }
      local_e8 = *(uint *)(param_1 - 0x14) >> (ulonglong)(param_2 & 0x1f);
      if (local_e8 == 0) {
        local_e8 = 1;
      }
      local_e4 = *(uint *)(param_1 - 0x10) >> (ulonglong)(param_2 & 0x1f);
      if (local_e4 == 0) {
        local_e4 = 1;
      }
      bVar1 = *(byte *)(*(int *)(param_1 - 0xc) + 0x1012cf10);
      if (bVar1 != 0) {
        local_ec = (bVar1 + local_ec) - 1 & -(uint)bVar1;
      }
      bVar1 = *(byte *)(*(int *)(param_1 - 0xc) + 0x1012cf30);
      if (bVar1 != 0) {
        local_e8 = (bVar1 + local_e8) - 1 & -(uint)bVar1;
      }
      local_f8 = 0;
      local_f0 = 0;
      local_130 = 0;
      local_100 = local_108;
      local_140 = param_4;
      local_138 = param_5;
      auVar16 = FUN_1009b3f0(uVar10,&local_b0,local_108,*(undefined4 *)(local_108 + 0x1304),
                             *local_104,local_108 + 0x1430,&local_f8,param_3);
      uVar8 = 1;
      local_c0 = CONCAT44(local_100,param_1 - 0x1c);
      if (local_ac == 0) {
        uVar9 = FUN_100e6388(auVar16._0_8_,auVar16._8_8_,&local_f8,*(undefined4 *)(param_1 + 0x18));
        uVar3 = local_108;
        uVar10 = (ulonglong)local_f8._4_4_;
        uVar12 = local_e8 - local_f8._4_4_;
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          uVar4 = SoftwareBreakpoint(0xf004,0x100a5390);
          (*(code *)uVar4)();
        }
        puVar2 = (undefined4 *)0x0;
        if (uVar12 != 0) {
          puVar2 = (undefined4 *)(uVar9 / uVar12);
        }
        if (puVar2 < (undefined4 *)0x2) {
          puVar2 = (undefined4 *)0x1;
        }
        if (local_f0 < local_e4) {
          local_110 = 1;
          uVar12 = local_e8;
          uVar13 = local_e4;
          uVar14 = local_ec;
          uVar6 = (undefined4)local_f8;
          uVar8 = local_f0;
          local_10c = param_5;
          local_104 = puVar2;
          local_100 = param_1;
          local_e0 = uVar9;
          local_dc = param_4;
          local_cc = param_2;
          local_c8 = iVar15;
          do {
            if ((uint)uVar10 < uVar12) {
              local_108 = (int)local_104 + uVar8;
              local_d8 = uVar3 + 0x1430;
              local_d4 = (undefined4 *)(local_100 + 0x18);
              local_d0 = (undefined4 *)(uVar3 + 0x1304);
              uVar11 = uVar10;
              do {
                local_ac = (int)uVar11;
                local_130 = 0;
                uVar9 = local_ac + local_e0;
                local_a0 = uVar9;
                if (uVar12 <= uVar9) {
                  local_a0 = uVar12;
                }
                uStack_9c = local_108;
                if (uVar13 <= local_108) {
                  uStack_9c = uVar13;
                }
                local_138 = local_10c;
                local_140 = local_dc;
                local_b0 = uVar6;
                local_a8 = uVar8;
                uStack_a4 = uVar14;
                FUN_1009b3f0(uVar10,auStack_70,uVar3,*local_d0,*local_d4,local_d8,&local_b0,param_3)
                ;
                if (local_6c == 0) {
                  local_13c = s_an_upload_heap_buffer_1012c380;
                  local_140 = s_Q_dgVoodoo__D3D12_Core__FATAL_ER_1012ea5f + 1;
                  FUN_100c23d0(&local_140,8);
                  (*(code *)PTR_FUN_10134064)();
                  local_110 = 0;
                  uVar8 = uVar13;
                  break;
                }
                uVar10 = FUN_100a5540(&local_c0,local_cc,auStack_70,&local_f8);
                uVar11 = (ulonglong)uVar9;
                uVar12 = local_e8;
                uVar13 = local_e4;
                uVar14 = local_ec;
                uVar6 = (undefined4)local_f8;
              } while (uVar9 < local_e8);
              uVar10 = local_f8 >> 0x20;
            }
            uVar8 = (int)local_104 + uVar8;
            param_3 = param_3 + (int)local_104 * (int)local_10c;
          } while (uVar8 < uVar13);
          uVar8 = (uint)local_110;
          iVar15 = local_c8;
        }
      }
      else {
        FUN_100a5540(&local_c0,param_2,&local_b0,&local_f8);
      }
    }
  }
  if (iVar15 != 0) {
    FUN_100fed00(iVar15);
  }
  return uVar8;
}

