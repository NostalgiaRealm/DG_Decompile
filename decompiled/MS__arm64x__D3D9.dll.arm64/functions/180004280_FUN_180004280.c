/*
 * FUN_180004280 at 180004280
 * undefined FUN_180004280(void)
 * Address ranges: 180004280-180004c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180004280(longlong param_1,longlong *param_2,undefined8 *param_3,uint param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong extraout_x10;
  longlong lVar21;
  ulonglong extraout_x12;
  ulonglong extraout_x13;
  longlong extraout_x14;
  longlong extraout_x15;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong extraout_d17;
  int iVar27;
  int extraout_var;
  uint local_13c;
  undefined4 local_138;
  int local_134;
  uint local_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  uint local_110;
  int local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong *local_f0;
  ulonglong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  longlong *local_b0;
  undefined8 local_a0;
  ulonglong uStack_98;
  uint local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_70;
  ulonglong uStack_68;
  undefined8 *local_60;
  ulonglong uStack_58;
  
  lVar21 = param_2[1];
  uStack_e8 = param_2[0xc];
  local_f0 = (longlong *)param_2[0xb];
  lVar20 = param_3[1];
  local_104 = *(undefined4 *)(lVar21 + 0x98);
  uVar24 = param_3[10];
  uStack_58 = param_3[0xc];
  local_60 = (undefined8 *)param_3[0xb];
  plVar25 = *(longlong **)(lVar21 + 0x70);
  local_100 = *(undefined4 *)(lVar21 + 0x94);
  plVar23 = *(longlong **)(lVar20 + 0x70);
  iVar27 = (int)(uVar24 >> 0x20);
  uVar1 = *(undefined4 *)(lVar20 + 0x94);
  uVar2 = *(undefined4 *)(lVar20 + 0x98);
  local_134 = (int)((ulonglong)param_2[10] >> 0x20);
  local_118 = param_6;
  local_b0 = param_6;
  local_88 = param_1;
  if (local_134 == 3) {
    if (iVar27 == 3) {
      uVar14 = *(uint *)(lVar21 + 0x20);
      if (uVar14 == 0) {
        uVar14 = (uint)*(byte *)(lVar21 + 0x26);
      }
      FUN_180004100(param_1,param_2[8],param_3[8],*(undefined4 *)(lVar21 + 0x18),
                    *(undefined4 *)(lVar20 + 0x18),*(undefined1 *)(lVar21 + 0x24),
                    *(undefined1 *)(lVar21 + 0x25),uVar14,param_4,param_5,param_6);
      return 1;
    }
    if (iVar27 != 1) goto LAB_1800043ec;
    bVar5 = true;
    cVar11 = (**(code **)(*plVar23 + 0x28))(plVar23,uVar1,uVar2);
    if ((cVar11 == '\0') && (uVar15 = FUN_18000c0d8(param_3,&local_128,0,0,0,0), -1 < (int)uVar15))
    {
      lVar20 = param_2[1];
      uVar14 = *(uint *)(lVar20 + 0x20);
      if (uVar14 == 0) {
        uVar14 = (uint)*(byte *)(lVar20 + 0x26);
      }
      FUN_180004100(uVar15,param_2[8],local_120,*(undefined4 *)(lVar20 + 0x18),
                    (ulonglong)local_128 & 0xffffffff,*(undefined1 *)(lVar20 + 0x24),
                    *(undefined1 *)(lVar20 + 0x25),uVar14,param_4,param_5,local_118);
      FUN_18000ca28(param_3,0);
      bVar5 = false;
    }
  }
  else {
LAB_1800043ec:
    bVar5 = true;
    if (((((local_134 != 3) && (iVar27 == 1)) &&
         (cVar11 = (**(code **)(*plVar23 + 0x28))(plVar23,uVar1,uVar2), cVar11 == '\0')) &&
        ((cVar11 = (**(code **)(*plVar25 + 0x28))(plVar25,uVar1,uVar2), cVar11 == '\0' &&
         (*(longlong *)(param_2[1] + 0x28) != 0)))) &&
       (iVar12 = FUN_18000c0d8(param_3,&local_a0,0,0,1,0), -1 < iVar12)) {
      local_128 = (longlong *)0x0;
      local_120 = 0;
      uVar15 = FUN_18000c0d8(param_2,&local_70,&local_128,0x10,1,0);
      if (-1 < (int)uVar15) {
        lVar20 = param_2[1];
        uVar14 = *(uint *)(lVar20 + 0x20);
        if (uVar14 == 0) {
          uVar14 = (uint)*(byte *)(lVar20 + 0x26);
        }
        FUN_180004100(uVar15,uStack_68,uStack_98,(ulonglong)local_70 & 0xffffffff,
                      (ulonglong)local_a0 & 0xffffffff,*(undefined1 *)(lVar20 + 0x24),
                      *(undefined1 *)(lVar20 + 0x25),uVar14,param_4,param_5,local_b0);
        bVar5 = false;
        FUN_18000ca28(param_2,1);
      }
      FUN_18000ca28(param_3,0);
    }
  }
  if (!bVar5) {
    return 1;
  }
  iVar12 = *(int *)(param_3 + 0xe);
  local_138 = uVar1;
  local_108 = iVar12;
  local_fc = uVar2;
  if ((local_134 == 3) && (iVar27 != 3)) {
    plVar16 = (longlong *)
              (**(code **)(**(longlong **)(local_88 + 0xe98) + 0x58))
                        (*(longlong **)(local_88 + 0xe98),uStack_e8 & 0xffffffff,uStack_e8 >> 0x20,
                         iVar12,1,0,1);
    local_104 = 0;
    local_100 = 0;
    local_10c = iVar12;
    local_80 = plVar16;
  }
  else {
    iVar12 = (int)param_2[0xe];
    plVar16 = (longlong *)0x0;
    local_10c = iVar12;
    local_80 = plVar25;
    if ((local_134 != 3) && (iVar27 == 3)) {
      plVar23 = (longlong *)
                (**(code **)(**(longlong **)(local_88 + 0xe98) + 0x58))
                          (*(longlong **)(local_88 + 0xe98),uStack_58 & 0xffffffff,uStack_58 >> 0x20
                           ,iVar12,1,0,1);
      local_fc = 0;
      local_138 = 0;
      plVar16 = plVar23;
      local_108 = iVar12;
    }
  }
  if ((local_80 == (longlong *)0x0) || (plVar23 == (longlong *)0x0)) {
    uVar14 = 0;
    goto LAB_180004c2c;
  }
  uVar14 = 1;
  if (((*(int *)(*(longlong *)(param_2[1] + 0x70) + 8) == 2) && ((uVar24 & 0xfffffffd00000000) == 0)
      ) && (*(int *)(*(longlong *)(param_3[1] + 0x70) + 8) != 2)) {
    uVar15 = param_3[0xc];
    lVar20 = param_3[6];
    if ((lVar20 != 0) && (*(short *)(lVar20 + 0x3c) != 0)) {
      uVar15 = *(undefined8 *)(**(longlong **)(lVar20 + 0x40) + 0x60);
    }
    lVar20 = param_3[5];
    uVar17 = FUN_180006038(lVar20,&local_128);
    local_110 = (uint)uVar15;
    if (local_128._4_4_ == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x180004654);
      (*pcVar10)();
    }
    uVar19 = 0;
    if (local_128._4_4_ != 0) {
      uVar19 = (local_110 * (int)local_128) / local_128._4_4_;
    }
    local_13c = (uint)((ulonglong)uVar15 >> 0x20);
    *(uint *)((longlong)param_3 + 0x74) = uVar19;
    if (local_120._4_4_ == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x180004674);
      (*pcVar10)();
    }
    uVar19 = 0;
    if (local_120._4_4_ != 0) {
      uVar19 = (local_13c * (int)local_120) / local_120._4_4_;
    }
    *(uint *)(param_3 + 0xf) = uVar19;
    FUN_180002fb0(uVar17,*(undefined4 *)(lVar20 + 0xea8),*(undefined4 *)(lVar20 + 0xe68),
                  extraout_d17 & 0xffffffff,extraout_d17 >> 0x20);
    uVar19 = 1;
    local_90 = 6;
    if (extraout_var != 5) {
      local_90 = 1;
    }
    if (extraout_x14 != 0) {
      uVar19 = (uint)*(ushort *)(extraout_x14 + 0x3c);
    }
    plVar23 = *(longlong **)(extraout_x15 + 0x68);
    local_70 = plVar23;
    func_0x000180117fe8(param_3);
    plVar23 = (longlong *)
              (**(code **)(*plVar23 + 0x50))
                        (plVar23,extraout_x13 & 0xffffffff,extraout_x12 & 0xffffffff,local_110,
                         local_13c);
    if (plVar23 != (longlong *)0x0) {
      (**(code **)*param_3)(param_3);
      *(undefined1 *)(param_3[1] + 0xee) = 0;
      (**(code **)(*plVar23 + 0x88))(plVar23);
      plVar25 = local_70;
      uVar8 = local_90;
      uVar7 = local_110;
      uVar6 = local_13c;
      lVar20 = param_3[1];
      uVar14 = 0;
      uStack_12c = 1;
      plVar18 = *(longlong **)(lVar20 + 0x70);
      *(uint *)(lVar20 + 0x100) = *(uint *)(lVar20 + 0x100) | 1;
      local_b4 = 1;
      local_c0 = 0;
      local_b8 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_130 = param_4;
      local_128 = param_5;
      local_118 = plVar16;
      local_f0 = plVar18;
      local_a0 = param_2;
      local_60 = param_3;
      do {
        uVar22 = 0;
        if (uVar19 != 0) {
          do {
            uVar3 = uVar6 >> (ulonglong)(uVar22 & 0x1f);
            if (uVar3 == 0) {
              uVar3 = 1;
            }
            uVar4 = uVar7 >> (ulonglong)(uVar22 & 0x1f);
            if (uVar4 == 0) {
              uVar4 = 1;
            }
            (*__imp_USER32_dll_SetRect)(&local_d0,0,0,uVar4,uVar3);
            (**(code **)(*plVar25 + 0x108))
                      (plVar25,uVar22,uVar14,uVar22,uVar14,plVar23,plVar18,&local_e0);
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar19);
        }
        param_3 = local_60;
        param_2 = local_a0;
        plVar16 = local_118;
        param_5 = local_128;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar8);
      lVar20 = local_60[6];
      if (lVar20 == 0) {
        *(longlong **)(local_60[1] + 0x70) = plVar23;
      }
      else {
        *(longlong **)(lVar20 + 0x58) = plVar23;
        uVar14 = 0;
        if (*(int *)(lVar20 + 0x80) != 0) {
          do {
            uVar19 = 0;
            if (*(short *)(lVar20 + 0x3c) != 0) {
              do {
                lVar26 = *(longlong *)
                          (*(longlong *)(lVar20 + 0x40) + (ulonglong)(uVar19 + uVar14 * 0x10) * 8);
                lVar21 = *(longlong *)(lVar26 + 8);
                (**(code **)(**(longlong **)(lVar21 + 0x70) + 0x30))
                          (*(longlong **)(lVar21 + 0x70),*(undefined4 *)(lVar21 + 0x94),
                           *(undefined4 *)(lVar21 + 0x98),1);
                uVar19 = uVar19 + 1;
                *(longlong **)(*(longlong *)(lVar26 + 8) + 0x70) = plVar23;
              } while (uVar19 < *(ushort *)(lVar20 + 0x3c));
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(lVar20 + 0x80));
        }
      }
      uVar14 = uStack_12c;
      param_4 = local_130;
      FUN_180005df8(param_3[5],param_3);
      (**(code **)(*local_f0 + 0x20))();
    }
    plVar23 = *(longlong **)(param_3[1] + 0x70);
  }
  if (local_134 == 3) {
    local_f0 = (longlong *)0x0;
    local_13c = 0;
    uVar15 = (**(code **)(*plVar16 + 0x58))(plVar16,0,0,2,1,&local_f0,&local_13c);
    if ((int)uVar15 == 0) {
      lVar20 = param_2[1];
      uVar19 = *(uint *)(lVar20 + 0x20);
      if (uVar19 == 0) {
        uVar19 = (uint)*(byte *)(lVar20 + 0x26);
      }
      FUN_180004100(uVar15,param_2[8],local_f0,*(undefined4 *)(lVar20 + 0x18),local_13c,
                    *(undefined1 *)(lVar20 + 0x24),*(undefined1 *)(lVar20 + 0x25),uVar19,param_4,
                    param_5,local_b0);
    }
    else {
      uVar14 = 0;
    }
    FUN_18000bc70(param_3,0);
    if (uVar14 != 0) goto LAB_180004998;
  }
  else {
    FUN_18000bc70(param_3,param_2);
LAB_180004998:
    plVar25 = local_b0;
    uVar24 = 0;
    puVar9 = param_3;
    if (param_4 != 0) {
      do {
        local_60 = puVar9;
        local_118 = plVar16;
        local_128 = plVar23;
        uStack_98 = (param_5 + uVar24 * 2)[1];
        local_70 = (longlong *)param_5[uVar24 * 2];
        local_a0 = local_70;
        if (plVar25 != (longlong *)0x0) {
          local_a0._0_4_ = (int)local_70;
          local_a0._4_4_ = (int)((ulonglong)local_70 >> 0x20);
          iVar12 = *(int *)((longlong)plVar25 + uVar24 * 8 + 4) - local_a0._4_4_;
          iVar13 = (int)plVar25[uVar24] - (int)local_a0;
          uStack_68 = uStack_98;
          (*__imp_USER32_dll_OffsetRect)(&local_a0,iVar13,iVar12);
        }
        local_70 = local_a0;
        uStack_68 = uStack_98;
        iVar12 = func_0x000180107140((int)param_2[9]);
        iVar13 = func_0x0001801071f0(extraout_x10 & 0xffffffff);
        local_c0 = 0;
        local_b4 = 1;
        plVar23 = *(longlong **)(local_88 + 0xe98);
        uStack_d8 = 0;
        local_e0 = 0;
        local_c8 = 0;
        local_d0 = 0;
        local_b8 = 0x10100;
        (*__imp_USER32_dll_SetRect)
                  (&local_d0,(int)param_5[uVar24 * 2],
                   *(undefined4 *)((longlong)param_5 + uVar24 * 0x10 + 4),
                   (int)param_5[uVar24 * 2 + 1],
                   *(undefined4 *)((longlong)param_5 + uVar24 * 0x10 + 0xc));
        (*__imp_USER32_dll_SetRect)
                  (&local_e0,(ulonglong)local_70 & 0xffffffff,(ulonglong)local_70 >> 0x20,
                   uStack_68 & 0xffffffff,uStack_68 >> 0x20);
        if ((local_10c == local_108) && (local_10c - 0xeU < 7)) {
          uVar14 = -iVar12;
          uVar19 = -iVar13;
          local_d0 = CONCAT44(local_d0._4_4_ & uVar19,(uint)local_d0 & uVar14);
          local_c8 = CONCAT44((local_c8._4_4_ + iVar13) - 1U & uVar19,
                              ((int)local_c8 + iVar12) - 1U & uVar14);
          local_e0 = CONCAT44(local_e0._4_4_ & uVar19,(uint)local_e0 & uVar14);
          uStack_d8 = CONCAT44((uStack_d8._4_4_ + iVar13) - 1U & uVar19,
                               ((int)uStack_d8 + iVar12) - 1U & uVar14);
        }
        iVar12 = (*__imp_USER32_dll_IsRectEmpty)(&local_d0);
        uVar14 = 1;
        if ((iVar12 == 0) &&
           (iVar12 = (*__imp_USER32_dll_IsRectEmpty)(&local_e0), uVar14 = 1, iVar12 == 0)) {
          uVar14 = (**(code **)(*plVar23 + 0x108))
                             (plVar23,local_138,local_fc,local_100,local_104,local_128,local_80,
                              &local_e0);
          uVar14 = uVar14 & 1;
        }
        uVar19 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar19;
        plVar23 = local_128;
        plVar16 = local_118;
        puVar9 = local_60;
      } while (uVar19 < param_4);
      param_3 = local_60;
      if (uVar14 == 0) goto LAB_180004c0c;
    }
    if (iVar27 == 3) {
      local_f0 = (longlong *)0x0;
      local_138 = 0;
      uVar15 = (**(code **)(*plVar16 + 0x58))(plVar16,0,0,2,1,&local_f0,&local_138);
      if ((int)uVar15 == 0) {
        lVar20 = param_3[1];
        uVar19 = *(uint *)(lVar20 + 0x20);
        if (uVar19 == 0) {
          uVar19 = (uint)*(byte *)(lVar20 + 0x26);
        }
        FUN_180004100(uVar15,local_f0,param_3[8],local_138,*(undefined4 *)(lVar20 + 0x18),
                      *(undefined1 *)(lVar20 + 0x24),*(undefined1 *)(lVar20 + 0x25),uVar19,param_4,
                      param_5,local_b0);
      }
      else {
        uVar14 = 0;
      }
    }
    if (param_3[6] != 0) {
      *(undefined1 *)(param_3[6] + 0x89) = 0;
    }
  }
LAB_180004c0c:
  if (*(longlong *)(param_3[1] + 0x70) != 0) {
    FUN_180005df8(param_3[5],param_3);
  }
LAB_180004c2c:
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  return uVar14;
}

