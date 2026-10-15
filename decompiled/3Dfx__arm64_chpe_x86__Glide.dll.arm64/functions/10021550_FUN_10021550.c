/*
 * FUN_10021550 at 10021550
 * undefined FUN_10021550(void)
 * Address ranges: 10021550-10022323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10021550(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  int *piVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
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
  code *pcVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  code *local_2b0 [4];
  undefined8 local_2a0;
  undefined8 uStack_298;
  ulonglong local_290;
  int *local_280;
  int *local_27c;
  int *local_278;
  int *local_274;
  int *local_270;
  int *local_26c;
  undefined4 local_268;
  int *local_264;
  int *local_260;
  int *local_25c;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulonglong local_230;
  uint local_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a0;
  longlong lStack_198;
  undefined4 local_190;
  undefined8 uStack_18c;
  longlong lStack_184;
  undefined4 local_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 uStack_164;
  longlong lStack_15c;
  undefined4 local_154;
  undefined8 local_150;
  longlong lStack_148;
  undefined4 local_140;
  undefined8 uStack_13c;
  longlong lStack_134;
  undefined4 local_12c;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 uStack_ec;
  longlong lStack_e4;
  undefined4 local_dc;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined8 uStack_c4;
  longlong lStack_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined4 local_a0;
  undefined8 uStack_9c;
  longlong lStack_94;
  undefined4 local_8c;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined8 uStack_74;
  longlong lStack_6c;
  undefined4 local_64;
  undefined8 local_60;
  longlong lStack_58;
  undefined4 local_50;
  
  local_26c = param_1 + 0x3000;
  param_1[2] = param_3;
  uVar11 = DAT_1009f7ac;
  param_1[1] = (int)param_2;
  local_264 = param_2;
  local_258 = param_4;
  iVar10 = FUN_10068d68(uVar11,&PTR_s_DGD3D12ROOT_1009e160,0);
  piVar1 = param_1 + 0xc60;
  *piVar1 = iVar10;
  if (iVar10 == 0) {
    return 0;
  }
  local_260 = param_1 + 0xc6f;
  param_1[0xc71] = 0;
  param_1[0xc72] = 0;
  local_260[0] = 0;
  local_260[1] = 0;
  param_1[0xc75] = 0;
  param_1[0xc76] = 0;
  param_1[0xc73] = 0;
  param_1[0xc74] = 0;
  param_1[0xc79] = 0;
  param_1[0xc7a] = 0;
  param_1[0xc77] = 0;
  param_1[0xc78] = 0;
  param_1[0xc7d] = 0;
  param_1[0xc7e] = 0;
  param_1[0xc7b] = 0;
  param_1[0xc7c] = 0;
  param_1[0xc81] = 0;
  param_1[0xc82] = 0;
  param_1[0xc7f] = 0;
  param_1[0xc80] = 0;
  param_1[0xc85] = 0;
  param_1[0xc86] = 0;
  param_1[0xc83] = 0;
  param_1[0xc84] = 0;
  param_1[0xc89] = 0;
  param_1[0xc8a] = 0;
  param_1[0xc87] = 0;
  param_1[0xc88] = 0;
  param_1[0xc8d] = 0;
  param_1[0xc8e] = 0;
  param_1[0xc8b] = 0;
  param_1[0xc8c] = 0;
  if (*param_2 == 5) {
    uVar11 = 0xb000;
  }
  else {
    uVar11 = 0xb000;
    if (*param_2 == 6) {
      uVar11 = 0xc000;
    }
  }
  piVar2 = param_1 + 0xc61;
  uVar13 = FUN_1005b0f0(*piVar1,*piVar2,uVar11);
  uVar16 = uStack_298._4_4_;
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  uStack_298 = (ulonglong)uStack_298._4_4_ << 0x20;
  lStack_198 = uStack_298;
  local_190 = 0;
  piVar3 = param_1 + 0xc62;
  local_17c = 0;
  *piVar3 = *piVar1 + *piVar2 * 0x16c0 + 0x6c0;
  pcVar15 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_184 = uStack_298;
  local_1a0 = 2;
  uStack_298 = CONCAT44(uVar16,&DAT_10096da0);
  uStack_170 = uStack_298;
  local_168 = 5;
  uStack_18c = 0x100000002;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_15c = uStack_298;
  local_154 = 5;
  uStack_178 = 0x100000000;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_148 = uStack_298;
  local_140 = 5;
  uStack_164 = 0x800000003;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_134 = uStack_298;
  local_12c = 5;
  local_150 = 0x900000003;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_120 = uStack_298;
  local_118 = 5;
  uStack_13c = 0xa00000003;
  uStack_298 = CONCAT44(uVar16,&DAT_10096c20);
  uStack_10c = uStack_298;
  local_104 = 5;
  uStack_128 = 0xc00000003;
  uStack_298 = CONCAT44(uVar16,&DAT_10096d88);
  uStack_f8 = uStack_298;
  local_f0 = 5;
  uStack_114 = 0x100000000;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_e4 = uStack_298;
  local_dc = 5;
  local_100 = 0x100000000;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_d0 = uStack_298;
  uStack_ec = 0x1400000003;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_bc = uStack_298;
  local_c8 = 5;
  local_b4 = 5;
  uStack_d8 = 0x1500000003;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_a8 = uStack_298;
  local_a0 = 5;
  uStack_c4 = 0x1600000003;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_94 = uStack_298;
  local_8c = 5;
  local_b0 = 0x1800000003;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_80 = uStack_298;
  local_78 = 5;
  uStack_9c = 0x1900000003;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  lStack_6c = uStack_298;
  local_64 = 5;
  uStack_88 = 0x1a00000003;
  local_50 = 5;
  local_2a0 = 0x1d00000003;
  uStack_298 = (ulonglong)uVar16 << 0x20;
  uStack_74 = 0x1c00000003;
  local_250 = CONCAT44(&local_1a0,0x11);
  uStack_240 = CONCAT44(uStack_240._4_4_,0xd);
  local_248 = 0;
  lStack_58 = uStack_298;
  local_60 = 0x1d00000003;
  local_274 = piVar1;
  local_270 = piVar3;
  local_25c = piVar2;
  auVar17 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar14 = (*extraout_w11)(auVar17._0_8_ & 0xffffffff,auVar17._8_8_ & 0xffffffff,1,&local_250,0);
  *local_260 = (int)uVar14;
  if ((int)uVar14 == 0) goto LAB_100222e8;
  local_268 = 0;
  iVar10 = param_1[0x36];
  local_2b0[0] = (code *)0x0;
  uVar13 = FUN_1002e4f0(uVar14,iVar10,&local_268,local_2b0);
  if ((uVar13 & 1) == 0) goto LAB_100222b8;
  local_27c = (int *)(iVar10 * 4);
  local_280 = local_27c + 4;
  iVar10 = FUN_1005dbc8(*piVar1 + 0x520,*piVar2,local_280,0,1);
  uVar11 = local_268;
  pcVar7 = local_2b0[0];
  local_278 = param_1 + 0xc68;
  *local_278 = iVar10;
  if (iVar10 == 0) {
LAB_100222a8:
    FUN_1007a4e0(pcVar7);
    FUN_1007a4e0(uVar11);
  }
  else {
    iVar10 = FUN_1005dbc8(*piVar1 + 0x520,*piVar2,0x40004,0,1);
    local_2b0[0] = (code *)(param_1 + 0xc67);
    *(int *)local_2b0[0] = iVar10;
    if (iVar10 == 0) {
LAB_1002227c:
      uVar12 = (*pcVar15)();
      (*extraout_w11_08)(uVar12);
      goto LAB_100222a8;
    }
    iVar10 = 0;
    if (*piVar1 != 0) {
      iVar10 = *piVar1 + 0x520;
    }
    iVar10 = FUN_10058628(iVar10,*piVar2,0,local_27c + 1,0);
    local_27c = param_1 + 0xc69;
    *local_27c = iVar10;
    if (iVar10 == 0) {
LAB_10022250:
      uVar12 = (*pcVar15)();
      (*extraout_w11_07)(uVar12);
      goto LAB_1002227c;
    }
    uVar13 = FUN_10063dc8(*(undefined4 *)(*piVar3 + 0x130c),*local_278,*piVar3 + 0x1430,0,local_280,
                          uVar11,1,0);
    if (((uVar13 & 1) == 0) ||
       (uVar13 = FUN_10063dc8(*(undefined4 *)(*piVar3 + 0x130c),*(undefined4 *)local_2b0[0],
                              *piVar3 + 0x1430,0,0x40004,pcVar7,1,0), (uVar13 & 1) == 0)) {
      iVar10 = *local_27c;
      if (iVar10 != 0) {
        FUN_10058480(iVar10);
        FUN_1007a470(iVar10,0x78);
      }
      goto LAB_10022250;
    }
    FUN_1007a4e0(pcVar7);
    FUN_1007a4e0(uVar11);
    iVar10 = param_1[1];
    iVar10 = FUN_1005dbc8(*piVar1 + 0x520,*piVar2,*(int *)(iVar10 + 0x33) * *(int *)(iVar10 + 0x2f),
                          0,1);
    param_1[0xc6a] = iVar10;
    if (iVar10 != 0) {
      iVar10 = FUN_1005d8e8(*piVar1 + 0x520,*piVar2,1);
      local_2a0 = 1;
      uStack_298 = 0;
      local_1f0 = 0x1000000000;
      uStack_1e8 = 1;
      local_250 = 0x1000000001;
      local_248 = 1;
      local_1e0[0] = 3;
      local_1d8 = 0;
      uStack_1d0 = 0x100;
      param_1[0xc64] = iVar10;
      local_1c8 = 0x1000100000100;
      uStack_1c0 = 0x10000003c;
      local_290 = local_290 & 0xffffffff00000000;
      local_1b8 = 0;
      local_1b0 = 0;
      uVar13 = FUN_1005daa8(*piVar1 + 0x520,*piVar2,&local_2a0,0,local_1e0,0x80);
      if ((uVar13 & 1) != 0) {
        uVar13 = FUN_1005da48(*piVar1 + 0x520,*piVar2,&local_1f0,&DAT_10094728,param_1 + 0xc6c);
        if ((uVar13 & 1) != 0) {
          piVar3 = param_1 + 0xc6d;
          uVar13 = FUN_1005da48(*piVar1 + 0x520,*piVar2,&local_250,&DAT_10094728,piVar3);
          if ((uVar13 & 1) != 0) {
            iVar10 = 0;
            if (*piVar1 != 0) {
              iVar10 = *piVar1 + 0x520;
            }
            iVar10 = FUN_1005e160(iVar10,*piVar2,0,0x200,1);
            param_1[0xc63] = iVar10;
            if (iVar10 != 0) {
              local_230 = 0x40000003d;
              local_228 = 0x1688;
              uStack_220 = 0;
              uStack_21c = 0xffffffff;
              uStack_218 = 0;
              uStack_214 = 0;
              uStack_210 = 0;
              uStack_20c = 0;
              uVar11 = (*pcVar15)();
              (*extraout_w11_00)(uVar11,&local_280);
              FUN_1005db18(*piVar1 + 0x520,*piVar2,param_1[0xc6b],&local_230,local_280);
              uVar16 = 0;
              local_280 = piVar3;
              local_27c = param_1 + 0xc64;
              local_278 = param_1;
              do {
                uStack_21c = 1;
                uStack_218 = 8;
                uStack_214 = 0;
                uStack_210 = 0;
                uStack_20c = 0;
                uStack_208 = 0;
                local_200 = 0x7f7fffff;
                local_204 = 0;
                local_230 = CONCAT44((uVar16 >> 2 & 1) << 1,
                                     *(undefined4 *)(&DAT_10096b90 + (uVar16 & 3) * 4)) |
                            0x100000000;
                local_228 = (uVar16 >> 3 & 1) << 1 | 1;
                local_224 = 3;
                uStack_220 = 0;
                uVar11 = (*pcVar15)();
                (*extraout_w11_01)(uVar11,local_2b0);
                local_2b0[0] = local_2b0[0] + uVar16 * *local_27c;
                uVar13 = ZEXT48(local_2b0[0]);
                uVar11 = (*pcVar15)();
                (*extraout_w11_02)(uVar11,&local_230,uVar13 & 0xffffffff);
                piVar3 = local_25c;
                piVar2 = local_274;
                piVar1 = local_278;
                uVar16 = uVar16 + 1;
              } while (uVar16 < 0x10);
              iVar10 = FUN_1005dbc8(*local_274 + 0x520,*local_25c,0xd50,0,1);
              piVar4 = piVar1 + 0xc66;
              *piVar4 = iVar10;
              if (iVar10 == 0) goto LAB_100222b8;
              iVar10 = 0;
              if (*piVar2 != 0) {
                iVar10 = *piVar2 + 0x520;
              }
              iVar10 = FUN_10058628(iVar10,*piVar3,0,0x590,0);
              piVar8 = local_270;
              piVar1[0xc65] = iVar10;
              if (iVar10 != 0) {
                uVar13 = FUN_10063dc8(*(undefined4 *)(*local_270 + 0x130c),*piVar4,
                                      *local_270 + 0x1430,0,0xd50,&DAT_1009e520,1,0);
                if ((uVar13 & 1) != 0) {
                  iVar10 = FUN_1005e8a0(*(undefined4 *)(*piVar8 + 0x15dc),2);
                  piVar1[0xc6e] = iVar10;
                  if (iVar10 != -1) {
                    FUN_1005f380(*(undefined4 *)(*piVar8 + 0x15dc),&local_270,iVar10,0);
                    local_2a0 = 0x60000001c;
                    local_290 = 0;
                    uStack_298 = 0;
                    FUN_1005db70(*piVar2 + 0x520,*piVar3,0,&local_2a0,local_270);
                    FUN_1005f380(*(undefined4 *)(*piVar8 + 0x15dc),&local_280,piVar1[0xc6e],0);
                    local_250 = 0x600000039;
                    uStack_240 = 0;
                    local_248 = 0;
                    FUN_1005db70(*piVar2 + 0x520,*piVar3,0,&local_250,local_280);
                  }
                  FUN_1002e1e0(piVar1,*local_274,local_264,local_258);
                  piVar1[0x3296] = 0;
                  piVar1[0x3297] = 0;
                  iVar10 = piVar1[0x27];
                  local_26c[0x298] = piVar1[0x26];
                  local_26c[0x299] = iVar10;
                  FUN_100600f0(*(int *)(*piVar8 + 0x130c) + 4,0);
                  FUN_10060618(*(undefined4 *)(*piVar8 + 0x1304),*piVar4,0,1,0x80);
                  local_26c = piVar1 + 0xd10;
                  uVar13 = FUN_1002a868(local_26c);
                  if ((uVar13 & 1) != 0) {
                    piVar2 = piVar1 + 0xe54;
                    piVar1[0xe60] = 0;
                    piVar1[0xe6b] = 0;
                    piVar1[0xe64] = 0;
                    piVar1[0xe65] = 0;
                    piVar1[0xe66] = 0;
                    uVar13 = FUN_1005d740(uVar13,DAT_1009f7ac,1,&DAT_1009e460,piVar1 + 0xe67);
                    if ((uVar13 & 1) == 0) {
LAB_10022190:
                      FUN_1003ead0(piVar2);
                    }
                    else {
                      local_2b0[0] = pcVar15;
                      bVar9 = true;
                      bVar6 = false;
                      do {
                        if (bVar6) break;
                        iVar10 = FUN_10056c10(*(int *)(piVar1[0xe63] + 0x3188) + 0x1630,
                                              PTR_PTR_1009e468,DAT_1009e46c);
                        bVar6 = true;
                        piVar1[0xe68] = iVar10;
                        bVar9 = iVar10 != 0;
                      } while (iVar10 != 0);
                      pcVar15 = local_2b0[0];
                      if (!bVar9) goto LAB_10022190;
                      piVar3 = piVar1 + 0xe63;
                      iVar5 = *piVar3;
                      iVar10 = 0;
                      if (*(int *)(iVar5 + 0x3180) != 0) {
                        iVar10 = *(int *)(iVar5 + 0x3180) + 0x520;
                      }
                      iVar10 = FUN_10058628(iVar10,*(undefined4 *)(iVar5 + 0x3184),
                                            *(int *)(iVar5 + 0x3188) + 0x1370,0xf0000,0);
                      piVar4 = piVar1 + 0xe69;
                      *piVar4 = iVar10;
                      if (iVar10 == 0) goto LAB_10022190;
                      iVar5 = *piVar3;
                      iVar10 = 0;
                      if (*(int *)(iVar5 + 0x3180) != 0) {
                        iVar10 = *(int *)(iVar5 + 0x3180) + 0x520;
                      }
                      iVar10 = FUN_10058628(iVar10,*(undefined4 *)(iVar5 + 0x3184),
                                            *(int *)(iVar5 + 0x3188) + 0x1370,0x10000,0);
                      piVar1[0xe6a] = iVar10;
                      if (iVar10 == 0) {
                        iVar10 = *piVar4;
                        if (iVar10 != 0) {
                          FUN_10058480(iVar10);
                          FUN_1007a470(iVar10,0x78);
                        }
                        *piVar4 = 0;
                        goto LAB_10022190;
                      }
                      iVar10 = *(int *)(*piVar3 + 0x3188);
                      piVar1[0xe6e] = *(int *)(*piVar3 + 0x3180);
                      piVar1[0xe6f] = iVar10;
                      *(undefined1 *)(piVar1 + 0xe6d) = 1;
                      FUN_1003edd8(piVar2,1,1);
                      switch(*(undefined4 *)((int)local_264 + 0x33)) {
                      default:
                        uVar13 = FUN_1003e828(piVar1 + 0xe78);
                        if ((uVar13 & 1) != 0) {
                          return 1;
                        }
                        break;
                      case 2:
                        uVar13 = FUN_1003e828(piVar1 + 0xe78);
                        if ((uVar13 & 1) != 0) {
                          uVar13 = FUN_1003e828(piVar1 + 0x1a81);
                          if ((uVar13 & 1) != 0) {
                            return 1;
                          }
LAB_10022100:
                          FUN_1003e958(piVar1 + 0xe78);
                        }
                        break;
                      case 3:
                        uVar13 = FUN_1003e828(piVar1 + 0xe78);
                        if ((uVar13 & 1) != 0) {
                          uVar13 = FUN_1003e828(piVar1 + 0x1a81);
                          if ((uVar13 & 1) != 0) {
                            uVar13 = FUN_1003e828(piVar1 + 0x268a);
                            if ((uVar13 & 1) != 0) {
                              return 1;
                            }
                            FUN_1003e958(piVar1 + 0x1a81);
                          }
                          goto LAB_10022100;
                        }
                      }
                      FUN_1003eb20(piVar2);
                    }
                    FUN_1002ab48(local_26c);
                  }
                  FUN_10020190(piVar1);
                  goto LAB_100222b8;
                }
                iVar10 = piVar1[0xc65];
                if (iVar10 != 0) {
                  FUN_10058480(iVar10);
                  FUN_1007a470(iVar10,0x78);
                }
              }
              uVar11 = (*pcVar15)();
              (*extraout_w11_03)(uVar11);
              goto LAB_100222b8;
            }
            uVar11 = (*pcVar15)();
            (*extraout_w11_04)(uVar11);
            *piVar3 = 0;
          }
          uVar11 = (*pcVar15)();
          (*extraout_w11_05)(uVar11);
          param_1[0xc6c] = 0;
        }
        uVar11 = (*pcVar15)();
        (*extraout_w11_06)(uVar11);
        param_1[0xc6b] = 0;
      }
    }
  }
LAB_100222b8:
  piVar1 = local_260;
  uVar11 = (*pcVar15)();
  (*extraout_w11_09)(uVar11);
  *piVar1 = 0;
LAB_100222e8:
  FUN_1005c620(*local_274,*local_25c);
  return 0;
}

