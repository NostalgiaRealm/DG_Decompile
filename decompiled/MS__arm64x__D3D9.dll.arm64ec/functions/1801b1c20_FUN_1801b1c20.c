/*
 * FUN_1801b1c20 at 1801b1c20
 * undefined FUN_1801b1c20(void)
 * Address ranges: 1801b1c20-1801b24cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801b1c20(longlong param_1,uint param_2,longlong param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint extraout_w10;
  int extraout_w11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 uVar21;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  longlong local_230;
  longlong local_228;
  undefined8 local_220 [2];
  undefined8 local_210;
  longlong lStack_208;
  uint local_200;
  uint uStack_1fc;
  int local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  code *local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  longlong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  longlong lStack_1a8;
  longlong local_1a0;
  longlong lStack_198;
  longlong local_190;
  longlong local_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong local_160;
  longlong lStack_158;
  longlong local_150;
  longlong local_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong local_120;
  longlong lStack_118;
  int local_110 [6];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [32];
  undefined4 local_c0;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [56];
  
  lVar14 = *(longlong *)(param_1 + 0x18);
  uStack_1b8 = 0;
  local_1c0 = 0;
  uVar8 = *(uint *)(lVar14 + 0x28);
  lVar19 = *(longlong *)(lVar14 + 0x1cf10);
  local_234 = param_4;
  local_230 = param_3;
  if (*(char *)(param_1 + -3) == '\0') {
    local_190 = 0;
  }
  else {
    plVar10 = (longlong *)
              FUN_1801bb310(param_1 + -0x20,auStack_f8,lVar14,param_2,param_3,param_4,param_5);
    local_230 = *plVar10;
    iVar7 = (int)plVar10[1];
    local_234 = iVar7 << 2;
    param_5 = (int)((ulonglong)plVar10[1] >> 0x20) * iVar7 * 4;
    local_190 = local_230;
  }
  local_1e0 = (code *)__hybrid_os_arm64x_dispatch_icall;
  uVar11 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar7 = (*extraout_x11)(uVar11,local_110,0);
  uVar20 = 0;
  if (iVar7 < 0) goto LAB_1801b246c;
  lVar14 = lVar19 + (ulonglong)uVar8 * 0x1ac0;
  uVar12 = FUN_180221e50(lVar14 + 0x1bc0);
  if (((uVar12 & 1) != 0) && (local_110[0] == 4)) {
    local_220[0] = *(undefined8 *)(param_1 + 0x20);
    lVar19 = *(longlong *)(lVar19 + 0x1b500);
    local_240 = param_2;
    local_228 = lVar19;
    thunk_FUN_1802236f8(lVar19 + 0x28);
    bVar6 = true;
    lVar19 = FUN_18020ec30(lVar19,local_220);
    if (lVar19 != 0) {
      plVar10 = (longlong *)FUN_18020ee08(lVar19 + 8,&local_240);
      if (plVar10 == (longlong *)0x0) {
        local_240 = 0xffffffff;
        plVar10 = (longlong *)FUN_18020ee08(lVar19 + 8,&local_240);
        if (plVar10 == (longlong *)0x0) goto LAB_1801b1ddc;
      }
      if ((*(int *)((longlong)plVar10 + 0x14) == 0) || (*(int *)(*plVar10 + 0x30) == 3)) {
        (*local_1e0)(0x180224000);
        uVar12 = (*extraout_x11_00)();
        bVar6 = true;
        if ((ulonglong)plVar10[3] <= uVar12) goto LAB_1801b1ddc;
      }
      bVar6 = false;
    }
LAB_1801b1ddc:
    thunk_FUN_18022370c(local_228 + 0x28);
    pcVar5 = local_1e0;
    if (bVar6) {
      uVar11 = (*local_1e0)(0x180224000);
      iVar7 = (*extraout_x11_01)(uVar11,param_2,0,0);
      if (-1 < iVar7) {
        uVar11 = (*pcVar5)(0x180224000);
        uVar8 = (*extraout_x11_02)(uVar11,param_2,0,local_230,local_234,param_5);
        uVar11 = (*pcVar5)(0x180224000);
        (*extraout_x11_03)(uVar11,param_2,0);
        uVar20 = ~uVar8 >> 0x1f;
      }
      goto LAB_1801b246c;
    }
  }
  lVar19 = local_230;
  local_238 = *(uint *)(param_1 + -0x18) >> (ulonglong)(param_2 & 0x1f);
  if (local_238 == 0) {
    local_238 = 1;
  }
  uVar8 = *(uint *)(param_1 + -0x14) >> (ulonglong)(param_2 & 0x1f);
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  local_23c = *(uint *)(param_1 + -0x10) >> (ulonglong)(param_2 & 0x1f);
  if (local_23c == 0) {
    local_23c = 1;
  }
  bVar1 = (&DAT_18022dc08)[*(uint *)(param_1 + -0xc)];
  if (bVar1 != 0) {
    local_238 = (bVar1 + local_238) - 1 & -(uint)bVar1;
  }
  bVar1 = (&DAT_18022dc38)[*(uint *)(param_1 + -0xc)];
  if (bVar1 != 0) {
    uVar8 = (bVar1 + uVar8) - 1 & -(uint)bVar1;
  }
  local_210 = 0;
  lVar18 = *(longlong *)(lVar14 + 0x1e08);
  local_1d0 = *(undefined8 *)(param_1 + 0x20);
  lStack_208 = (ulonglong)local_238 << 0x20;
  local_240 = local_234;
  local_228 = param_1 + -0x20;
  local_200 = uVar8;
  uStack_1fc = local_23c;
  FUN_18020b310(lVar18,&local_1c0,local_1d0,lVar14 + 0x1fd0,&local_210,local_230,local_234,param_5);
  if (uStack_1b8 == 0) {
    FUN_180221ec0(lVar14 + 0x1bc0);
    local_220[0] = *(undefined8 *)(lVar18 + 0xb78);
    FUN_180207560(lVar18 + 8,0);
    FUN_18020c3b0(*(undefined8 *)(lVar18 + 0xb10),local_220[0]);
    plVar10 = (longlong *)
              FUN_18020b310(lVar18,auStack_a8,local_1d0,lVar14 + 0x1fd0,&local_210,lVar19,local_240,
                            param_5);
    uStack_1b8 = plVar10[1];
    local_1c0 = *plVar10;
    lStack_1a8 = plVar10[3];
    local_1b0 = plVar10[2];
    lStack_198 = plVar10[5];
    local_1a0 = plVar10[4];
  }
  uVar20 = 1;
  if (uStack_1b8 == 0) {
    uVar11 = (*local_1e0)(0x180224000);
    (*extraout_x11_04)(uVar11,auStack_e0);
    FUN_18020d2b0(local_c0);
    FUN_18020d308(extraout_x12 & 0xffffffff);
    iVar9 = FUN_18020d208(extraout_x12_00 & 0xffffffff);
    iVar7 = extraout_w11;
    if (extraout_w11 == 0) {
      iVar7 = iVar9;
    }
    if (extraout_w10 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1801b217c);
      (*pcVar5)();
    }
    uVar2 = 0;
    if (extraout_w10 != 0) {
      uVar2 = (iVar7 * local_238) / extraout_w10;
    }
    uVar2 = uVar2 + 0xff & 0xffffff00;
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1801b2194);
      (*pcVar5)();
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = 0x1000000 / uVar2;
    }
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1801b21a0);
      (*pcVar5)();
    }
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar3 / uVar8;
    }
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    if (local_23c != 0) {
      local_220[0] = CONCAT44(uStack_1fc,local_200);
      uVar17 = 0;
      local_1e0 = (code *)CONCAT44(local_1e0._4_4_,uVar2 * param_5);
      local_240 = 1;
      uVar16 = local_23c;
      local_1f0 = param_5;
      local_1ec = param_2;
      local_1e4 = uVar2;
      local_1d8 = uVar3;
      local_150 = param_1;
      do {
        if (uVar8 != 0) {
          uVar20 = uVar17 + local_1e4;
          if (uVar16 <= uVar17 + local_1e4) {
            uVar20 = uVar16;
          }
          local_1d0 = CONCAT44(local_1d0._4_4_,uVar20);
          uVar20 = 0;
          local_23c = uVar16;
          local_1e8 = uVar17;
          do {
            local_1c0 = (ulonglong)uVar20 << 0x20;
            lVar19 = *(longlong *)(lVar14 + 0x1e08);
            uStack_1b8 = CONCAT44(local_238,local_1e8);
            uVar20 = uVar20 + local_1d8;
            uVar2 = uVar20;
            if (uVar8 <= uVar20) {
              uVar2 = uVar8;
            }
            local_1b0 = CONCAT44((undefined4)local_1d0,uVar2);
            uVar11 = *(undefined8 *)(local_150 + 0x20);
            FUN_18020b310(lVar19,&local_180,uVar11,lVar14 + 0x1fd0,&local_1c0,local_230,local_234,
                          local_1f0);
            if (lStack_178 == 0) {
              FUN_180221ec0(lVar14 + 0x1bc0);
              uVar21 = *(undefined8 *)(lVar19 + 0xb78);
              FUN_180207560(lVar19 + 8,0);
              FUN_18020c3b0(*(undefined8 *)(lVar19 + 0xb10),uVar21);
              plVar10 = (longlong *)
                        FUN_18020b310(lVar19,auStack_78,uVar11,lVar14 + 0x1fd0,&local_1c0,local_230,
                                      local_234,local_1f0);
              uVar17 = local_23c;
              lStack_178 = plVar10[1];
              local_180 = *plVar10;
              lStack_168 = plVar10[3];
              lStack_170 = plVar10[2];
              lStack_158 = plVar10[5];
              local_160 = plVar10[4];
              if (lStack_178 == 0) {
                FUN_1801ed3b8(s__dgVoodoo__D3D12_Core__FATAL_ERR_180238ff0,
                              s_an_upload_heap_buffer_18022b8d0);
                thunk_FUN_180223720();
                local_240 = 0;
                uVar16 = uVar17;
                break;
              }
            }
            lStack_138 = lStack_178;
            local_140 = local_180;
            lStack_128 = lStack_168;
            lStack_130 = lStack_170;
            lStack_118 = lStack_158;
            local_120 = local_160;
            FUN_180221850(lVar14 + 0x1bc0);
            bVar4 = true;
            bVar6 = *(char *)(lVar14 + 0x1dc4) == '\0';
            if (*(char *)(lVar14 + 0x1dc4) != '\0') {
              puVar13 = (undefined8 *)FUN_1802218b0(lVar14 + 0x1bc0,0x58);
              if (puVar13 == (undefined8 *)0x0) {
                FUN_180221bb0(lVar14 + 0x1bc0);
                thunk_FUN_1802237c0(100);
                FUN_180221850(lVar14 + 0x1bc0);
                bVar6 = true;
              }
              else {
                FUN_1801042e0(lVar14 + 0x1dc0);
                puVar13[1] = 0x58;
                puVar13[2] = local_228;
                *(uint *)(puVar13 + 3) = local_1ec;
                *(longlong *)((longlong)puVar13 + 0x24) = lStack_138;
                *(longlong *)((longlong)puVar13 + 0x1c) = local_140;
                *(longlong *)((longlong)puVar13 + 0x34) = lStack_128;
                *(longlong *)((longlong)puVar13 + 0x2c) = lStack_130;
                *(longlong *)((longlong)puVar13 + 0x44) = lStack_118;
                *(longlong *)((longlong)puVar13 + 0x3c) = local_120;
                *(longlong *)((longlong)puVar13 + 0x54) = lStack_208;
                *(undefined8 *)((longlong)puVar13 + 0x4c) = local_210;
                *(undefined8 *)((longlong)puVar13 + 0x5c) = local_220[0];
                puVar15 = (undefined8 *)((longlong)puVar13 + 0x6bU & 0xfffffffffffffff8);
                DataMemoryBarrier(2,3);
                *puVar15 = 0;
                *puVar13 = FUN_1801b24d0;
                *(undefined8 **)(lVar14 + 0x1c50 + (ulonglong)*(uint *)(lVar14 + 0x1dbc) * 0x28) =
                     puVar15;
                if (*(char *)(lVar14 + 0x1dc5) != '\0') {
                  FUN_180221bb0(lVar14 + 0x1bc0);
                  bVar4 = false;
                  thunk_FUN_180223874(*(undefined8 *)(lVar14 + 0x1c40));
                }
              }
            }
            if (bVar6) {
              plVar10 = *(longlong **)(lVar14 + 0x1da0);
              *plVar10 = local_228;
              *(uint *)(plVar10 + 1) = local_1ec;
              *(longlong *)((longlong)plVar10 + 0x14) = lStack_138;
              *(longlong *)((longlong)plVar10 + 0xc) = local_140;
              *(longlong *)((longlong)plVar10 + 0x24) = lStack_128;
              *(longlong *)((longlong)plVar10 + 0x1c) = lStack_130;
              *(longlong *)((longlong)plVar10 + 0x34) = lStack_118;
              *(longlong *)((longlong)plVar10 + 0x2c) = local_120;
              *(longlong *)((longlong)plVar10 + 0x44) = lStack_208;
              *(undefined8 *)((longlong)plVar10 + 0x3c) = local_210;
              *(undefined8 *)((longlong)plVar10 + 0x4c) = local_220[0];
              FUN_1801b24d0();
            }
            if (bVar4) {
              FUN_180221bb0(lVar14 + 0x1bc0);
            }
            uVar17 = local_1e8;
            uVar16 = local_23c;
          } while (uVar20 < uVar8);
        }
        local_230 = local_230 + ((ulonglong)local_1e0 & 0xffffffff);
        uVar17 = uVar17 + local_1e4;
        uVar20 = local_240;
      } while (uVar17 < uVar16);
    }
    goto LAB_1801b246c;
  }
  lStack_178 = uStack_1b8;
  local_180 = local_1c0;
  lStack_168 = lStack_1a8;
  lStack_170 = local_1b0;
  lStack_158 = lStack_198;
  local_160 = local_1a0;
  FUN_180221850(lVar14 + 0x1bc0);
  local_210 = 0;
  lStack_208 = (ulonglong)local_238 << 0x20;
  uStack_1fc = local_23c;
  local_200 = uVar8;
  if (*(char *)(lVar14 + 0x1dc4) == '\0') {
LAB_1801b20d4:
    plVar10 = *(longlong **)(lVar14 + 0x1da0);
    *plVar10 = local_228;
    *(uint *)(plVar10 + 1) = param_2;
    *(longlong *)((longlong)plVar10 + 0x14) = lStack_178;
    *(longlong *)((longlong)plVar10 + 0xc) = local_180;
    *(longlong *)((longlong)plVar10 + 0x24) = lStack_168;
    *(longlong *)((longlong)plVar10 + 0x1c) = lStack_170;
    *(longlong *)((longlong)plVar10 + 0x34) = lStack_158;
    *(longlong *)((longlong)plVar10 + 0x2c) = local_160;
    *(longlong *)((longlong)plVar10 + 0x44) = lStack_208;
    *(undefined8 *)((longlong)plVar10 + 0x3c) = local_210;
    *(ulonglong *)((longlong)plVar10 + 0x4c) = CONCAT44(uStack_1fc,local_200);
    FUN_1801b24d0();
  }
  else {
    puVar13 = (undefined8 *)FUN_1802218b0(lVar14 + 0x1bc0,0x58);
    if (puVar13 == (undefined8 *)0x0) {
      FUN_180221bb0(lVar14 + 0x1bc0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar14 + 0x1bc0);
      goto LAB_1801b20d4;
    }
    FUN_1801042e0(lVar14 + 0x1dc0);
    puVar13[1] = 0x58;
    puVar13[2] = local_228;
    *(uint *)(puVar13 + 3) = param_2;
    *(longlong *)((longlong)puVar13 + 0x24) = lStack_178;
    *(longlong *)((longlong)puVar13 + 0x1c) = local_180;
    *(longlong *)((longlong)puVar13 + 0x34) = lStack_168;
    *(longlong *)((longlong)puVar13 + 0x2c) = lStack_170;
    *(longlong *)((longlong)puVar13 + 0x44) = lStack_158;
    *(longlong *)((longlong)puVar13 + 0x3c) = local_160;
    puVar15 = (undefined8 *)((longlong)puVar13 + 0x6bU & 0xfffffffffffffff8);
    *(longlong *)((longlong)puVar13 + 0x54) = lStack_208;
    *(undefined8 *)((longlong)puVar13 + 0x4c) = local_210;
    *(ulonglong *)((longlong)puVar13 + 0x5c) = CONCAT44(uStack_1fc,local_200);
    DataMemoryBarrier(2,3);
    *puVar15 = 0;
    *puVar13 = FUN_1801b24d0;
    *(undefined8 **)(lVar14 + (ulonglong)*(uint *)(lVar14 + 0x1dbc) * 0x28 + 0x1c50) = puVar15;
    if (*(char *)(lVar14 + 0x1dc5) != '\0') {
      FUN_180221bb0(lVar14 + 0x1bc0);
      thunk_FUN_180223874(*(undefined8 *)(lVar14 + 0x1c40));
      goto LAB_1801b246c;
    }
  }
  FUN_180221bb0(lVar14 + 0x1bc0);
LAB_1801b246c:
  if (local_190 != 0) {
    FUN_1802229d8();
  }
  return uVar20;
}

