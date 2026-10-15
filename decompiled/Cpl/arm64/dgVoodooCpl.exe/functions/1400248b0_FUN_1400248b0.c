/*
 * FUN_1400248b0 at 1400248b0
 * int __cdecl FUN_1400248b0(byte * param_1, byte * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 1400248b0-140024c57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1400248b0(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *local_90;
  byte *local_88;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_30 = param_3;
  uStack_28 = param_4;
  local_20 = param_5;
  uStack_18 = param_6;
  local_10 = param_7;
  uStack_8 = param_8;
  uVar8 = (uint)*param_2;
  bVar1 = *param_1;
  puVar9 = &local_30;
  iVar7 = 0;
  pbVar5 = param_2 + 1;
joined_r0x0001400248f8:
  if (bVar1 == 0) {
    return iVar7;
  }
  while( true ) {
    if (uVar8 == 0) {
      return iVar7;
    }
    if (uVar8 == 0x20) goto LAB_14002491c;
    if (uVar8 == 0x25) break;
    if ((int)(char)*param_1 == uVar8) {
      uVar8 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    }
    else {
      uVar8 = 0;
    }
    if (param_1[1] == 0) {
      if (iVar7 != 0) {
        return iVar7;
      }
      return -1;
    }
    param_1 = param_1 + 1;
  }
  bVar1 = *pbVar5;
  local_90 = pbVar5 + 1;
  if (bVar1 - 0x65 < 3) goto LAB_140024bf0;
  uVar8 = bVar1 - 0x6f;
  bVar2 = false;
  if ((uVar8 < 10) && ((0x241U >> (ulonglong)(uVar8 & 0x1f) & 1) != 0)) {
LAB_140024998:
    if (bVar1 == 100 || bVar1 == 0x75) {
      uVar8 = 10;
    }
    else {
      uVar6 = 0x10;
      if (bVar1 != 0x78) {
        uVar6 = 0;
      }
      uVar8 = 8;
      if (bVar1 != 0x6f) {
        uVar8 = uVar6;
      }
    }
    bVar1 = *local_90;
    local_90 = pbVar5 + 2;
    if (bVar2) {
      uVar8 = FUN_140024d40(param_1,&local_88,uVar8);
    }
    else {
      uVar8 = FUN_140024d48(param_1,&local_88,uVar8);
    }
    if ((local_88 == param_1) || ((!bVar2 && ((int)uVar8 < 0)))) {
LAB_140024a1c:
      uVar8 = 0;
      param_1 = local_88;
    }
    else {
      *(uint *)*puVar9 = uVar8;
LAB_140024a10:
      puVar9 = puVar9 + 1;
      uVar8 = (uint)bVar1;
      iVar7 = iVar7 + 1;
      param_1 = local_88;
    }
  }
  else {
    uVar8 = (uint)bVar1;
    if ((uVar8 - 100 < 6) && ((0x21U >> (ulonglong)(uVar8 - 100 & 0x1f) & 1) != 0)) {
      bVar2 = true;
      goto LAB_140024998;
    }
    if ((uVar8 - 0x6e & 0xfffffffd) == 0) goto LAB_140024bf0;
    if (uVar8 != 0x25) {
      if (uVar8 == 99) {
        uVar8 = (uint)*local_90;
        local_90 = pbVar5 + 2;
        iVar7 = iVar7 + 1;
        *(byte *)*puVar9 = *param_1;
        param_1 = param_1 + 1;
        puVar9 = puVar9 + 1;
        goto LAB_140024bf4;
      }
      if (bVar1 != 0x6c) {
        if (bVar1 != 0x73) goto LAB_140024bf0;
        uVar8 = (uint)*local_90;
        local_90 = pbVar5 + 2;
        pbVar5 = (byte *)*puVar9;
        puVar9 = puVar9 + 1;
        while ((pbVar4 = pbVar5, *param_1 < 0x21 &&
               ((0x100002600U >> ((ulonglong)*param_1 & 0x3f) & 1) != 0))) {
          param_1 = param_1 + 1;
        }
        while( true ) {
          bVar1 = *param_1;
          if ((bVar1 < 0x21) && ((0x100002601U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) break;
          *pbVar4 = bVar1;
          param_1 = param_1 + 1;
          pbVar4 = pbVar4 + 1;
        }
        if (pbVar4 != pbVar5) {
          iVar7 = iVar7 + 1;
          *pbVar4 = 0;
        }
        goto LAB_140024bf4;
      }
      bVar1 = *local_90;
      local_90 = pbVar5 + 2;
      if (bVar1 != 0x6c) {
LAB_140024bf0:
        uVar8 = 0;
        goto LAB_140024bf4;
      }
      bVar1 = *local_90;
      local_90 = pbVar5 + 3;
      uVar8 = bVar1 - 0x6f;
      if ((9 < uVar8) || ((0x241U >> (ulonglong)(uVar8 & 0x1f) & 1) == 0)) {
        uVar8 = bVar1 - 100;
        if ((5 < uVar8) || ((0x21U >> (ulonglong)(uVar8 & 0x1f) & 1) == 0)) goto LAB_140024bf0;
        bVar2 = true;
      }
      if (bVar1 == 100 || bVar1 == 0x75) {
        uVar8 = 10;
      }
      else {
        uVar6 = 0x10;
        if (bVar1 != 0x78) {
          uVar6 = 0;
        }
        uVar8 = 8;
        if (bVar1 != 0x6f) {
          uVar8 = uVar6;
        }
      }
      bVar1 = *local_90;
      local_90 = pbVar5 + 4;
      if (bVar2) {
        lVar3 = FUN_140024ca8(param_1,&local_88,uVar8);
      }
      else {
        lVar3 = FUN_140024cb0(param_1,&local_88,uVar8);
      }
      if ((local_88 == param_1) || ((!bVar2 && (lVar3 < 0)))) goto LAB_140024a1c;
      *(longlong *)*puVar9 = lVar3;
      goto LAB_140024a10;
    }
    bVar1 = *local_90;
    local_90 = pbVar5 + 2;
    uVar8 = (uint)bVar1;
    if (*param_1 != 0x25) {
      uVar8 = 0;
    }
  }
  goto LAB_140024bf4;
LAB_14002491c:
  while ((*param_1 < 0x21 && ((0x100002600U >> ((ulonglong)*param_1 & 0x3f) & 1) != 0))) {
    param_1 = param_1 + 1;
  }
  local_90 = pbVar5 + 1;
  uVar8 = (uint)*pbVar5;
LAB_140024bf4:
  bVar1 = *param_1;
  pbVar5 = local_90;
  goto joined_r0x0001400248f8;
}

