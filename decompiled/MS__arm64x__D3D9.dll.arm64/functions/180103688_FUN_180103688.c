/*
 * FUN_180103688 at 180103688
 * undefined FUN_180103688(void)
 * Address ranges: 180103688-180103a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180103688(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
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
  uVar10 = (uint)*param_2;
  bVar1 = *param_1;
  puVar11 = &local_30;
  iVar9 = 0;
  pbVar7 = param_2 + 1;
joined_r0x0001801036d0:
  if (bVar1 == 0) {
    return iVar9;
  }
  while( true ) {
    if (uVar10 == 0) {
      return iVar9;
    }
    if (uVar10 == 0x20) goto LAB_1801036f4;
    if (uVar10 == 0x25) break;
    if ((int)(char)*param_1 == uVar10) {
      uVar10 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    else {
      uVar10 = 0;
    }
    if (param_1[1] == 0) {
      if (iVar9 != 0) {
        return iVar9;
      }
      return -1;
    }
    param_1 = param_1 + 1;
  }
  bVar1 = *pbVar7;
  local_90 = pbVar7 + 1;
  if (bVar1 - 0x65 < 3) goto LAB_1801039c8;
  uVar10 = bVar1 - 0x6f;
  bVar2 = false;
  if ((uVar10 < 10) && ((0x241U >> (ulonglong)(uVar10 & 0x1f) & 1) != 0)) {
LAB_180103770:
    if (bVar1 == 100 || bVar1 == 0x75) {
      uVar5 = 10;
    }
    else {
      uVar8 = 0x10;
      if (bVar1 != 0x78) {
        uVar8 = 0;
      }
      uVar5 = 8;
      if (bVar1 != 0x6f) {
        uVar5 = uVar8;
      }
    }
    bVar1 = *local_90;
    local_90 = pbVar7 + 2;
    if (bVar2) {
      iVar3 = FUN_180103220();
    }
    else {
      iVar3 = FUN_180103228(param_1,&local_88,uVar5);
    }
    if ((local_88 == param_1) || ((!bVar2 && (iVar3 < 0)))) {
LAB_1801037f4:
      uVar10 = 0;
      param_1 = local_88;
    }
    else {
      *(int *)*puVar11 = iVar3;
LAB_1801037e8:
      puVar11 = puVar11 + 1;
      uVar10 = (uint)bVar1;
      iVar9 = iVar9 + 1;
      param_1 = local_88;
    }
  }
  else {
    uVar10 = (uint)bVar1;
    if ((uVar10 - 100 < 6) && ((0x21U >> (ulonglong)(uVar10 - 100 & 0x1f) & 1) != 0)) {
      bVar2 = true;
      goto LAB_180103770;
    }
    if ((uVar10 - 0x6e & 0xfffffffd) == 0) goto LAB_1801039c8;
    if (uVar10 != 0x25) {
      if (uVar10 == 99) {
        uVar10 = (uint)*local_90;
        local_90 = pbVar7 + 2;
        iVar9 = iVar9 + 1;
        *(byte *)*puVar11 = *param_1;
        param_1 = param_1 + 1;
        puVar11 = puVar11 + 1;
        goto LAB_1801039cc;
      }
      if (bVar1 != 0x6c) {
        if (bVar1 != 0x73) goto LAB_1801039c8;
        uVar10 = (uint)*local_90;
        local_90 = pbVar7 + 2;
        pbVar7 = (byte *)*puVar11;
        puVar11 = puVar11 + 1;
        while ((pbVar6 = pbVar7, *param_1 < 0x21 &&
               ((0x100002600U >> ((ulonglong)*param_1 & 0x3f) & 1) != 0))) {
          param_1 = param_1 + 1;
        }
        while( true ) {
          bVar1 = *param_1;
          if ((bVar1 < 0x21) && ((0x100002601U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) break;
          *pbVar6 = bVar1;
          param_1 = param_1 + 1;
          pbVar6 = pbVar6 + 1;
        }
        if (pbVar6 != pbVar7) {
          iVar9 = iVar9 + 1;
          *pbVar6 = 0;
        }
        goto LAB_1801039cc;
      }
      bVar1 = *local_90;
      local_90 = pbVar7 + 2;
      if (bVar1 != 0x6c) {
LAB_1801039c8:
        uVar10 = 0;
        goto LAB_1801039cc;
      }
      bVar1 = *local_90;
      local_90 = pbVar7 + 3;
      uVar10 = bVar1 - 0x6f;
      if ((9 < uVar10) || ((0x241U >> (ulonglong)(uVar10 & 0x1f) & 1) == 0)) {
        uVar10 = bVar1 - 100;
        if ((5 < uVar10) || ((0x21U >> (ulonglong)(uVar10 & 0x1f) & 1) == 0)) goto LAB_1801039c8;
        bVar2 = true;
      }
      if (bVar1 == 100 || bVar1 == 0x75) {
        uVar5 = 10;
      }
      else {
        uVar8 = 0x10;
        if (bVar1 != 0x78) {
          uVar8 = 0;
        }
        uVar5 = 8;
        if (bVar1 != 0x6f) {
          uVar5 = uVar8;
        }
      }
      bVar1 = *local_90;
      local_90 = pbVar7 + 4;
      if (bVar2) {
        lVar4 = FUN_180103210();
      }
      else {
        lVar4 = FUN_180103218(param_1,&local_88,uVar5);
      }
      if ((local_88 == param_1) || ((!bVar2 && (lVar4 < 0)))) goto LAB_1801037f4;
      *(longlong *)*puVar11 = lVar4;
      goto LAB_1801037e8;
    }
    bVar1 = *local_90;
    local_90 = pbVar7 + 2;
    uVar10 = (uint)bVar1;
    if (*param_1 != 0x25) {
      uVar10 = 0;
    }
  }
  goto LAB_1801039cc;
LAB_1801036f4:
  while ((*param_1 < 0x21 && ((0x100002600U >> ((ulonglong)*param_1 & 0x3f) & 1) != 0))) {
    param_1 = param_1 + 1;
  }
  local_90 = pbVar7 + 1;
  uVar10 = (uint)*pbVar7;
LAB_1801039cc:
  bVar1 = *param_1;
  pbVar7 = local_90;
  goto joined_r0x0001801036d0;
}

