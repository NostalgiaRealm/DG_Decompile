/*
 * FUN_18001b968 at 18001b968
 * undefined8 __cdecl FUN_18001b968(longlong param_1, ulonglong param_2, ulonglong param_3, char param_4)
 * Address ranges: 18001b968-18001be27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001b968(longlong param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float local_f0 [4];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar12 = param_1 + (param_2 & 0xffffffff) * 0x170;
  if ((param_3 & 1) != 0) {
    uVar4 = *(uint *)(lVar12 + 0x168);
    uVar5 = *(uint *)(lVar12 + 0x16c);
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340);
    bVar8 = FUN_18000db68(*(longlong *)(param_1 + 0x140));
    *(bool *)(*(longlong *)(param_1 + 0x140) + 0x3458) = bVar8;
    cVar7 = *(char *)(lVar12 + 0x1dc);
    lVar11 = 0x150;
    if (cVar7 != '\0') {
      lVar11 = 0x154;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2d34) = *(undefined4 *)(lVar11 + lVar12);
    local_d0 = 0;
    fStack_c4 = (float)*(uint *)(lVar12 + 0x16c);
    local_c8 = (float)*(uint *)(lVar12 + 0x168);
    local_c0 = 0x3f80000000000000;
    FUN_18004fc00(*(longlong *)(lVar13 + 0x1508),1,(longlong)&local_d0);
    local_88 = *(undefined4 *)(lVar12 + 0x168);
    uStack_84 = *(undefined4 *)(lVar12 + 0x16c);
    local_90 = 0;
    FUN_18004fb30(*(longlong *)(lVar13 + 0x1508),1,(longlong)&local_90);
    *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c90) = (float)*(uint *)(lVar12 + 0x168);
    *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c94) = (float)*(uint *)(lVar12 + 0x16c);
    uVar10 = FUN_18000faf8((longlong *)(lVar13 + 0x1978),(int *)&DAT_1800658d0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33e0) = uVar10;
    uVar10 = FUN_18000fd80((longlong *)(lVar13 + 0x1960),(int *)&DAT_180065828);
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33f8) = uVar10;
    uVar10 = FUN_18000f8c0((longlong *)(lVar13 + 0x19a8),(uint *)&DAT_180065860);
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33f0) = uVar10;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x345a) = 1;
    if (*(ulonglong *)(lVar12 + 0x220) != *(ulonglong *)(lVar12 + 0x228)) {
      FUN_18004ec28(*(ulonglong *)(lVar13 + 0x1508),*(ulonglong *)(lVar12 + 0x228),0,0,0x1000);
      FUN_18004ec28(*(ulonglong *)(lVar13 + 0x1508),*(ulonglong *)(lVar12 + 0x220),0,0,0x2000);
      FUN_18004fcf8(*(longlong *)(lVar13 + 0x1508),*(undefined8 *)(lVar12 + 0x228),0,
                    *(undefined8 *)(lVar12 + 0x220),0,*(undefined4 *)(lVar12 + 0x14c));
    }
    local_f0[2] = (float)uVar4;
    local_f0[0] = 0.0;
    local_f0[1] = 0.0;
    uVar6 = *(uint *)(lVar12 + 0x16c);
    bVar8 = *(int *)(lVar12 + 0x1b8) == 1;
    uVar4 = 0;
    if (bVar8) {
      uVar4 = uVar6;
    }
    local_98 = (float)*(uint *)(lVar12 + 0x170) / (float)*(uint *)(lVar12 + 0x168);
    fStack_94 = (float)*(uint *)(lVar12 + 0x174) / (float)uVar6;
    local_f0[3] = (float)uVar5;
    local_a0 = local_98 * 0.0;
    if (bVar8) {
      uVar5 = uVar6 - uVar5;
    }
    fStack_9c = (float)uVar4 * fStack_94;
    bVar8 = cVar7 == '\0';
    lVar11 = 0x2a4;
    if (bVar8) {
      lVar11 = 0x274;
    }
    local_98 = local_f0[2] * local_98;
    lVar13 = 0x2ac;
    if (bVar8) {
      lVar13 = 0x27c;
    }
    lVar1 = 0x290;
    if (bVar8) {
      lVar1 = 0x260;
    }
    lVar2 = 0x288;
    if (bVar8) {
      lVar2 = 600;
    }
    fStack_94 = (float)uVar5 * fStack_94;
    lVar3 = 0xb58;
    if (*(char *)(lVar12 + 400) != '\0') {
      lVar3 = 0xb60;
    }
    FUN_180019058(param_1,local_f0,&local_a0,*(undefined8 *)(param_1 + lVar3),
                  *(ulonglong *)(lVar12 + 0x228),0,*(ulonglong *)(lVar12 + lVar2),
                  *(ulonglong *)(lVar12 + lVar1),0,*(undefined4 *)(lVar12 + lVar13),
                  *(undefined4 *)(lVar12 + lVar13),*(undefined4 *)(lVar12 + 0x250),1,
                  *(uint *)(lVar12 + 0x230),*(uint *)(lVar12 + 0x248),*(uint *)(lVar12 + lVar11),
                  *(uint *)(lVar12 + lVar11) + 1,0xffffffff,1,0,0);
    FUN_18000e700(*(longlong *)(param_1 + 0x140));
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c79) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c78) = 1;
    local_f0[0] = 0.0;
    local_f0[1] = 0.0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7a) = 1;
    local_78 = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7b) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x32f1) = 1;
    local_f0[3] = *(float *)(lVar12 + 0x168);
    local_e0 = *(undefined4 *)(lVar12 + 0x16c);
    bVar8 = param_4 == '\0';
    lVar11 = 0x298;
    if (bVar8) {
      lVar11 = 0x268;
    }
    local_d0 = *(undefined8 *)(lVar12 + lVar11);
    local_c8 = 1.4013e-45;
    local_c0 = 0;
    uStack_dc = 1;
    _local_b0 = CONCAT44(1,local_e0);
    lVar13 = 0x2ac;
    if (bVar8) {
      lVar13 = 0x27c;
    }
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_f0[2] = 0.0;
    local_70 = 0;
    _uStack_b8 = CONCAT44(local_f0[3],*(undefined4 *)(lVar12 + lVar13));
    lVar13 = 0x2b0;
    if (bVar8) {
      lVar13 = 0x280;
    }
    local_a8 = (ulonglong)*(uint *)(lVar12 + lVar13);
    lVar13 = 0x288;
    if (bVar8) {
      lVar13 = 600;
    }
    local_80 = *(ulonglong *)(lVar12 + lVar13);
    FUN_18004ec28(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),
                  local_80,0,0,0x800);
    FUN_18004ec28(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),
                  *(ulonglong *)(lVar12 + lVar11),0,1,0x400);
    FUN_18004fe40(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),
                  &local_d0,0,local_f0[1],0,&local_80,local_f0);
    FUN_18004ec28(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),
                  *(ulonglong *)(lVar12 + lVar11),0,1,0);
    lVar11 = FUN_18004ecf8(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508));
    *(longlong *)(lVar12 + 0x218) = lVar11;
  }
  FUN_180019f70(param_1,lVar12 + 0x148,param_4);
  local_d8 = 0;
  lVar11 = 0x298;
  if (param_4 == '\0') {
    lVar11 = 0x268;
  }
  iVar9 = (**(code **)(**(longlong **)(lVar12 + lVar11) + 0x40))
                    (*(longlong **)(lVar12 + lVar11),0,0,&local_d8);
  if (iVar9 < 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    *(undefined8 *)(lVar12 + 0x1c8) = local_d8;
    lVar11 = 0x2b0;
    if (param_4 == '\0') {
      lVar11 = 0x280;
    }
    *(undefined4 *)(lVar12 + 0x1d0) = *(undefined4 *)(lVar12 + lVar11);
  }
  return uVar10;
}

