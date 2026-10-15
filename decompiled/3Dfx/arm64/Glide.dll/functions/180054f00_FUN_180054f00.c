/*
 * FUN_180054f00 at 180054f00
 * undefined8 __cdecl FUN_180054f00(longlong * param_1, longlong param_2, ulonglong * param_3, int param_4, uint * param_5, undefined8 * param_6)
 * Address ranges: 180054f00-1800557ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180054f00(longlong *param_1,longlong param_2,ulonglong *param_3,int param_4,uint *param_5,
             undefined8 *param_6)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  uint *puVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  float fVar17;
  float fVar18;
  uint local_200 [2];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  int local_1f0;
  int local_1ec;
  uint local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  uint local_1d8;
  uint local_1d4;
  char local_1d0;
  char local_1cf;
  undefined8 local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  int *local_188;
  undefined8 local_180;
  float local_178;
  undefined8 local_174;
  ulonglong *local_168;
  longlong local_160;
  float local_158;
  float fStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  float *local_148;
  float *local_140;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 auStack_100 [16];
  uint local_f0;
  uint local_e8;
  int local_e0;
  uint *local_c0;
  undefined8 *puStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  uint local_80;
  uint local_78;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar16 = *(uint **)(param_2 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8 + 0xd88);
  FUN_18004b248(param_1[(ulonglong)uVar2 * 0x358 + 0x447],(longlong *)&local_168,
                *(uint *)(param_2 + 0xd98),*(uint *)(param_2 + 0xd78));
  (**(code **)(*(longlong *)param_3[1] + 0x50))((longlong *)param_3[1],auStack_90);
  (**(code **)(*(longlong *)puVar16 + 0x50))(puVar16,auStack_100);
  puVar5 = FUN_180052060((longlong)param_1,local_200,param_2,(int *)param_5,local_80,local_78,
                         local_f0,local_e8,param_4,local_e0);
  if (((local_200[0] == 0) && (local_1d0 == '\0')) && (local_1cf == '\0')) {
    return 0;
  }
  *(int *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1] + 0x684) =
       *(int *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1] + 0x684) + 1;
  if (*param_3 != 0) {
    FUN_180054a48(puVar5,(longlong)(param_1 + (ulonglong)uVar2 * 0x358 + 0x120),param_3[1],*param_3,
                  param_4);
  }
  if (local_1d0 != '\0') {
    FUN_18004bee8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],(ulonglong)puVar16,0,0,4);
    bVar1 = local_1dc != 0;
    if (bVar1) {
      local_1b0 = (uint *)0x0;
      local_1a8 = (ulonglong *)CONCAT44(local_1dc,local_f0);
    }
    uVar9 = (ulonglong)bVar1;
    if (local_1e0 != 0) {
      *(undefined4 *)(&local_1b0 + uVar9 * 2) = 0;
      *(int *)((longlong)&local_1b0 + uVar9 * 0x10 + 4) = local_1dc;
      *(int *)(&local_1a8 + uVar9 * 2) = local_1e0;
      *(uint *)((longlong)&local_1a8 + uVar9 * 0x10 + 4) = local_1d4;
      uVar9 = (ulonglong)(bVar1 + 1);
    }
    if (local_1d8 != local_f0) {
      *(uint *)(&local_1b0 + uVar9 * 2) = local_1d8;
      *(int *)((longlong)&local_1b0 + uVar9 * 0x10 + 4) = local_1dc;
      *(uint *)(&local_1a8 + uVar9 * 2) = local_f0;
      *(uint *)((longlong)&local_1a8 + uVar9 * 0x10 + 4) = local_1d4;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    }
    if (local_1d4 != local_e8) {
      *(undefined4 *)(&local_1b0 + uVar9 * 2) = 0;
      *(uint *)((longlong)&local_1b0 + uVar9 * 0x10 + 4) = local_1d4;
      *(uint *)(&local_1a8 + uVar9 * 2) = local_f0;
      *(uint *)((longlong)&local_1a8 + uVar9 * 0x10 + 4) = local_e8;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    }
    local_1c8 = (float *)0x0;
    local_1c0 = 0;
    FUN_18004d188(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],local_168,&local_1c8,(int)uVar9,
                  &local_1b0);
  }
  if (param_3[2] == 0) goto LAB_1800556a8;
  if (((local_200[0] != 0) || (local_1cf != '\0')) ||
     ((local_1e8 - local_1f0 != local_1d8 - local_1e0 ||
      (bVar1 = true, local_1e4 - local_1ec != local_1d4 - local_1dc)))) {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar13 = *(uint *)(param_2 + 0x20);
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18005515c);
      (*pcVar4)();
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = (local_1e8 - local_1f0) / uVar13;
    }
    if (uVar12 < (local_1d8 - local_1e0) * 2) {
      uVar13 = *(uint *)(param_2 + 0x24);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180055180);
        (*pcVar4)();
      }
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = (uint)(local_1e4 - local_1ec) / uVar13;
      }
      bVar3 = false;
      if ((local_1d4 - local_1dc) * 2 <= uVar12) goto LAB_180055190;
    }
    else {
LAB_180055190:
      bVar3 = true;
    }
    fVar17 = 4.2039e-45;
    if (*(int *)(param_2 + 0x2c) != 7) {
      fVar17 = 1.4013e-45;
    }
    iVar14 = 5;
    if (!bVar3) {
      iVar14 = 0;
    }
    uVar9 = FUN_18004a438(param_1[(ulonglong)uVar2 * 0x358 + 0x44a],iVar14 + (int)fVar17,
                          *(longlong *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c0] + 0x18),
                          *(longlong *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1] + 0xb78),
                          (longlong *)&local_130);
    if ((uVar9 & 1) != 0) {
      uVar8 = 2;
      lVar10 = *(longlong *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c0] + 0x18);
      plVar6 = FUN_180045f40(param_1[(ulonglong)uVar2 * 0x358 + 0x122] + 0x40,&local_160,2,lVar10,
                             param_1[(ulonglong)uVar2 * 0x358 + 0x13a]);
      puStack_b8 = (undefined8 *)plVar6[1];
      local_c0 = (uint *)*plVar6;
      local_b0 = plVar6[2];
      if (puStack_b8 != (undefined8 *)0x0) {
        local_1c8 = (float *)(param_1 + (ulonglong)uVar2 * 0x358 + 0x13c);
        FUN_180052400((longlong)param_1,param_2,uVar8,lVar10,local_f0,local_e8,*param_5,param_5[1],
                      param_5[2],local_1c8);
        thunk_FUN_180001218(puStack_b8,(undefined8 *)local_1c8,0x1040);
        if (*(int *)(param_1[(ulonglong)uVar2 * 0x358 + 0x122] + 0x34) != 0) {
          *(undefined4 *)(param_1[(ulonglong)uVar2 * 0x358 + 0x122] + 0x34) = 0;
        }
      }
      FUN_180045f40(param_1[(ulonglong)uVar2 * 0x358 + 0x121] + 0x40,(longlong *)&local_148,2,
                    *(longlong *)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c0] + 0x18),
                    param_1[(ulonglong)uVar2 * 0x358 + 0x13a]);
      if (local_140 != (float *)0x0) {
        *(longlong **)(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1] + 0xb88) = param_1;
        if ((*(int *)(param_2 + 0x2c) == 7) &&
           (uVar9 = FUN_18005ce18((longlong)param_1,(ulonglong)*(uint *)(param_2 + 0x10),
                                  (longlong *)&local_c0,(longlong *)&local_130,
                                  (longlong *)&local_148,1,param_3[1],param_3[3],local_80,local_78),
           (uVar9 & 1) != 0)) {
          param_3[1] = param_1[(ulonglong)uVar2 * 0x358 + 0x46f];
          puVar7 = (ulonglong *)
                   FUN_18004b248(param_1[(ulonglong)uVar2 * 0x358 + 0x446],&local_1c8,
                                 (int)param_1[(ulonglong)uVar2 * 0x358 + 0x46d] + 1,0);
          param_3[3] = *puVar7;
        }
        *(undefined4 *)(param_1 + (ulonglong)uVar2 * 0x358 + 0x130) = 1;
        *(int *)((longlong)param_1 + (ulonglong)uVar2 * 0x1ac0 + 0x984) = local_e0;
        lVar10 = FUN_18001c3d8(param_1 + (ulonglong)uVar2 * 0x358 + 0x44f,(int *)&DAT_1800632c0);
        param_1[(ulonglong)uVar2 * 0x358 + 0x12a] = lVar10;
        lVar10 = FUN_18001c660(param_1 + (ulonglong)uVar2 * 0x358 + 0x44c,(int *)&DAT_180063250);
        param_1[(ulonglong)uVar2 * 0x358 + 0x12d] = lVar10;
        lVar10 = FUN_18001c1a0(param_1 + (ulonglong)uVar2 * 0x358 + 0x455,(uint *)&DAT_180063288);
        lVar15 = param_1[(ulonglong)uVar2 * 0x358 + 0x121];
        param_1[(ulonglong)uVar2 * 0x358 + 300] = lVar10;
        if (*(int *)(lVar15 + 0x34) != 0) {
          *(undefined4 *)(lVar15 + 0x34) = 0;
        }
        uVar9 = param_1[(ulonglong)uVar2 * 0x358 + 0x3c1];
        FUN_180046ef8(*(longlong *)(uVar9 + 0xb18),param_1[(ulonglong)uVar2 * 0x358 + 0x123],
                      *(ulonglong *)(uVar9 + 0xb10),uVar9,*(ulonglong *)(uVar9 + 0xb78));
        FUN_18004c390(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],
                      param_1[(ulonglong)uVar2 * 0x358 + 0x123]);
        FUN_18004c2d8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,&local_120);
        FUN_18004c4c8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],5);
        local_1c8 = local_148;
        local_1c0 = 0x1000000200;
        FUN_18004c978(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],0,1,(longlong)&local_1c8);
        FUN_18004c670(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],0,(longlong)local_c0);
        if (*(int *)(param_2 + 0x2c) != 7) {
          local_1b0 = local_200;
          local_1a8 = &local_130;
          local_174 = 0;
          local_1a0 = &local_148;
          local_188 = (int *)param_3[1];
          local_180 = param_3[3];
          local_198 = param_1 + (ulonglong)uVar2 * 0x358 + 0x120;
          local_190 = param_2;
          local_178 = fVar17;
          FUN_180052528(param_1,local_200,param_2,&local_1b0);
          param_3[1] = (ulonglong)local_188;
          param_3[3] = local_180;
        }
        if ((((local_200[0] != 0) || (local_1cf != '\0')) ||
            (local_1e8 - local_1f0 != local_1d8 - local_1e0)) ||
           (bVar1 = true, local_1e4 - local_1ec != local_1d4 - local_1dc)) {
          bVar1 = false;
        }
        if (bVar1) goto LAB_180055608;
        lVar10 = param_1[(ulonglong)uVar2 * 0x358 +
                         (ulonglong)(byte)(&DAT_1800631c8)[local_200[0]] + 0x348];
        param_1[(ulonglong)uVar2 * 0x358 + 0x124] = param_1[(ulonglong)uVar2 * 0x358 + 0x373];
        param_1[(ulonglong)uVar2 * 0x358 + 0x125] = lVar10;
        param_1[(ulonglong)uVar2 * 0x358 + 0x12e] = param_1[(ulonglong)uVar2 * 0x358 + 0x375];
        uVar9 = FUN_1800450c0((longlong)(param_1 + (ulonglong)uVar2 * 0x358 + 0x45b),
                              (byte *)(param_1 + (ulonglong)uVar2 * 0x358 + 0x123));
        uVar11 = param_1[(ulonglong)uVar2 * 0x358 + 0x3c1];
        FUN_180046ef8(*(longlong *)(uVar11 + 0xb18),uVar9,*(ulonglong *)(uVar11 + 0xb10),uVar11,
                      *(ulonglong *)(uVar11 + 0xb78));
        FUN_18004c478(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],uVar9);
        FUN_18004bee8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],(ulonglong)puVar16,0,0,4);
        FUN_18004bee8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],param_3[1],0,0,0x80);
        (**(code **)(*(longlong *)param_1[(ulonglong)*(uint *)(param_2 + 0x10) * 4 + 0xda] + 0xc0))
                  ((longlong *)param_1[(ulonglong)*(uint *)(param_2 + 0x10) * 4 + 0xda],1,
                   CONCAT44(uStack_124,local_128),param_3[3],0);
        FUN_18004c6d0(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,local_130);
        FUN_18004cbd8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,(longlong *)&local_168,0,
                      (longlong *)0x0);
        local_160 = 0;
        local_150 = 0;
        local_1c8 = (float *)0x0;
        local_158 = (float)local_f0;
        fStack_154 = (float)local_e8;
        local_1c0 = CONCAT44(local_e8,local_f0);
        local_14c = 0x3f800000;
        FUN_18004cec0(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,(longlong)&local_160);
        uVar8 = FUN_18004cdf0(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],1,(longlong)&local_1c8);
        if ((&DAT_180063208)[local_200[0]] == '\0') {
          uVar12 = 0;
          uVar13 = 0;
        }
        else {
          uVar8 = (**(code **)(*(longlong *)param_3[1] + 0x50))((longlong *)param_3[1],&local_1b0);
          uVar12 = (uint)local_1a0;
          uVar13 = (uint)local_198;
        }
        FUN_180052758(uVar8,param_2,(longlong)local_200,local_140,uVar12,uVar13);
        FUN_18004d280(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],4,1,0,0);
        bVar1 = false;
      }
    }
    if (!bVar1) goto LAB_1800556a8;
  }
LAB_180055608:
  FUN_18004bee8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],(ulonglong)puVar16,0,0,0x400);
  FUN_18004bee8(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],param_3[1],0,0,0x800);
  local_130 = param_3[1];
  puStack_b8 = (undefined8 *)((ulonglong)puStack_b8 & 0xffffffff00000000);
  uStack_a0 = 0;
  uStack_a8 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_128 = 0;
  local_1c8 = (float *)CONCAT44(local_1ec,local_1f0);
  local_120 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  local_108 = 0;
  local_1c0 = (ulonglong)local_1e8 << 0x20;
  local_1b8 = local_1e4;
  uStack_1b4 = 1;
  local_c0 = puVar16;
  FUN_18004d100(param_1[(ulonglong)uVar2 * 0x358 + 0x3c1],&local_c0,local_1e0,local_1dc,0,&local_130
                ,&local_1c8);
LAB_1800556a8:
  if (param_6 != (undefined8 *)0x0) {
    fVar17 = (float)((local_1d8 - local_1e0) * *(int *)(param_2 + 0x20)) /
             (float)(int)(local_1e8 - local_1f0);
    local_1a8 = local_168;
    local_1a0 = (float **)CONCAT44(local_1f8,local_e0);
    fVar18 = (float)((local_1d4 - local_1dc) * *(int *)(param_2 + 0x24)) /
             (float)(local_1e4 - local_1ec);
    local_198 = (longlong *)CONCAT44(local_f0,uStack_1f4);
    local_190 = CONCAT44(local_190._4_4_,local_e8);
    local_188 = &local_1e0;
    local_180 = CONCAT44(fVar18,fVar17);
    local_178 = (float)local_1e0 - (float)local_1f0 * fVar17;
    local_174 = CONCAT44(local_174._4_4_,(float)local_1dc - (float)local_1ec * fVar18);
    local_1b0 = puVar16;
    (**(code **)*param_6)(param_6,&local_1b0);
  }
  lVar10 = param_1[(ulonglong)uVar2 * 0x358 + 0x3c1];
  iVar14 = *(int *)(lVar10 + 0x684) + -1;
  *(int *)(lVar10 + 0x684) = iVar14;
  if ((iVar14 == 0) && (*(int *)(lVar10 + 0x680) <= *(int *)(lVar10 + 0x678))) {
    FUN_18004baf0(lVar10 + 8,0);
  }
  return 1;
}

