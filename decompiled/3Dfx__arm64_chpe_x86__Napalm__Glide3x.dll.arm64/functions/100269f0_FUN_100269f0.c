/*
 * FUN_100269f0 at 100269f0
 * undefined FUN_100269f0(void)
 * Address ranges: 100269f0-10027827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100269f0(int *param_1,int *param_2,int param_3,undefined4 param_4)

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
  code *local_2c0 [4];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  ulonglong local_2a0;
  int *local_290;
  int *local_28c;
  int *local_288;
  int *local_284;
  int *local_280;
  int *local_27c;
  undefined4 local_278;
  int *local_274;
  int *local_270;
  int *local_26c;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  ulonglong local_240;
  uint local_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0 [2];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b0;
  longlong lStack_1a8;
  undefined4 local_1a0;
  undefined8 uStack_19c;
  longlong lStack_194;
  undefined4 local_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 uStack_174;
  longlong lStack_16c;
  undefined4 local_164;
  undefined8 local_160;
  longlong lStack_158;
  undefined4 local_150;
  undefined8 uStack_14c;
  longlong lStack_144;
  undefined4 local_13c;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 uStack_fc;
  longlong lStack_f4;
  undefined4 local_ec;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined8 uStack_d4;
  longlong lStack_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined4 local_b0;
  undefined8 uStack_ac;
  longlong lStack_a4;
  undefined4 local_9c;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined8 uStack_84;
  longlong lStack_7c;
  undefined4 local_74;
  undefined8 local_70;
  longlong lStack_68;
  undefined4 local_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  
  local_27c = param_1 + 0x3000;
  param_1[2] = param_3;
  uVar10 = DAT_100aaa5c;
  param_1[1] = (int)param_2;
  local_274 = param_2;
  local_268 = param_4;
  iVar9 = FUN_10071c28(uVar10,&PTR_s_DGD3D12ROOT_100a92d8,0);
  piVar1 = param_1 + 0xda0;
  *piVar1 = iVar9;
  if (iVar9 == 0) {
    return 0;
  }
  local_270 = param_1 + 0xdaf;
  param_1[0xdb1] = 0;
  param_1[0xdb2] = 0;
  local_270[0] = 0;
  local_270[1] = 0;
  param_1[0xdb5] = 0;
  param_1[0xdb6] = 0;
  param_1[0xdb3] = 0;
  param_1[0xdb4] = 0;
  param_1[0xdb9] = 0;
  param_1[0xdba] = 0;
  param_1[0xdb7] = 0;
  param_1[0xdb8] = 0;
  param_1[0xdbd] = 0;
  param_1[0xdbe] = 0;
  param_1[0xdbb] = 0;
  param_1[0xdbc] = 0;
  param_1[0xdc1] = 0;
  param_1[0xdc2] = 0;
  param_1[0xdbf] = 0;
  param_1[0xdc0] = 0;
  param_1[0xdc5] = 0;
  param_1[0xdc6] = 0;
  param_1[0xdc3] = 0;
  param_1[0xdc4] = 0;
  param_1[0xdc9] = 0;
  param_1[0xdca] = 0;
  param_1[0xdc7] = 0;
  param_1[0xdc8] = 0;
  param_1[0xdcd] = 0;
  param_1[0xdce] = 0;
  param_1[0xdcb] = 0;
  param_1[0xdcc] = 0;
  if (*param_2 == 5) {
    uVar10 = 0xb000;
  }
  else {
    uVar10 = 0xb000;
    if (*param_2 == 6) {
      uVar10 = 0xc000;
    }
  }
  piVar2 = param_1 + 0xda1;
  uVar12 = FUN_10063fa0(*piVar1,*piVar2,uVar10);
  uVar15 = uStack_2a8._4_4_;
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  uStack_2a8 = (ulonglong)uStack_2a8._4_4_ << 0x20;
  lStack_1a8 = uStack_2a8;
  local_1a0 = 0;
  piVar3 = param_1 + 0xda2;
  local_18c = 0;
  *piVar3 = *piVar1 + *piVar2 * 0x16c0 + 0x6c0;
  pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_194 = uStack_2a8;
  local_1b0 = 2;
  uStack_2a8 = CONCAT44(uVar15,&DAT_100a00e0);
  uStack_180 = uStack_2a8;
  local_178 = 5;
  uStack_19c = 0x100000002;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_16c = uStack_2a8;
  local_164 = 5;
  uStack_188 = 0x100000000;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_158 = uStack_2a8;
  local_150 = 5;
  uStack_174 = 0x800000003;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_144 = uStack_2a8;
  local_13c = 5;
  local_160 = 0x900000003;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_130 = uStack_2a8;
  local_128 = 5;
  uStack_14c = 0xa00000003;
  uStack_2a8 = CONCAT44(uVar15,&DAT_1009ff60);
  uStack_11c = uStack_2a8;
  local_114 = 5;
  uStack_138 = 0xc00000003;
  uStack_2a8 = CONCAT44(uVar15,&DAT_100a00c8);
  uStack_108 = uStack_2a8;
  local_100 = 5;
  uStack_124 = 0x100000000;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_f4 = uStack_2a8;
  local_ec = 5;
  local_110 = 0x100000000;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_e0 = uStack_2a8;
  uStack_fc = 0x1400000003;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_cc = uStack_2a8;
  local_d8 = 5;
  local_c4 = 5;
  uStack_e8 = 0x1500000003;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_b8 = uStack_2a8;
  local_b0 = 5;
  uStack_d4 = 0x1600000003;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_a4 = uStack_2a8;
  local_9c = 5;
  local_c0 = 0x1800000003;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_90 = uStack_2a8;
  local_88 = 5;
  uStack_ac = 0x1900000003;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_7c = uStack_2a8;
  local_74 = 5;
  uStack_98 = 0x1a00000003;
  uStack_2a8 = (ulonglong)uVar15 << 0x20;
  lStack_68 = uStack_2a8;
  local_60 = 5;
  uStack_84 = 0x1c00000003;
  local_2b0 = 0x100000000;
  local_4c = 5;
  uStack_2a8 = CONCAT44(uVar15,&DAT_100a00f8);
  local_70 = 0x1d00000003;
  local_260 = CONCAT44(&local_1b0,0x12);
  uStack_250 = CONCAT44(uStack_250._4_4_,0xd);
  local_258 = 0;
  uStack_54 = uStack_2a8;
  uStack_5c = 0x100000000;
  local_284 = piVar1;
  local_280 = piVar3;
  local_26c = piVar2;
  auVar16 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar13 = (*extraout_w11)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_ & 0xffffffff,1,&local_260,0);
  *local_270 = (int)uVar13;
  if ((int)uVar13 == 0) goto LAB_100277ec;
  local_278 = 0;
  iVar9 = param_1[0x37];
  local_2c0[0] = (code *)0x0;
  uVar12 = FUN_10017568(uVar13,iVar9,&local_278,local_2c0);
  if ((uVar12 & 1) == 0) goto LAB_100277bc;
  local_28c = (int *)(iVar9 * 4);
  local_290 = local_28c + 4;
  iVar9 = FUN_10066a78(*piVar1 + 0x520,*piVar2,local_290,0,1);
  uVar10 = local_278;
  pcVar6 = local_2c0[0];
  local_288 = param_1 + 0xda8;
  *local_288 = iVar9;
  if (iVar9 == 0) {
LAB_100277ac:
    FUN_10083420(pcVar6);
    FUN_10083420(uVar10);
  }
  else {
    iVar9 = FUN_10066a78(*piVar1 + 0x520,*piVar2,0x40004,0,1);
    local_2c0[0] = (code *)(param_1 + 0xda7);
    *(int *)local_2c0[0] = iVar9;
    if (iVar9 == 0) {
LAB_10027780:
      uVar11 = (*pcVar14)();
      (*extraout_w11_08)(uVar11);
      goto LAB_100277ac;
    }
    iVar9 = 0;
    if (*piVar1 != 0) {
      iVar9 = *piVar1 + 0x520;
    }
    iVar9 = FUN_100614e8(iVar9,*piVar2,0,local_28c + 1,0);
    local_28c = param_1 + 0xda9;
    *local_28c = iVar9;
    if (iVar9 == 0) {
LAB_10027754:
      uVar11 = (*pcVar14)();
      (*extraout_w11_07)(uVar11);
      goto LAB_10027780;
    }
    uVar12 = FUN_1006cc80(*(undefined4 *)(*piVar3 + 0x130c),*local_288,*piVar3 + 0x1430,0,local_290,
                          uVar10,1,0);
    if (((uVar12 & 1) == 0) ||
       (uVar12 = FUN_1006cc80(*(undefined4 *)(*piVar3 + 0x130c),*(undefined4 *)local_2c0[0],
                              *piVar3 + 0x1430,0,0x40004,pcVar6,1,0), (uVar12 & 1) == 0)) {
      iVar9 = *local_28c;
      if (iVar9 != 0) {
        FUN_10061340(iVar9);
        FUN_100833b0(iVar9,0x78);
      }
      goto LAB_10027754;
    }
    FUN_10083420(pcVar6);
    FUN_10083420(uVar10);
    iVar9 = param_1[1];
    iVar9 = FUN_10066a78(*piVar1 + 0x520,*piVar2,*(int *)(iVar9 + 0x33) * *(int *)(iVar9 + 0x2f),0,1
                        );
    param_1[0xdaa] = iVar9;
    if (iVar9 != 0) {
      iVar9 = FUN_10066798(*piVar1 + 0x520,*piVar2,1);
      local_2b0 = 1;
      uStack_2a8 = 0;
      local_200 = 0x1000000000;
      uStack_1f8 = 1;
      local_260 = 0x1000000001;
      local_258 = 1;
      local_1f0[0] = 3;
      local_1e8 = 0;
      uStack_1e0 = 0x800;
      param_1[0xda4] = iVar9;
      local_1d8 = 0x1000100000800;
      uStack_1d0 = 0x10000003c;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      local_1c8 = 0;
      local_1c0 = 0;
      uVar12 = FUN_10066958(*piVar1 + 0x520,*piVar2,&local_2b0,0,local_1f0,0x80);
      if ((uVar12 & 1) != 0) {
        uVar12 = FUN_100668f8(*piVar1 + 0x520,*piVar2,&local_200,&DAT_1009e8b0,param_1 + 0xdac);
        if ((uVar12 & 1) != 0) {
          piVar3 = param_1 + 0xdad;
          uVar12 = FUN_100668f8(*piVar1 + 0x520,*piVar2,&local_260,&DAT_1009e8b0,piVar3);
          if ((uVar12 & 1) != 0) {
            iVar9 = 0;
            if (*piVar1 != 0) {
              iVar9 = *piVar1 + 0x520;
            }
            iVar9 = FUN_10067010(iVar9,*piVar2,0,0x200,1);
            param_1[0xda3] = iVar9;
            if (iVar9 != 0) {
              local_240 = 0x40000003d;
              local_238 = 0x1688;
              uStack_230 = 0;
              uStack_22c = 0xffffffff;
              uStack_228 = 0;
              uStack_224 = 0;
              uStack_220 = 0;
              uStack_21c = 0;
              uVar10 = (*pcVar14)();
              (*extraout_w11_00)(uVar10,&local_290);
              FUN_100669c8(*piVar1 + 0x520,*piVar2,param_1[0xdab],&local_240,local_290);
              uVar15 = 0;
              local_290 = piVar3;
              local_28c = param_1 + 0xda4;
              local_288 = param_1;
              do {
                uStack_22c = 1;
                uStack_228 = 8;
                uStack_224 = 0;
                uStack_220 = 0;
                uStack_21c = 0;
                uStack_218 = 0;
                local_210 = 0x7f7fffff;
                local_214 = 0;
                local_240 = CONCAT44((uVar15 >> 2 & 1) << 1,
                                     *(undefined4 *)(&DAT_1009fed0 + (uVar15 & 3) * 4)) |
                            0x100000000;
                local_238 = (uVar15 >> 3 & 1) << 1 | 1;
                local_234 = 3;
                uStack_230 = 0;
                uVar10 = (*pcVar14)();
                (*extraout_w11_01)(uVar10,local_2c0);
                local_2c0[0] = local_2c0[0] + uVar15 * *local_28c;
                uVar12 = ZEXT48(local_2c0[0]);
                uVar10 = (*pcVar14)();
                (*extraout_w11_02)(uVar10,&local_240,uVar12 & 0xffffffff);
                piVar3 = local_26c;
                piVar2 = local_284;
                piVar1 = local_288;
                uVar15 = uVar15 + 1;
              } while (uVar15 < 0x10);
              iVar9 = FUN_10066a78(*local_284 + 0x520,*local_26c,0xe10,0,1);
              piVar4 = piVar1 + 0xda6;
              *piVar4 = iVar9;
              if (iVar9 == 0) goto LAB_100277bc;
              iVar9 = 0;
              if (*piVar2 != 0) {
                iVar9 = *piVar2 + 0x520;
              }
              iVar9 = FUN_100614e8(iVar9,*piVar3,0,0x8a0,0);
              piVar7 = local_280;
              piVar1[0xda5] = iVar9;
              if (iVar9 != 0) {
                uVar12 = FUN_1006cc80(*(undefined4 *)(*local_280 + 0x130c),*piVar4,
                                      *local_280 + 0x1430,0,0xe10,&DAT_100a9490,1,0);
                if ((uVar12 & 1) != 0) {
                  iVar9 = FUN_10067750(*(undefined4 *)(*piVar7 + 0x15dc),2);
                  piVar1[0xdae] = iVar9;
                  if (iVar9 != -1) {
                    FUN_10068230(*(undefined4 *)(*piVar7 + 0x15dc),&local_280,iVar9,0);
                    local_2b0 = 0x60000001c;
                    local_2a0 = 0;
                    uStack_2a8 = 0;
                    FUN_10066a20(*piVar2 + 0x520,*piVar3,0,&local_2b0,local_280);
                    FUN_10068230(*(undefined4 *)(*piVar7 + 0x15dc),&local_290,piVar1[0xdae],0);
                    local_260 = 0x600000029;
                    uStack_250 = 0;
                    local_258 = 0;
                    FUN_10066a20(*piVar2 + 0x520,*piVar3,0,&local_260,local_290);
                  }
                  FUN_10017218(piVar1,*local_284,local_274,local_268);
                  piVar1[0x35b8] = 0;
                  piVar1[0x35b9] = 0;
                  iVar9 = piVar1[0x27];
                  local_27c[0x5ba] = piVar1[0x26];
                  local_27c[0x5bb] = iVar9;
                  FUN_10068fa0(*(int *)(*piVar7 + 0x130c) + 4,0);
                  FUN_100694c8(*(undefined4 *)(*piVar7 + 0x1304),*piVar4,0,1,0x80);
                  local_27c = piVar1 + 0xe50;
                  uVar12 = FUN_1001afd0(local_27c);
                  if ((uVar12 & 1) != 0) {
                    piVar2 = piVar1 + 0x10ba;
                    piVar1[0x1131] = 0;
                    piVar1[0x113e] = 0;
                    piVar1[0x1135] = 0;
                    piVar1[0x1136] = 0;
                    piVar1[0x1137] = 0;
                    uVar12 = FUN_100665f0(uVar12,DAT_100aaa5c,2,&DAT_100a93ac,piVar1 + 0x1138);
                    if ((uVar12 & 1) == 0) {
LAB_10027694:
                      FUN_10030d30(piVar2);
                    }
                    else {
                      local_2c0[0] = pcVar14;
                      bVar8 = true;
                      uVar15 = 0;
                      do {
                        if (1 < uVar15) break;
                        iVar9 = FUN_1005fad0(*(int *)(piVar1[0x1134] + 0x3688) + 0x1630,
                                             (&PTR_PTR_100a93b0)[uVar15 * 2],
                                             (&DAT_100a93b4)[uVar15 * 2]);
                        piVar2[uVar15 + 0x80] = iVar9;
                        bVar8 = iVar9 != 0;
                        uVar15 = uVar15 + 1;
                      } while (iVar9 != 0);
                      pcVar14 = local_2c0[0];
                      if (!bVar8) goto LAB_10027694;
                      piVar3 = piVar1 + 0x1134;
                      iVar5 = *piVar3;
                      iVar9 = 0;
                      if (*(int *)(iVar5 + 0x3680) != 0) {
                        iVar9 = *(int *)(iVar5 + 0x3680) + 0x520;
                      }
                      iVar9 = FUN_100614e8(iVar9,*(undefined4 *)(iVar5 + 0x3684),
                                           *(int *)(iVar5 + 0x3688) + 0x1370,0x140000,0);
                      piVar4 = piVar1 + 0x113c;
                      *piVar4 = iVar9;
                      if (iVar9 == 0) goto LAB_10027694;
                      iVar5 = *piVar3;
                      iVar9 = 0;
                      if (*(int *)(iVar5 + 0x3680) != 0) {
                        iVar9 = *(int *)(iVar5 + 0x3680) + 0x520;
                      }
                      iVar9 = FUN_100614e8(iVar9,*(undefined4 *)(iVar5 + 0x3684),
                                           *(int *)(iVar5 + 0x3688) + 0x1370,0x10000,0);
                      piVar1[0x113d] = iVar9;
                      if (iVar9 == 0) {
                        iVar9 = *piVar4;
                        if (iVar9 != 0) {
                          FUN_10061340(iVar9);
                          FUN_100833b0(iVar9,0x78);
                        }
                        *piVar4 = 0;
                        goto LAB_10027694;
                      }
                      piVar1[0x10f6] = 0;
                      *(undefined2 *)(piVar1 + 0x1125) = 0;
                      *(undefined1 *)((int)piVar1 + 0x4496) = 0;
                      piVar1[0x1132] = -1;
                      *(int *)(*piVar3 + 0x3620) = piVar1[0x10f3];
                      iVar9 = *(int *)(*piVar3 + 0x3688);
                      piVar1[0x1141] = *(int *)(*piVar3 + 0x3680);
                      piVar1[0x1142] = iVar9;
                      *(undefined1 *)(piVar1 + 0x1140) = 1;
                      FUN_10031058(piVar2,1,1);
                      switch(*(undefined4 *)((int)local_274 + 0x33)) {
                      default:
                        uVar12 = FUN_10030a80(piVar1 + 0x119a);
                        if ((uVar12 & 1) != 0) {
                          return 1;
                        }
                        break;
                      case 2:
                        uVar12 = FUN_10030a80(piVar1 + 0x119a);
                        if ((uVar12 & 1) != 0) {
                          uVar12 = FUN_10030a80(piVar1 + 0x1da3);
                          if ((uVar12 & 1) != 0) {
                            return 1;
                          }
LAB_10027604:
                          FUN_10030bb8(piVar1 + 0x119a);
                        }
                        break;
                      case 3:
                        uVar12 = FUN_10030a80(piVar1 + 0x119a);
                        if ((uVar12 & 1) != 0) {
                          uVar12 = FUN_10030a80(piVar1 + 0x1da3);
                          if ((uVar12 & 1) != 0) {
                            uVar12 = FUN_10030a80(piVar1 + 0x29ac);
                            if ((uVar12 & 1) != 0) {
                              return 1;
                            }
                            FUN_10030bb8(piVar1 + 0x1da3);
                          }
                          goto LAB_10027604;
                        }
                      }
                      FUN_10030da0(piVar2);
                    }
                    FUN_1001b370(local_27c);
                  }
                  FUN_10011470(piVar1);
                  goto LAB_100277bc;
                }
                iVar9 = piVar1[0xda5];
                if (iVar9 != 0) {
                  FUN_10061340(iVar9);
                  FUN_100833b0(iVar9,0x78);
                }
              }
              uVar10 = (*pcVar14)();
              (*extraout_w11_03)(uVar10);
              goto LAB_100277bc;
            }
            uVar10 = (*pcVar14)();
            (*extraout_w11_04)(uVar10);
            *piVar3 = 0;
          }
          uVar10 = (*pcVar14)();
          (*extraout_w11_05)(uVar10);
          param_1[0xdac] = 0;
        }
        uVar10 = (*pcVar14)();
        (*extraout_w11_06)(uVar10);
        param_1[0xdab] = 0;
      }
    }
  }
LAB_100277bc:
  piVar1 = local_270;
  uVar10 = (*pcVar14)();
  (*extraout_w11_09)(uVar10);
  *piVar1 = 0;
LAB_100277ec:
  FUN_100654d0(*local_284,*local_26c);
  return 0;
}

