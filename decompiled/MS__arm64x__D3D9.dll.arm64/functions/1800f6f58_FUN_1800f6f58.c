/*
 * FUN_1800f6f58 at 1800f6f58
 * undefined FUN_1800f6f58(void)
 * Address ranges: 1800f6f58-1800f77eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800f6f58(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar16;
  undefined8 uVar14;
  longlong lVar15;
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
  longlong *local_168;
  undefined8 local_160;
  float local_158;
  float fStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  longlong local_140;
  longlong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 auStack_100 [16];
  uint local_f0;
  undefined4 uStack_ec;
  uint local_e8;
  undefined4 local_e0;
  uint *local_c0;
  ulonglong uStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
  lVar11 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  puVar10 = *(uint **)(param_2 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8 + 0xd88);
  FUN_1800e7b48(*(undefined8 *)(lVar11 + 0x2238),&local_168,*(undefined4 *)(param_2 + 0xd98));
  (**(code **)(*(longlong *)param_3[1] + 0x50))((longlong *)param_3[1],auStack_90);
  (**(code **)(*(longlong *)puVar10 + 0x50))(puVar10,auStack_100);
  uVar14 = CONCAT44(uVar16,local_e0);
  uVar6 = FUN_1800e42e0(param_1,local_200,param_2,param_5,CONCAT44(uStack_7c,local_80),local_78,
                        CONCAT44(uStack_ec,local_f0),local_e8,param_4,uVar14);
  uVar16 = (undefined4)((ulonglong)uVar14 >> 0x20);
  if (((local_200[0] == 0) && (local_1d0 == '\0')) && (local_1cf == '\0')) {
    return 0;
  }
  *(int *)(*(longlong *)(lVar11 + 0x1e08) + 0x684) =
       *(int *)(*(longlong *)(lVar11 + 0x1e08) + 0x684) + 1;
  if (*param_3 != 0) {
    FUN_1800f66b0(uVar6,lVar11 + 0x900U,param_3[1],*param_3,param_4);
  }
  if (local_1d0 != '\0') {
    FUN_1800e8bb8(*(undefined8 *)(lVar11 + 0x1e08),puVar10,0,0,4);
    bVar1 = local_1dc != 0;
    if (bVar1) {
      local_1b0 = (uint *)0x0;
      local_1a8 = (longlong *)CONCAT44(local_1dc,local_f0);
    }
    uVar8 = (ulonglong)bVar1;
    if (local_1e0 != 0) {
      *(undefined4 *)(&local_1b0 + uVar8 * 2) = 0;
      *(int *)((longlong)&local_1b0 + uVar8 * 0x10 + 4) = local_1dc;
      *(int *)(&local_1a8 + uVar8 * 2) = local_1e0;
      *(uint *)((longlong)&local_1a8 + uVar8 * 0x10 + 4) = local_1d4;
      uVar8 = (ulonglong)(bVar1 + 1);
    }
    if (local_1d8 != local_f0) {
      *(uint *)(&local_1b0 + uVar8 * 2) = local_1d8;
      *(int *)((longlong)&local_1b0 + uVar8 * 0x10 + 4) = local_1dc;
      *(uint *)(&local_1a8 + uVar8 * 2) = local_f0;
      *(uint *)((longlong)&local_1a8 + uVar8 * 0x10 + 4) = local_1d4;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    }
    if (local_1d4 != local_e8) {
      *(undefined4 *)(&local_1b0 + uVar8 * 2) = 0;
      *(uint *)((longlong)&local_1b0 + uVar8 * 0x10 + 4) = local_1d4;
      *(uint *)(&local_1a8 + uVar8 * 2) = local_f0;
      *(uint *)((longlong)&local_1a8 + uVar8 * 0x10 + 4) = local_e8;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    FUN_1800ea578(*(undefined8 *)(lVar11 + 0x1e08),local_168,&local_1c8,uVar8,&local_1b0);
  }
  if (param_3[2] == 0) goto LAB_1800f76e8;
  if (((local_200[0] != 0) || (local_1cf != '\0')) ||
     ((local_1e8 - local_1f0 != local_1d8 - local_1e0 ||
      (bVar1 = true, local_1e4 - local_1ec != local_1d4 - local_1dc)))) {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar2 = *(uint *)(param_2 + 0x20);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f71b4);
      (*pcVar5)();
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (local_1e8 - local_1f0) / uVar2;
    }
    if (uVar3 < (local_1d8 - local_1e0) * 2) {
      uVar2 = *(uint *)(param_2 + 0x24);
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f71d8);
        (*pcVar5)();
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (uint)(local_1e4 - local_1ec) / uVar2;
      }
      bVar4 = false;
      if ((local_1d4 - local_1dc) * 2 <= uVar3) goto LAB_1800f71e8;
    }
    else {
LAB_1800f71e8:
      bVar4 = true;
    }
    fVar12 = 4.2039e-45;
    if (*(int *)(param_2 + 0x2c) != 7) {
      fVar12 = 1.4013e-45;
    }
    iVar9 = 5;
    if (!bVar4) {
      iVar9 = 0;
    }
    uVar8 = FUN_1800f2c40(*(undefined8 *)(lVar11 + 0x2250),iVar9 + (int)fVar12,
                          *(undefined8 *)(*(longlong *)(lVar11 + 0x1e00) + 0x18),
                          *(undefined8 *)(*(longlong *)(lVar11 + 0x1e08) + 0xb78),&local_130);
    if ((uVar8 & 1) != 0) {
      plVar7 = (longlong *)
               FUN_1800eef60(*(longlong *)(lVar11 + 0x910) + 0x40,&local_160,2,
                             *(undefined8 *)(*(longlong *)(lVar11 + 0x1e00) + 0x18),
                             *(undefined8 *)(lVar11 + 0x9d0));
      uStack_b8 = plVar7[1];
      local_c0 = (uint *)*plVar7;
      local_b0 = plVar7[2];
      if (uStack_b8 != 0) {
        lVar15 = lVar11 + 0x9e0;
        local_1c8 = lVar15;
        FUN_1800e4680(param_1,param_2);
        uVar16 = (undefined4)((ulonglong)lVar15 >> 0x20);
        thunk_FUN_180001218(uStack_b8,local_1c8,0x1040);
        if (*(int *)(*(longlong *)(lVar11 + 0x910) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(lVar11 + 0x910) + 0x34) = 0;
        }
      }
      FUN_1800eef60(*(longlong *)(lVar11 + 0x908) + 0x40,&local_148,2,
                    *(undefined8 *)(*(longlong *)(lVar11 + 0x1e00) + 0x18),
                    *(undefined8 *)(lVar11 + 0x9d0));
      if (local_140 != 0) {
        *(longlong *)(*(longlong *)(lVar11 + 0x1e08) + 0xb88) = param_1;
        if ((*(int *)(param_2 + 0x2c) == 7) &&
           (uVar8 = FUN_1800ff130(param_1,*(undefined4 *)(param_2 + 0x10),&local_c0,&local_130,
                                  &local_148,1,param_3[1],param_3[3],local_80,
                                  CONCAT44(uVar16,local_78)), (uVar8 & 1) != 0)) {
          param_3[1] = *(longlong *)(lVar11 + 0x2378);
          plVar7 = (longlong *)
                   FUN_1800e7b48(*(undefined8 *)(lVar11 + 0x2230),&local_1c8,
                                 *(int *)(lVar11 + 0x2368) + 1,0);
          param_3[3] = *plVar7;
        }
        *(undefined4 *)(lVar11 + 0x980) = 1;
        *(undefined4 *)(lVar11 + 0x984) = local_e0;
        uVar6 = FUN_18008e550(lVar11 + 0x2278,&DAT_180232fa0);
        *(undefined8 *)(lVar11 + 0x950) = uVar6;
        uVar6 = FUN_180042050(lVar11 + 0x2260,&DAT_180232f30);
        *(undefined8 *)(lVar11 + 0x968) = uVar6;
        uVar6 = FUN_180041d70(lVar11 + 0x22a8,&DAT_180232f68);
        *(undefined8 *)(lVar11 + 0x960) = uVar6;
        if (*(int *)(*(longlong *)(lVar11 + 0x908) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(lVar11 + 0x908) + 0x34) = 0;
        }
        FUN_1800e8910(*(undefined8 *)(lVar11 + 0x1e08),*(undefined8 *)(lVar11 + 0x918));
        FUN_1800e9780(*(undefined8 *)(lVar11 + 0x1e08),*(undefined8 *)(lVar11 + 0x918));
        FUN_1800e96c8(*(undefined8 *)(lVar11 + 0x1e08),1,&local_120);
        FUN_1800e98b8(*(undefined8 *)(lVar11 + 0x1e08),5);
        local_1c8 = local_148;
        local_1c0 = 0x1000000200;
        FUN_1800e9d68(*(undefined8 *)(lVar11 + 0x1e08),0,1,&local_1c8);
        FUN_1800e9a60(*(undefined8 *)(lVar11 + 0x1e08),0,local_c0);
        if (*(int *)(param_2 + 0x2c) != 7) {
          local_1b0 = local_200;
          local_1a8 = &local_130;
          local_174 = 0;
          local_1a0 = &local_148;
          local_188 = (int *)param_3[1];
          local_180 = param_3[3];
          local_198 = lVar11 + 0x900U;
          local_190 = param_2;
          local_178 = fVar12;
          FUN_1800e47a8(param_1,local_200,param_2,&local_1b0);
          param_3[1] = (longlong)local_188;
          param_3[3] = local_180;
        }
        if ((((local_200[0] != 0) || (local_1cf != '\0')) ||
            (local_1e8 - local_1f0 != local_1d8 - local_1e0)) ||
           (bVar1 = true, local_1e4 - local_1ec != local_1d4 - local_1dc)) {
          bVar1 = false;
        }
        if (bVar1) goto LAB_1800f7648;
        uVar6 = *(undefined8 *)
                 (lVar11 + (ulonglong)(byte)(&DAT_180232e58)[local_200[0]] * 8 + 0x1a40);
        *(undefined8 *)(lVar11 + 0x920) = *(undefined8 *)(lVar11 + 0x1b98);
        *(undefined8 *)(lVar11 + 0x928) = uVar6;
        *(undefined8 *)(lVar11 + 0x970) = *(undefined8 *)(lVar11 + 0x1ba8);
        uVar6 = FUN_1800ede18(lVar11 + 0x22d8,lVar11 + 0x918);
        FUN_1800e8910(*(undefined8 *)(lVar11 + 0x1e08),uVar6);
        FUN_1800e9868(*(undefined8 *)(lVar11 + 0x1e08),uVar6);
        FUN_1800e8bb8(*(undefined8 *)(lVar11 + 0x1e08),puVar10,0,0,4);
        FUN_1800e8bb8(*(undefined8 *)(lVar11 + 0x1e08),param_3[1],0,0,0x80);
        plVar7 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0);
        (**(code **)(*plVar7 + 0xc0))(plVar7,1,CONCAT44(uStack_124,local_128),param_3[3],0);
        FUN_1800e9ac0(*(undefined8 *)(lVar11 + 0x1e08),1,local_130);
        FUN_1800e9fc8(*(undefined8 *)(lVar11 + 0x1e08),1,&local_168,0,0);
        local_160 = 0;
        local_150 = 0;
        local_1c8 = 0;
        local_158 = (float)local_f0;
        fStack_154 = (float)local_e8;
        local_1c0 = CONCAT44(local_e8,local_f0);
        local_14c = 0x3f800000;
        FUN_1800ea2b0(*(undefined8 *)(lVar11 + 0x1e08),1,&local_160);
        uVar6 = FUN_1800ea1e0(*(undefined8 *)(lVar11 + 0x1e08),1,&local_1c8);
        if ((&DAT_180232e98)[local_200[0]] == '\0') {
          plVar7 = (longlong *)0x0;
          uVar8 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)param_3[1] + 0x50))((longlong *)param_3[1],&local_1b0);
          uVar8 = local_198 & 0xffffffff;
          plVar7 = local_1a0;
        }
        FUN_1800e49d8(uVar6,param_2,local_200,local_140,plVar7,uVar8);
        FUN_1800ea670(*(undefined8 *)(lVar11 + 0x1e08),4,1,0,0);
        bVar1 = false;
      }
    }
    if (!bVar1) goto LAB_1800f76e8;
  }
LAB_1800f7648:
  FUN_1800e8bb8(*(undefined8 *)(lVar11 + 0x1e08),puVar10,0,0,0x400);
  FUN_1800e8bb8(*(undefined8 *)(lVar11 + 0x1e08),param_3[1],0,0,0x800);
  local_130 = param_3[1];
  uStack_b8 = uStack_b8 & 0xffffffff00000000;
  uStack_a0 = 0;
  uStack_a8 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_128 = 0;
  local_1c8 = CONCAT44(local_1ec,local_1f0);
  local_120 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  local_108 = 0;
  local_1c0 = (ulonglong)local_1e8 << 0x20;
  local_1b8 = local_1e4;
  uStack_1b4 = 1;
  local_c0 = puVar10;
  FUN_1800ea4f0(*(undefined8 *)(lVar11 + 0x1e08),&local_c0,local_1e0,local_1dc,0,&local_130,
                &local_1c8);
LAB_1800f76e8:
  if (param_6 != (undefined8 *)0x0) {
    fVar12 = (float)((local_1d8 - local_1e0) * *(int *)(param_2 + 0x20)) /
             (float)(int)(local_1e8 - local_1f0);
    local_1a8 = local_168;
    local_1a0 = (longlong *)CONCAT44(local_1f8,local_e0);
    fVar13 = (float)((local_1d4 - local_1dc) * *(int *)(param_2 + 0x24)) /
             (float)(local_1e4 - local_1ec);
    local_198 = CONCAT44(local_f0,uStack_1f4);
    local_190 = CONCAT44(local_190._4_4_,local_e8);
    local_188 = &local_1e0;
    local_180 = CONCAT44(fVar13,fVar12);
    local_178 = (float)local_1e0 - (float)local_1f0 * fVar12;
    local_174 = CONCAT44(local_174._4_4_,(float)local_1dc - (float)local_1ec * fVar13);
    local_1b0 = puVar10;
    (**(code **)*param_6)(param_6,&local_1b0);
  }
  lVar11 = *(longlong *)(lVar11 + 0x1e08);
  iVar9 = *(int *)(lVar11 + 0x684) + -1;
  *(int *)(lVar11 + 0x684) = iVar9;
  if ((iVar9 == 0) && (*(int *)(lVar11 + 0x680) <= *(int *)(lVar11 + 0x678))) {
    FUN_1800e8548(lVar11 + 8,0);
  }
  return 1;
}

