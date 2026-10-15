/*
 * FUN_1800946a0 at 1800946a0
 * undefined FUN_1800946a0(void)
 * Address ranges: 1800946a0-180094ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800946a0(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5,
             longlong *param_6,int *param_7)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FUN_180101df0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  uVar14 = 2;
  if (*(char *)(param_1 + -0xb3) == '\x01') {
    FUN_180101df0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  }
  lVar7 = (**(code **)(*(longlong *)(param_1 + -0x100) + 0xc0))(param_1 + -0x100,1);
  if (lVar7 == 0) {
    return 2;
  }
  if ((*(int *)(param_1 + -0xd4) - 0x24U & 0xfffffffa) == 0) {
    if (*(longlong *)(param_1 + -0x2c) == 0) {
      *(undefined1 *)(param_1 + -4) = 1;
      FUN_180090460(param_1 + -0x50,*(undefined4 *)(param_1 + -0xd0),
                    *(undefined4 *)(param_1 + -0xcc));
      FUN_180092638(param_1 + -0x100);
    }
    lVar10 = *(longlong *)(param_1 + -0x2c);
  }
  else {
    if (*(longlong *)(param_1 + -0x3c) == 0) {
      func_0x0001801bad48(&local_68);
      FUN_180090aa8(param_1 + -0x50,*(undefined4 *)(param_1 + -0xdc),
                    *(undefined4 *)(param_1 + -0xd8),*(undefined4 *)(param_1 + -0xd0),
                    *(undefined4 *)(param_1 + -0xcc),1,local_68 & 0xffffffff,local_68._4_4_,0,0x1688
                    ,0x1688,local_60._4_4_,local_58,0,0,0,0);
      FUN_180092638(param_1 + -0x100);
    }
    lVar10 = *(longlong *)(param_1 + -0x3c);
  }
  if (lVar10 == 0) {
    return 2;
  }
  uVar3 = *(uint *)(param_1 + -0xd4);
  uVar13 = (ulonglong)(param_2 + *(int *)(param_1 + -0xc4) * param_3);
  if ((uVar3 - 0x24 & 0xfffffffa) != 0) {
    (*(code *)**(undefined8 **)(param_1 + -0x100))(param_1 + -0x100,param_2,param_3);
    uVar9 = FUN_1800f2288(*(undefined8 *)(*(longlong *)(param_1 + -0xb0) + 0x1b500),
                          *(undefined8 *)(param_1 + -0x3c));
    if ((uVar9 & 1) == 0) {
      lVar7 = *(longlong *)(param_1 + 0x38);
      if (lVar7 == 0) {
        lVar7 = FUN_1800e9320(*(undefined8 *)(*(longlong *)(param_1 + -0xa8) + 0x1508));
      }
      cVar5 = FUN_1800e8548(*(longlong *)(*(longlong *)(param_1 + -0xa8) + 0x1508) + 8,0);
      if (cVar5 == '\0' || (cVar5 == '\0' || lVar7 == 0)) {
        FUN_1800f2030(*(undefined8 *)(*(longlong *)(param_1 + -0xb0) + 0x1b500),
                      *(undefined8 *)(param_1 + -0x3c),0);
      }
      else {
        FUN_1800e93d8(*(undefined8 *)(*(longlong *)(param_1 + -0xa8) + 0x1508),lVar7);
      }
    }
    lVar7 = uVar13 * 0x20;
    local_70 = 0;
    piVar2 = (int *)(*(longlong *)(param_1 + -0x2c) + lVar7);
    local_68 = (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x2c) + lVar7);
    local_60 = (ulonglong)(uint)(piVar2[1] + *piVar2);
    (**(code **)(**(longlong **)(param_1 + -0x3c) + 0x40))
              (*(longlong **)(param_1 + -0x3c),0,&local_68,&local_70);
    *param_6 = local_70 + (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x2c) + lVar7);
    *param_7 = *(int *)(lVar7 + *(longlong *)(param_1 + -0x2c) + 8);
    return 0;
  }
  lVar10 = *(longlong *)(param_1 + -0x2c);
  uVar12 = 0;
  if (lVar10 != 0) {
    if ((uVar3 - 0x24 & 0xfffffffa) == 0) {
      uVar12 = *(uint *)(&DAT_180231470 + (ulonglong)uVar3 * 4);
      lVar11 = uVar13 * 0x20;
      if (uVar12 == 0x18) {
        uVar12 = 0x20;
      }
      if (*(longlong *)(lVar10 + lVar11) == 0) {
        uVar3 = *(uint *)(param_1 + -0xdc) >> (ulonglong)(param_2 & 0x1f);
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        uVar4 = *(uint *)(param_1 + -0xd8) >> (ulonglong)(param_2 & 0x1f);
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        *(uint *)((longlong *)(lVar10 + lVar11) + 1) = uVar3 * uVar12 >> 3;
        uVar8 = thunk_FUN_180102f80(*(int *)(lVar11 + *(longlong *)(param_1 + -0x2c) + 8) * uVar4);
        *(undefined8 *)(*(longlong *)(param_1 + -0x2c) + lVar11) = uVar8;
      }
      *param_6 = *(longlong *)(*(longlong *)(param_1 + -0x2c) + lVar11);
      lVar11 = lVar11 + *(longlong *)(param_1 + -0x2c);
      uVar12 = uVar12 >> 3;
    }
    else {
      lVar11 = uVar13 * 0x20;
      puVar1 = (uint *)(lVar10 + lVar11);
      local_68 = (ulonglong)*puVar1;
      local_70 = 0;
      local_60 = (ulonglong)(puVar1[1] + *puVar1);
      iVar6 = (**(code **)(**(longlong **)(param_1 + -0x3c) + 0x40))
                        (*(longlong **)(param_1 + -0x3c),0,&local_68,&local_70);
      if (iVar6 < 0) goto LAB_1800948e4;
      *param_6 = local_70 + (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x2c) + lVar11);
      lVar11 = lVar11 + *(longlong *)(param_1 + -0x2c);
    }
    *param_7 = *(int *)(lVar11 + 8);
  }
LAB_1800948e4:
  if (*param_6 != 0) {
    lVar10 = *(longlong *)(param_1 + -0x7c) + uVar13 * 0x20;
    iVar6 = (*__imp_USER32_dll_IsRectEmpty)(lVar10 + 0x10);
    local_68._0_4_ = *(int *)(lVar10 + 0x10);
    local_68._4_4_ = *(int *)(lVar10 + 0x14);
    local_60 = (ulonglong)*(uint *)(lVar10 + 0x18) << 0x20;
    local_58 = *(undefined4 *)(lVar10 + 0x1c);
    uStack_54 = 1;
    (*(code *)**(undefined8 **)(param_1 + -0x100))(param_1 + -0x100,param_2,param_3);
    uVar14 = 0;
    if ((iVar6 == 0) &&
       (uVar13 = FUN_1800ebed8(*(undefined8 *)(*(longlong *)(param_1 + -0xa8) + 0x1508),
                               *(undefined8 *)(lVar7 + 0x14),uVar13,
                               param_2 + (*(int *)(param_1 + -0xcc) + param_3) *
                                         *(int *)(param_1 + -0xc4),
                               *(longlong *)(param_1 + -0xa8) + 0x1760,&local_68,
                               (ulonglong)(uint)(*param_7 * local_68._4_4_) +
                               (ulonglong)((int)local_68 * uVar12) + *param_6,*param_7,0),
       (uVar13 & 1) == 0)) {
      uVar14 = 2;
    }
  }
  return uVar14;
}

