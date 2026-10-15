/*
 * FUN_180223228 at 180223228
 * undefined FUN_180223228(void)
 * Address ranges: 180223228-1802235d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180223228(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,longlong param_5
                 )

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  byte *local_60;
  byte *local_58;
  
  puVar7 = (undefined8 *)(param_5 + -0x10);
  *puVar7 = param_3;
  *(undefined8 *)(param_5 + -8) = param_4;
  bVar2 = *param_2;
  iVar11 = 0;
LAB_180223268:
  local_60 = param_2 + 1;
  uVar12 = (uint)bVar2;
LAB_180223578:
  do {
    while( true ) {
      param_2 = local_60;
      if (*param_1 == 0) {
        return iVar11;
      }
      while( true ) {
        if (uVar12 == 0) {
          return iVar11;
        }
        if (uVar12 == 0x20) goto LAB_180223280;
        if (uVar12 == 0x25) break;
        if ((int)(char)*param_1 == uVar12) {
          uVar12 = (uint)*param_2;
          param_2 = param_2 + 1;
        }
        else {
          uVar12 = 0;
        }
        if (param_1[1] == 0) {
          if (iVar11 != 0) {
            return iVar11;
          }
          return -1;
        }
        param_1 = param_1 + 1;
      }
      bVar2 = *param_2;
      local_60 = param_2 + 1;
      if (bVar2 - 0x65 < 3) goto LAB_180223574;
      uVar12 = bVar2 - 0x6f;
      bVar3 = false;
      if ((9 < uVar12) || ((0x241U >> (ulonglong)(uVar12 & 0x1f) & 1) == 0)) break;
LAB_180223300:
      if (bVar2 == 100 || bVar2 == 0x75) {
        uVar6 = 10;
      }
      else {
        uVar10 = 0x10;
        if (bVar2 != 0x78) {
          uVar10 = 0;
        }
        uVar6 = 8;
        if (bVar2 != 0x6f) {
          uVar6 = uVar10;
        }
      }
      bVar2 = *local_60;
      local_60 = param_2 + 2;
      if (bVar3) {
        iVar4 = FUN_180222d90();
      }
      else {
        iVar4 = FUN_180222da0(param_1,&local_58,uVar6);
      }
      if ((local_58 == param_1) || ((!bVar3 && (iVar4 < 0)))) {
LAB_18022338c:
        uVar12 = 0;
        param_1 = local_58;
      }
      else {
        puVar7 = (undefined8 *)((-(longlong)puVar7 & 7U) + (longlong)puVar7);
        *(int *)*puVar7 = iVar4;
LAB_180223380:
        puVar7 = puVar7 + 1;
        uVar12 = (uint)bVar2;
        iVar11 = iVar11 + 1;
        param_1 = local_58;
      }
    }
    uVar12 = (uint)bVar2;
    if ((uVar12 - 100 < 6) && ((0x21U >> (ulonglong)(uVar12 - 100 & 0x1f) & 1) != 0)) {
      bVar3 = true;
      goto LAB_180223300;
    }
    if ((uVar12 - 0x6e & 0xfffffffd) == 0) goto LAB_180223574;
    if (uVar12 != 0x25) {
      if (uVar12 == 99) {
        uVar12 = (uint)*local_60;
        local_60 = param_2 + 2;
        puVar1 = (undefined8 *)((-(longlong)puVar7 & 7U) + (longlong)puVar7);
        puVar7 = puVar1 + 1;
        iVar11 = iVar11 + 1;
        *(byte *)*puVar1 = *param_1;
        param_1 = param_1 + 1;
      }
      else {
        if (bVar2 == 0x6c) {
          bVar2 = *local_60;
          local_60 = param_2 + 2;
          if (bVar2 != 0x6c) goto LAB_180223574;
          bVar2 = *local_60;
          local_60 = param_2 + 3;
          uVar12 = bVar2 - 0x6f;
          if ((9 < uVar12) || ((0x241U >> (ulonglong)(uVar12 & 0x1f) & 1) == 0)) {
            uVar12 = bVar2 - 100;
            if ((5 < uVar12) || ((0x21U >> (ulonglong)(uVar12 & 0x1f) & 1) == 0))
            goto LAB_180223574;
            bVar3 = true;
          }
          if (bVar2 == 100 || bVar2 == 0x75) {
            uVar6 = 10;
          }
          else {
            uVar10 = 0x10;
            if (bVar2 != 0x78) {
              uVar10 = 0;
            }
            uVar6 = 8;
            if (bVar2 != 0x6f) {
              uVar6 = uVar10;
            }
          }
          bVar2 = *local_60;
          local_60 = param_2 + 4;
          if (bVar3) {
            lVar5 = FUN_180222c98();
          }
          else {
            lVar5 = FUN_180222ca8(param_1,&local_58,uVar6);
          }
          if ((local_58 == param_1) || ((!bVar3 && (lVar5 < 0)))) goto LAB_18022338c;
          puVar7 = (undefined8 *)((-(longlong)puVar7 & 7U) + (longlong)puVar7);
          *(longlong *)*puVar7 = lVar5;
          goto LAB_180223380;
        }
        if (bVar2 == 0x73) {
          uVar12 = (uint)*local_60;
          local_60 = param_2 + 2;
          puVar7 = (undefined8 *)((-(longlong)puVar7 & 7U) + (longlong)puVar7);
          pbVar9 = (byte *)*puVar7;
          puVar7 = puVar7 + 1;
          while ((pbVar8 = pbVar9, *param_1 < 0x21 &&
                 ((0x100002600U >> ((ulonglong)*param_1 & 0x3f) & 1) != 0))) {
            param_1 = param_1 + 1;
          }
          while( true ) {
            bVar2 = *param_1;
            if ((bVar2 < 0x21) && ((0x100002601U >> ((longlong)(char)bVar2 & 0x3fU) & 1) != 0))
            break;
            *pbVar8 = bVar2;
            param_1 = param_1 + 1;
            pbVar8 = pbVar8 + 1;
          }
          if (pbVar8 != pbVar9) {
            iVar11 = iVar11 + 1;
            *pbVar8 = 0;
          }
        }
        else {
LAB_180223574:
          uVar12 = 0;
        }
      }
      goto LAB_180223578;
    }
    bVar2 = *local_60;
    local_60 = param_2 + 2;
    uVar12 = (uint)bVar2;
    if (*param_1 != 0x25) {
      uVar12 = 0;
    }
  } while( true );
LAB_180223280:
  while ((*param_1 < 0x21 && ((0x100002600U >> ((ulonglong)*param_1 & 0x3f) & 1) != 0))) {
    param_1 = param_1 + 1;
  }
  bVar2 = *param_2;
  goto LAB_180223268;
}

