/*
 * FUN_100107b0 at 100107b0
 * undefined FUN_100107b0(void)
 * Address ranges: 100107b0-100115c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100107b0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
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
  code *pcVar14;
  uint uVar15;
  undefined1 auVar16 [16];
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
  uVar10 = DAT_100a288c;
  param_1[1] = (int)param_2;
  local_264 = param_2;
  local_258 = param_4;
  iVar9 = FUN_1006c588(uVar10,&PTR_s_DGD3D12ROOT_100a11d0,0);
  piVar1 = param_1 + 0xcc0;
  *piVar1 = iVar9;
  if (iVar9 == 0) {
    return 0;
  }
  local_260 = param_1 + 0xccf;
  param_1[0xcd1] = 0;
  param_1[0xcd2] = 0;
  local_260[0] = 0;
  local_260[1] = 0;
  param_1[0xcd5] = 0;
  param_1[0xcd6] = 0;
  param_1[0xcd3] = 0;
  param_1[0xcd4] = 0;
  param_1[0xcd9] = 0;
  param_1[0xcda] = 0;
  param_1[0xcd7] = 0;
  param_1[0xcd8] = 0;
  param_1[0xcdd] = 0;
  param_1[0xcde] = 0;
  param_1[0xcdb] = 0;
  param_1[0xcdc] = 0;
  param_1[0xce1] = 0;
  param_1[0xce2] = 0;
  param_1[0xcdf] = 0;
  param_1[0xce0] = 0;
  param_1[0xce5] = 0;
  param_1[0xce6] = 0;
  param_1[0xce3] = 0;
  param_1[0xce4] = 0;
  param_1[0xce9] = 0;
  param_1[0xcea] = 0;
  param_1[0xce7] = 0;
  param_1[0xce8] = 0;
  param_1[0xced] = 0;
  param_1[0xcee] = 0;
  param_1[0xceb] = 0;
  param_1[0xcec] = 0;
  if (*param_2 == 5) {
    uVar10 = 0xb000;
  }
  else {
    uVar10 = 0xb000;
    if (*param_2 == 6) {
      uVar10 = 0xc000;
    }
  }
  piVar2 = param_1 + 0xcc1;
  uVar12 = FUN_1005e900(*piVar1,*piVar2,uVar10);
  uVar15 = uStack_298._4_4_;
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  uStack_298 = (ulonglong)uStack_298._4_4_ << 0x20;
  lStack_198 = uStack_298;
  local_190 = 0;
  piVar3 = param_1 + 0xcc2;
  local_17c = 0;
  *piVar3 = *piVar1 + *piVar2 * 0x16c0 + 0x6c0;
  pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_184 = uStack_298;
  local_1a0 = 2;
  uStack_298 = CONCAT44(uVar15,&DAT_10099ad0);
  uStack_170 = uStack_298;
  local_168 = 5;
  uStack_18c = 0x100000002;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_15c = uStack_298;
  local_154 = 5;
  uStack_178 = 0x100000000;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_148 = uStack_298;
  local_140 = 5;
  uStack_164 = 0x800000003;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_134 = uStack_298;
  local_12c = 5;
  local_150 = 0x900000003;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_120 = uStack_298;
  local_118 = 5;
  uStack_13c = 0xa00000003;
  uStack_298 = CONCAT44(uVar15,&DAT_10099950);
  uStack_10c = uStack_298;
  local_104 = 5;
  uStack_128 = 0xc00000003;
  uStack_298 = CONCAT44(uVar15,&DAT_10099ab8);
  uStack_f8 = uStack_298;
  local_f0 = 5;
  uStack_114 = 0x100000000;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_e4 = uStack_298;
  local_dc = 5;
  local_100 = 0x100000000;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_d0 = uStack_298;
  uStack_ec = 0x1400000003;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_bc = uStack_298;
  local_c8 = 5;
  local_b4 = 5;
  uStack_d8 = 0x1500000003;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_a8 = uStack_298;
  local_a0 = 5;
  uStack_c4 = 0x1600000003;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_94 = uStack_298;
  local_8c = 5;
  local_b0 = 0x1800000003;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_80 = uStack_298;
  local_78 = 5;
  uStack_9c = 0x1900000003;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  lStack_6c = uStack_298;
  local_64 = 5;
  uStack_88 = 0x1a00000003;
  local_50 = 5;
  local_2a0 = 0x1d00000003;
  uStack_298 = (ulonglong)uVar15 << 0x20;
  uStack_74 = 0x1c00000003;
  local_250 = CONCAT44(&local_1a0,0x11);
  uStack_240 = CONCAT44(uStack_240._4_4_,0xd);
  local_248 = 0;
  lStack_58 = uStack_298;
  local_60 = 0x1d00000003;
  local_274 = piVar1;
  local_270 = piVar3;
  local_25c = piVar2;
  auVar16 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar13 = (*extraout_w11)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_ & 0xffffffff,1,&local_250,0);
  *local_260 = (int)uVar13;
  if ((int)uVar13 == 0) goto LAB_1001158c;
  local_268 = 0;
  iVar9 = param_1[0x36];
  local_2b0[0] = (code *)0x0;
  uVar12 = FUN_100170c0(uVar13,iVar9,&local_268,local_2b0);
  if ((uVar12 & 1) == 0) goto LAB_1001155c;
  local_27c = (int *)(iVar9 * 4);
  local_280 = local_27c + 4;
  iVar9 = FUN_100613d8(*piVar1 + 0x520,*piVar2,local_280,0,1);
  uVar10 = local_268;
  pcVar6 = local_2b0[0];
  local_278 = param_1 + 0xcc8;
  *local_278 = iVar9;
  if (iVar9 == 0) {
LAB_1001154c:
    FUN_1007dd80(pcVar6);
    FUN_1007dd80(uVar10);
  }
  else {
    iVar9 = FUN_100613d8(*piVar1 + 0x520,*piVar2,0x40004,0,1);
    local_2b0[0] = (code *)(param_1 + 0xcc7);
    *(int *)local_2b0[0] = iVar9;
    if (iVar9 == 0) {
LAB_10011520:
      uVar11 = (*pcVar14)();
      (*extraout_w11_08)(uVar11);
      goto LAB_1001154c;
    }
    iVar9 = 0;
    if (*piVar1 != 0) {
      iVar9 = *piVar1 + 0x520;
    }
    iVar9 = FUN_1005be38(iVar9,*piVar2,0,local_27c + 1,0);
    local_27c = param_1 + 0xcc9;
    *local_27c = iVar9;
    if (iVar9 == 0) {
LAB_100114f4:
      uVar11 = (*pcVar14)();
      (*extraout_w11_07)(uVar11);
      goto LAB_10011520;
    }
    uVar12 = FUN_100675e0(*(undefined4 *)(*piVar3 + 0x130c),*local_278,*piVar3 + 0x1430,0,local_280,
                          uVar10,1,0);
    if (((uVar12 & 1) == 0) ||
       (uVar12 = FUN_100675e0(*(undefined4 *)(*piVar3 + 0x130c),*(undefined4 *)local_2b0[0],
                              *piVar3 + 0x1430,0,0x40004,pcVar6,1,0), (uVar12 & 1) == 0)) {
      iVar9 = *local_27c;
      if (iVar9 != 0) {
        FUN_1005bc90(iVar9);
        FUN_1007dd10(iVar9,0x78);
      }
      goto LAB_100114f4;
    }
    FUN_1007dd80(pcVar6);
    FUN_1007dd80(uVar10);
    iVar9 = param_1[1];
    iVar9 = FUN_100613d8(*piVar1 + 0x520,*piVar2,*(int *)(iVar9 + 0x33) * *(int *)(iVar9 + 0x2f),0,1
                        );
    param_1[0xcca] = iVar9;
    if (iVar9 != 0) {
      iVar9 = FUN_100610f8(*piVar1 + 0x520,*piVar2,1);
      local_2a0 = 1;
      uStack_298 = 0;
      local_1f0 = 0x1000000000;
      uStack_1e8 = 1;
      local_250 = 0x1000000001;
      local_248 = 1;
      local_1e0[0] = 3;
      local_1d8 = 0;
      uStack_1d0 = 0x100;
      param_1[0xcc4] = iVar9;
      local_1c8 = 0x1000100000100;
      uStack_1c0 = 0x10000003c;
      local_290 = local_290 & 0xffffffff00000000;
      local_1b8 = 0;
      local_1b0 = 0;
      uVar12 = FUN_100612b8(*piVar1 + 0x520,*piVar2,&local_2a0,0,local_1e0,0x80);
      if ((uVar12 & 1) != 0) {
        uVar12 = FUN_10061258(*piVar1 + 0x520,*piVar2,&local_1f0,&DAT_10098570,param_1 + 0xccc);
        if ((uVar12 & 1) != 0) {
          piVar3 = param_1 + 0xccd;
          uVar12 = FUN_10061258(*piVar1 + 0x520,*piVar2,&local_250,&DAT_10098570,piVar3);
          if ((uVar12 & 1) != 0) {
            iVar9 = 0;
            if (*piVar1 != 0) {
              iVar9 = *piVar1 + 0x520;
            }
            iVar9 = FUN_10061970(iVar9,*piVar2,0,0x200,1);
            param_1[0xcc3] = iVar9;
            if (iVar9 != 0) {
              local_230 = 0x40000003d;
              local_228 = 0x1688;
              uStack_220 = 0;
              uStack_21c = 0xffffffff;
              uStack_218 = 0;
              uStack_214 = 0;
              uStack_210 = 0;
              uStack_20c = 0;
              uVar10 = (*pcVar14)();
              (*extraout_w11_00)(uVar10,&local_280);
              FUN_10061328(*piVar1 + 0x520,*piVar2,param_1[0xccb],&local_230,local_280);
              uVar15 = 0;
              local_280 = piVar3;
              local_27c = param_1 + 0xcc4;
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
                local_230 = CONCAT44((uVar15 >> 2 & 1) << 1,
                                     *(undefined4 *)(&DAT_100998c0 + (uVar15 & 3) * 4)) |
                            0x100000000;
                local_228 = (uVar15 >> 3 & 1) << 1 | 1;
                local_224 = 3;
                uStack_220 = 0;
                uVar10 = (*pcVar14)();
                (*extraout_w11_01)(uVar10,local_2b0);
                local_2b0[0] = local_2b0[0] + uVar15 * *local_27c;
                uVar12 = ZEXT48(local_2b0[0]);
                uVar10 = (*pcVar14)();
                (*extraout_w11_02)(uVar10,&local_230,uVar12 & 0xffffffff);
                piVar3 = local_25c;
                piVar2 = local_274;
                piVar1 = local_278;
                uVar15 = uVar15 + 1;
              } while (uVar15 < 0x10);
              iVar9 = FUN_100613d8(*local_274 + 0x520,*local_25c,0xd50,0,1);
              piVar4 = piVar1 + 0xcc6;
              *piVar4 = iVar9;
              if (iVar9 == 0) goto LAB_1001155c;
              iVar9 = 0;
              if (*piVar2 != 0) {
                iVar9 = *piVar2 + 0x520;
              }
              iVar9 = FUN_1005be38(iVar9,*piVar3,0,0x670,0);
              piVar7 = local_270;
              piVar1[0xcc5] = iVar9;
              if (iVar9 != 0) {
                uVar12 = FUN_100675e0(*(undefined4 *)(*local_270 + 0x130c),*piVar4,
                                      *local_270 + 0x1430,0,0xd50,&DAT_100a1380,1,0);
                if ((uVar12 & 1) != 0) {
                  iVar9 = FUN_100620b0(*(undefined4 *)(*piVar7 + 0x15dc),2);
                  piVar1[0xcce] = iVar9;
                  if (iVar9 != -1) {
                    FUN_10062b90(*(undefined4 *)(*piVar7 + 0x15dc),&local_270,iVar9,0);
                    local_2a0 = 0x60000001c;
                    local_290 = 0;
                    uStack_298 = 0;
                    FUN_10061380(*piVar2 + 0x520,*piVar3,0,&local_2a0,local_270);
                    FUN_10062b90(*(undefined4 *)(*piVar7 + 0x15dc),&local_280,piVar1[0xcce],0);
                    local_250 = 0x600000039;
                    uStack_240 = 0;
                    local_248 = 0;
                    FUN_10061380(*piVar2 + 0x520,*piVar3,0,&local_250,local_280);
                  }
                  FUN_10016d90(piVar1,*local_274,local_264,local_258);
                  piVar1[0x34d2] = 0;
                  piVar1[0x34d3] = 0;
                  iVar9 = piVar1[0x27];
                  local_26c[0x4d4] = piVar1[0x26];
                  local_26c[0x4d5] = iVar9;
                  FUN_10063900(*(int *)(*piVar7 + 0x130c) + 4,0);
                  FUN_10063e28(*(undefined4 *)(*piVar7 + 0x1304),*piVar4,0,1,0x80);
                  local_26c = piVar1 + 0xd70;
                  uVar12 = FUN_1001aad0(local_26c);
                  if ((uVar12 & 1) != 0) {
                    piVar2 = piVar1 + 0xfd4;
                    piVar1[0x104b] = 0;
                    piVar1[0x1058] = 0;
                    piVar1[0x104f] = 0;
                    piVar1[0x1050] = 0;
                    piVar1[0x1051] = 0;
                    uVar12 = FUN_10060f50(uVar12,DAT_100a288c,2,&DAT_100a1290,piVar1 + 0x1052);
                    if ((uVar12 & 1) == 0) {
LAB_10011434:
                      FUN_1002dfb0(piVar2);
                    }
                    else {
                      local_2b0[0] = pcVar14;
                      bVar8 = true;
                      uVar15 = 0;
                      do {
                        if (1 < uVar15) break;
                        iVar9 = FUN_1005a420(*(int *)(piVar1[0x104e] + 0x3308) + 0x1630,
                                             (&PTR_PTR_100a12a0)[uVar15 * 2],
                                             (&DAT_100a12a4)[uVar15 * 2]);
                        piVar2[uVar15 + 0x80] = iVar9;
                        bVar8 = iVar9 != 0;
                        uVar15 = uVar15 + 1;
                      } while (iVar9 != 0);
                      pcVar14 = local_2b0[0];
                      if (!bVar8) goto LAB_10011434;
                      piVar3 = piVar1 + 0x104e;
                      iVar5 = *piVar3;
                      iVar9 = 0;
                      if (*(int *)(iVar5 + 0x3300) != 0) {
                        iVar9 = *(int *)(iVar5 + 0x3300) + 0x520;
                      }
                      iVar9 = FUN_1005be38(iVar9,*(undefined4 *)(iVar5 + 0x3304),
                                           *(int *)(iVar5 + 0x3308) + 0x1370,0x140000,0);
                      piVar4 = piVar1 + 0x1056;
                      *piVar4 = iVar9;
                      if (iVar9 == 0) goto LAB_10011434;
                      iVar5 = *piVar3;
                      iVar9 = 0;
                      if (*(int *)(iVar5 + 0x3300) != 0) {
                        iVar9 = *(int *)(iVar5 + 0x3300) + 0x520;
                      }
                      iVar9 = FUN_1005be38(iVar9,*(undefined4 *)(iVar5 + 0x3304),
                                           *(int *)(iVar5 + 0x3308) + 0x1370,0x10000,0);
                      piVar1[0x1057] = iVar9;
                      if (iVar9 == 0) {
                        iVar9 = *piVar4;
                        if (iVar9 != 0) {
                          FUN_1005bc90(iVar9);
                          FUN_1007dd10(iVar9,0x78);
                        }
                        *piVar4 = 0;
                        goto LAB_10011434;
                      }
                      piVar1[0x1010] = 0;
                      *(undefined2 *)(piVar1 + 0x103f) = 0;
                      *(undefined1 *)((int)piVar1 + 0x40fe) = 0;
                      piVar1[0x104c] = -1;
                      *(int *)(*piVar3 + 0x32a0) = piVar1[0x100d];
                      iVar9 = *(int *)(*piVar3 + 0x3308);
                      piVar1[0x105b] = *(int *)(*piVar3 + 0x3300);
                      piVar1[0x105c] = iVar9;
                      *(undefined1 *)(piVar1 + 0x105a) = 1;
                      FUN_1002e2d8(piVar2,1,1);
                      switch(*(undefined4 *)((int)local_264 + 0x33)) {
                      default:
                        uVar12 = FUN_1002dd00(piVar1 + 0x10b4);
                        if ((uVar12 & 1) != 0) {
                          return 1;
                        }
                        break;
                      case 2:
                        uVar12 = FUN_1002dd00(piVar1 + 0x10b4);
                        if ((uVar12 & 1) != 0) {
                          uVar12 = FUN_1002dd00(piVar1 + 0x1cbd);
                          if ((uVar12 & 1) != 0) {
                            return 1;
                          }
LAB_100113a4:
                          FUN_1002de30(piVar1 + 0x10b4);
                        }
                        break;
                      case 3:
                        uVar12 = FUN_1002dd00(piVar1 + 0x10b4);
                        if ((uVar12 & 1) != 0) {
                          uVar12 = FUN_1002dd00(piVar1 + 0x1cbd);
                          if ((uVar12 & 1) != 0) {
                            uVar12 = FUN_1002dd00(piVar1 + 0x28c6);
                            if ((uVar12 & 1) != 0) {
                              return 1;
                            }
                            FUN_1002de30(piVar1 + 0x1cbd);
                          }
                          goto LAB_100113a4;
                        }
                      }
                      FUN_1002e020(piVar2);
                    }
                    FUN_1001adb0(local_26c);
                  }
                  FUN_1000f4e0(piVar1);
                  goto LAB_1001155c;
                }
                iVar9 = piVar1[0xcc5];
                if (iVar9 != 0) {
                  FUN_1005bc90(iVar9);
                  FUN_1007dd10(iVar9,0x78);
                }
              }
              uVar10 = (*pcVar14)();
              (*extraout_w11_03)(uVar10);
              goto LAB_1001155c;
            }
            uVar10 = (*pcVar14)();
            (*extraout_w11_04)(uVar10);
            *piVar3 = 0;
          }
          uVar10 = (*pcVar14)();
          (*extraout_w11_05)(uVar10);
          param_1[0xccc] = 0;
        }
        uVar10 = (*pcVar14)();
        (*extraout_w11_06)(uVar10);
        param_1[0xccb] = 0;
      }
    }
  }
LAB_1001155c:
  piVar1 = local_260;
  uVar10 = (*pcVar14)();
  (*extraout_w11_09)(uVar10);
  *piVar1 = 0;
LAB_1001158c:
  FUN_1005fe30(*local_274,*local_25c);
  return 0;
}

