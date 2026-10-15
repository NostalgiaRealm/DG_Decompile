/*
 * FUN_1801ab5f0 at 1801ab5f0
 * undefined FUN_1801ab5f0(void)
 * Address ranges: 1801ab5f0-1801aba6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801ab5f0(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5,
             longlong *param_6,int *param_7)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  ulonglong uVar11;
  undefined8 uVar12;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_60;
  longlong local_58;
  longlong local_50;
  
  FUN_180221ec0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  uVar12 = 2;
  if (*(char *)(param_1 + -0xb3) == '\x01') {
    FUN_180221ec0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  }
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  local_50 = (*extraout_x11)(param_1 + -0x100,1);
  if (local_50 == 0) {
    return 2;
  }
  if ((*(int *)(param_1 + -0xd4) - 0x24U & 0xfffffffa) == 0) {
    if (*(longlong *)(param_1 + -0x2c) == 0) {
      *(undefined1 *)(param_1 + -4) = 1;
      FUN_1801a6db8(param_1 + -0x50,*(undefined4 *)(param_1 + -0xd0),
                    *(undefined4 *)(param_1 + -0xcc));
      FUN_1801a93c0(param_1 + -0x100);
    }
    lVar10 = *(longlong *)(param_1 + -0x2c);
  }
  else {
    if (*(longlong *)(param_1 + -0x3c) == 0) {
      FUN_1801bad48(&local_78);
      FUN_1801a7528(param_1 + -0x50,*(undefined4 *)(param_1 + -0xdc),
                    *(undefined4 *)(param_1 + -0xd8),*(undefined4 *)(param_1 + -0xd0),
                    *(undefined4 *)(param_1 + -0xcc),1,local_78 & 0xffffffff,local_78._4_4_,0,0x1688
                    ,0x1688,local_70._4_4_,local_68,0,0,0,0);
      FUN_1801a93c0(param_1 + -0x100);
    }
    lVar10 = *(longlong *)(param_1 + -0x3c);
  }
  if (lVar10 == 0) {
    return 2;
  }
  uVar3 = *(uint *)(param_1 + -0xd4);
  local_60 = param_2 + *(int *)(param_1 + -0xc4) * param_3;
  uVar11 = (ulonglong)local_60;
  if ((uVar3 - 0x24 & 0xfffffffa) != 0) {
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_02)(param_1 + -0x100,param_2,param_3);
    uVar11 = FUN_18020e970(*(undefined8 *)(*(longlong *)(param_1 + -0xb0) + 0x1b500),
                           *(undefined8 *)(param_1 + -0x3c));
    if ((uVar11 & 1) == 0) {
      lVar10 = *(longlong *)(param_1 + 0x38);
      if (lVar10 == 0) {
        lVar10 = FUN_180208508(*(undefined8 *)(*(longlong *)(param_1 + -0xa8) + 0x1508));
      }
      cVar7 = FUN_180207560(*(longlong *)(*(longlong *)(param_1 + -0xa8) + 0x1508) + 8,0);
      if (cVar7 == '\0' || (cVar7 == '\0' || lVar10 == 0)) {
        FUN_18020e768(*(undefined8 *)(*(longlong *)(param_1 + -0xb0) + 0x1b500),
                      *(undefined8 *)(param_1 + -0x3c),0);
      }
      else {
        FUN_1802085e0(*(undefined8 *)(*(longlong *)(param_1 + -0xa8) + 0x1508),lVar10);
      }
    }
    local_58 = 0;
    lVar10 = (ulonglong)local_60 * 0x20;
    piVar2 = (int *)(*(longlong *)(param_1 + -0x2c) + lVar10);
    local_78 = (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x2c) + lVar10);
    local_70 = (ulonglong)(uint)(piVar2[1] + *piVar2);
    uVar12 = (*(code *)puVar6)(0x180224000);
    (*extraout_x11_03)(uVar12,0,&local_78,&local_58);
    *param_6 = local_58 + (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x2c) + lVar10);
    *param_7 = *(int *)(lVar10 + *(longlong *)(param_1 + -0x2c) + 8);
    return 0;
  }
  lVar10 = *(longlong *)(param_1 + -0x2c);
  local_7c = 0;
  if (lVar10 != 0) {
    if ((uVar3 - 0x24 & 0xfffffffa) == 0) {
      local_7c = *(uint *)(&DAT_18022e050 + (ulonglong)uVar3 * 4);
      lVar5 = uVar11 * 0x20;
      if (local_7c == 0x18) {
        local_7c = 0x20;
      }
      if (*(longlong *)(lVar10 + lVar5) == 0) {
        uVar3 = *(uint *)(param_1 + -0xdc) >> (ulonglong)(param_2 & 0x1f);
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        uVar4 = *(uint *)(param_1 + -0xd8) >> (ulonglong)(param_2 & 0x1f);
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        *(uint *)((longlong *)(lVar10 + lVar5) + 1) = uVar3 * local_7c >> 3;
        uVar9 = FUN_1802229a8(*(int *)(lVar5 + *(longlong *)(param_1 + -0x2c) + 8) * uVar4);
        *(undefined8 *)(*(longlong *)(param_1 + -0x2c) + lVar5) = uVar9;
      }
      local_7c = local_7c >> 3;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + -0x2c) + lVar5);
    }
    else {
      puVar1 = (uint *)(lVar10 + uVar11 * 0x20);
      local_78 = (ulonglong)*puVar1;
      local_58 = 0;
      local_70 = (ulonglong)(puVar1[1] + *puVar1);
      uVar9 = (*(code *)puVar6)(0x180224000);
      iVar8 = (*extraout_x11_00)(uVar9,0,&local_78,&local_58);
      if (iVar8 < 0) goto LAB_1801ab85c;
      lVar10 = local_58 + (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x2c) + uVar11 * 0x20);
    }
    *param_6 = lVar10;
    *param_7 = *(int *)(uVar11 * 0x20 + *(longlong *)(param_1 + -0x2c) + 8);
  }
LAB_1801ab85c:
  if (*param_6 != 0) {
    uVar11 = (ulonglong)local_60;
    lVar10 = *(longlong *)(param_1 + -0x7c) + uVar11 * 0x20;
    local_60 = thunk_FUN_180223d24(lVar10 + 0x10);
    local_78._0_4_ = *(int *)(lVar10 + 0x10);
    local_78._4_4_ = *(int *)(lVar10 + 0x14);
    local_70 = (ulonglong)*(uint *)(lVar10 + 0x18) << 0x20;
    local_68 = *(undefined4 *)(lVar10 + 0x1c);
    uStack_64 = 1;
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_01)(param_1 + -0x100,param_2,param_3);
    uVar12 = 0;
    if ((local_60 == 0) &&
       (uVar11 = FUN_18020b9c8(*(undefined8 *)(*(longlong *)(param_1 + -0xa8) + 0x1508),
                               *(undefined8 *)(local_50 + 0x14),uVar11,
                               param_2 + (*(int *)(param_1 + -0xcc) + param_3) *
                                         *(int *)(param_1 + -0xc4),
                               *(longlong *)(param_1 + -0xa8) + 0x1760,&local_78,
                               (ulonglong)(uint)(*param_7 * local_78._4_4_) +
                               (ulonglong)((int)local_78 * local_7c) + *param_6,*param_7,0),
       (uVar11 & 1) == 0)) {
      uVar12 = 2;
    }
  }
  return uVar12;
}

