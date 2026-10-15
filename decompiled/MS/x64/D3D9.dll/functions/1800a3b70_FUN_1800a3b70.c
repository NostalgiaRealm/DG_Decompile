/*
 * FUN_1800a3b70 at 1800a3b70
 * byte __fastcall FUN_1800a3b70(longlong param_1, uint param_2, uint * param_3, uint param_4, uint param_5)
 * Address ranges: 1800a3b70-1800a3fc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800a3b70(longlong param_1,uint param_2,uint *param_3,uint param_4,uint param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  byte extraout_var;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  uint uVar10;
  longlong *plVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *local_res18;
  uint local_res20;
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar21;
  undefined8 in_stack_fffffffffffffec0;
  undefined4 uVar22;
  int local_108 [4];
  uint local_f8;
  uint local_f4;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  uint *local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  int local_88 [6];
  longlong local_70;
  longlong local_68;
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
  bVar12 = 0;
  lVar17 = *(longlong *)(param_1 + 0x18);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  lVar14 = *(longlong *)(lVar17 + 0x1cf10);
  uVar18 = *(uint *)(lVar17 + 0x28);
  bVar15 = (byte)param_2;
  local_e8 = lVar14;
  if (*(char *)(param_1 + -3) == '\0') {
    local_d8 = (uint *)0x0;
    local_res20 = param_4;
  }
  else {
    pauVar6 = (undefined1 (*) [16])
              FUN_1800ac86c(param_1 + -0x20,&local_d0,lVar17,bVar15,(longlong)param_3,param_4,
                            param_5);
    uVar21 = (undefined4)((ulonglong)param_3 >> 0x20);
    auVar1 = *pauVar6;
    param_3 = auVar1._0_8_;
    local_c0 = *(undefined8 *)pauVar6[1];
    local_res20 = auVar1._8_4_ * 4;
    param_5 = auVar1._12_4_ * auVar1._8_4_ * 4;
    local_d8 = param_3;
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
                    (*(longlong **)(param_1 + 0x20),local_88,0);
  if (-1 < iVar3) {
    lVar17 = (ulonglong)uVar18 * 0x1ac0;
    local_e0 = lVar17;
    uVar4 = FUN_1800fb1a0(lVar14 + 0x1bc0 + lVar17);
    if ((((char)uVar4 == '\0') || (local_88[0] != 4)) ||
       (cVar2 = FUN_1800eacd8(*(longlong **)(lVar14 + 0x1b500),*(ulonglong *)(param_1 + 0x20),
                              param_2), cVar2 == '\0')) {
      local_108[3] = *(uint *)(param_1 + -0x18) >> (bVar15 & 0x1f);
      lVar13 = lVar14 + 0x900 + lVar17;
      if (*(uint *)(param_1 + -0x18) >> (bVar15 & 0x1f) == 0) {
        local_108[3] = 1;
      }
      local_f8 = *(uint *)(param_1 + -0x14) >> (bVar15 & 0x1f);
      if (*(uint *)(param_1 + -0x14) >> (bVar15 & 0x1f) == 0) {
        local_f8 = 1;
      }
      local_f4 = *(uint *)(param_1 + -0x10) >> (bVar15 & 0x1f);
      if (*(uint *)(param_1 + -0x10) >> (bVar15 & 0x1f) == 0) {
        local_f4 = 1;
      }
      bVar12 = (&DAT_1800fead8)[*(uint *)(param_1 + -0xc)];
      if (bVar12 != 0) {
        local_108[3] = (local_108[3] - 1U) + (uint)bVar12 & -(uint)bVar12;
      }
      bVar12 = (&DAT_1800feb08)[*(uint *)(param_1 + -0xc)];
      if (bVar12 != 0) {
        local_f8 = (local_f8 - 1) + (uint)bVar12 & -(uint)bVar12;
      }
      plVar11 = &local_d0;
      piVar9 = local_108;
      local_108[0] = 0;
      local_108[1] = 0;
      local_108[2] = 0;
      FUN_18009b094(piVar9,plVar11,lVar13,*(longlong *)(lVar14 + 0x1e08 + lVar17),
                    *(longlong **)(param_1 + 0x20),(longlong *)(lVar14 + 0x1fd0 + lVar17),piVar9,
                    param_3,local_res20,param_5,0);
      local_98 = param_1 + -0x20;
      bVar12 = 1;
      local_90 = lVar13;
      if (uStack_c8 == 0) {
        uVar7 = FUN_1800e5d98(piVar9,plVar11,local_108,*(longlong **)(param_1 + 0x20));
        uVar5 = (uint)((uVar7 & 0xffffffff) / (ulonglong)(local_f8 - local_108[1]));
        uVar18 = 1;
        if (1 < uVar5) {
          uVar18 = uVar5;
        }
        if ((uint)local_108[2] < local_f4) {
          uVar8 = (ulonglong)(uVar18 * param_5);
          bVar12 = 1;
          uVar5 = local_f8;
          uVar20 = local_108[2];
          uVar16 = local_f4;
          local_res18 = param_3;
          local_f0 = uVar8;
          do {
            uVar19 = uVar20;
            if ((uint)local_108[1] < uVar5) {
              local_a0 = (longlong *)(local_e8 + 0x1fd0 + local_e0);
              uVar10 = local_108[1];
              do {
                uVar19 = uVar16;
                local_d0 = CONCAT44(uVar10,(int)local_108._0_8_);
                uVar10 = uVar10 + (int)uVar7;
                lVar17 = *(longlong *)(local_e8 + 0x1e08 + local_e0);
                if (uVar10 < uVar5) {
                  uVar5 = uVar10;
                }
                uStack_c8 = CONCAT44(local_108[3],uVar20);
                uVar16 = uVar19;
                if (uVar20 + uVar18 < uVar19) {
                  uVar16 = uVar20 + uVar18;
                }
                local_c0 = CONCAT44(uVar16,uVar5);
                lVar14 = local_e0 + local_e8 + 0x900;
                FUN_18009b094(local_e8 + 0x900,&local_70,lVar14,lVar17,
                              *(longlong **)(param_1 + 0x20),local_a0,(int *)&local_d0,local_res18,
                              local_res20,param_5,0);
                if (local_68 == 0) {
                  FUN_1800ca538("[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. WTF?\n",
                                "an upload heap buffer",lVar14,lVar17);
                  DebugBreak();
                  bVar12 = 0;
                  uVar8 = local_f0;
                  uVar5 = local_f8;
                  uVar16 = uVar19;
                  break;
                }
                FUN_1800a3fc8(&local_98,param_2,&local_70,(undefined8 *)local_108);
                uVar8 = local_f0;
                uVar5 = local_f8;
                uVar19 = uVar20;
                uVar16 = local_f4;
              } while (uVar10 < local_f8);
            }
            local_res18 = (uint *)((longlong)local_res18 + uVar8);
            uVar20 = uVar19 + uVar18;
          } while (uVar20 < uVar16);
        }
      }
      else {
        FUN_1800a3fc8(&local_98,param_2,&local_d0,(undefined8 *)local_108);
      }
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                        (*(longlong **)(param_1 + 0x20),param_2,0,0);
      if (-1 < iVar3) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
                  (*(longlong **)(param_1 + 0x20),param_2,0,param_3,CONCAT44(uVar21,local_res20),
                   CONCAT44(uVar22,param_5));
        bVar12 = extraout_var >> 7 ^ 1;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                  (*(longlong **)(param_1 + 0x20),param_2,0);
      }
    }
  }
  if (local_d8 != (uint *)0x0) {
    FUN_1800fbcf0(local_d8);
  }
  return bVar12;
}

