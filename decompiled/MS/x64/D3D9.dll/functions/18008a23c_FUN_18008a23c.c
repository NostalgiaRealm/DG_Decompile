/*
 * FUN_18008a23c at 18008a23c
 * undefined8 __fastcall FUN_18008a23c(longlong param_1, longlong * param_2, longlong * param_3, longlong * param_4, undefined8 * param_5, byte param_6, undefined4 param_7, RECT * param_8)
 * Address ranges: 18008a23c-18008a492
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18008a23c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       undefined8 *param_5,byte param_6,undefined4 param_7,RECT *param_8)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_90;
  uint local_8c;
  int local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  RECT local_70;
  tagRECT local_60;
  uint local_50 [6];
  
  (**(code **)(*param_2 + 0x50))(param_2,&local_a0);
  uVar4 = local_a0 >> (param_6 & 0x1f);
  uVar6 = local_a0 >> (param_6 & 0x1f);
  local_70.left = 0;
  local_70.top = 0;
  local_a0 = 1;
  if (uVar6 != 0) {
    local_a0 = uVar4;
  }
  uVar6 = 1;
  if (local_9c >> (param_6 & 0x1f) != 0) {
    uVar6 = local_9c >> (param_6 & 0x1f);
  }
  local_70.right = local_a0;
  local_70.bottom = uVar6;
  IntersectRect(&local_60,param_8,&local_70);
  local_a4 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = local_a0;
  local_a8 = uVar6;
  if ((local_80 & 0x40) == 0) {
    uVar4 = local_a0 - 1 >> 1 | local_a0 - 1;
    uVar4 = uVar4 >> 2 | uVar4;
    uVar4 = uVar4 >> 4 | uVar4;
    local_a0 = (uVar4 >> 8 | uVar4) + 1;
    uVar6 = uVar6 - 1 >> 1 | uVar6 - 1;
    uVar6 = uVar6 >> 2 | uVar6;
    uVar6 = uVar6 >> 4 | uVar6;
    local_b8 = CONCAT44(local_60.top,local_60.left);
    uVar6 = (uVar6 >> 8 | uVar6) + 1;
    local_ac = local_60.right;
    local_a8 = local_60.bottom;
  }
  local_98 = 1;
  local_9c = uVar6;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x40))(param_3,local_50);
    local_90 = local_50[0];
  }
  plVar1 = (longlong *)(param_1 + 0x1d4c8);
  uVar6 = *(uint *)(param_1 + 0x1d4d4);
  uVar4 = 0;
  uVar10 = (ulonglong)
           ((((local_80 | local_78 << 10) << 6 | local_8c) << 2 | local_7c & 0xffff0000) << 5 |
           local_84 << 0xb) | ((ulonglong)local_a0 << 0x10 | (ulonglong)local_9c) << 0x20 |
           (ulonglong)local_90;
  if (uVar6 != 0) {
    uVar7 = 0;
    uVar8 = uVar6;
    do {
      uVar4 = uVar8 + uVar7 >> 1;
      uVar9 = *(ulonglong *)(*plVar1 + (ulonglong)uVar4 * 0x48);
      uVar3 = uVar4;
      if (uVar9 <= uVar10) {
        if (uVar10 <= uVar9) break;
        uVar7 = uVar4 + 1;
        uVar3 = uVar8;
        uVar4 = uVar7;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar7);
    if ((uVar4 != uVar6) &&
       (uVar9 = (ulonglong)uVar4, *(ulonglong *)(*plVar1 + uVar9 * 0x48) == uVar10))
    goto LAB_18008a401;
  }
  FUN_18008dab8(plVar1,uVar4,uVar10,(undefined8 *)&local_a0);
  uVar9 = (ulonglong)uVar4;
LAB_18008a401:
  lVar2 = *(longlong *)(*plVar1 + 0x38 + uVar9 * 0x48);
  if (lVar2 == 0) {
    uVar10 = FUN_18008d824(plVar1,&local_a0);
    uVar10 = uVar10 & 0xffffffffffffff00;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar1 + 0x40 + uVar9 * 0x48);
    if (param_4 != (longlong *)0x0) {
      *param_4 = lVar2;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = uVar5;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
    uVar5 = (**(code **)(*plVar1 + 0x170))
                      (plVar1,lVar2,0,local_b8 & 0xffffffff,local_b8._4_4_,0,param_2,param_7,
                       &local_b8);
    uVar10 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return uVar10;
}

