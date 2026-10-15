/*
 * FUN_10031dbb at 10031dbb
 * undefined __fastcall FUN_10031dbb(uint param_1)
 * Address ranges: 10031dbb-10031f91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10031dbb(uint param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_48;
  byte local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined1 local_28;
  undefined3 uStack_27;
  undefined1 local_24;
  undefined3 uStack_23;
  undefined1 local_20;
  undefined3 uStack_1f;
  byte local_1c;
  undefined3 uStack_1b;
  undefined1 local_18;
  undefined3 uStack_17;
  undefined1 local_14;
  undefined3 uStack_13;
  undefined1 local_10;
  undefined3 uStack_f;
  uint local_c;
  uint local_8;
  
  uVar10 = param_1;
  if (*(char *)(*(int *)(param_1 + 4) + 0x48) != '\0') {
    local_8 = param_1;
    FUN_10024c76(*(void **)(param_1 + 0xfc),&local_48,*(int *)(param_1 + 0x1cc));
    uVar10 = local_8;
    uVar14 = 0;
    if ((*(uint *)(param_1 + 0x19c) & 0x400) == 0) {
      uVar11 = 0;
      uVar13 = 1;
      uVar15 = uVar13;
      do {
        if ((*(uint *)(param_1 + 0x1a8) & uVar15) != 0) break;
        uVar11 = uVar11 + 1;
        uVar15 = uVar15 * 2;
      } while (uVar11 < 0x18);
      uVar3 = (undefined1)(uVar11 >> 3);
      _local_28 = CONCAT31(uStack_27,uVar3);
      uVar11 = 0;
      uVar15 = uVar13;
      do {
        if ((*(uint *)(param_1 + 0x1ac) & uVar15) != 0) break;
        uVar11 = uVar11 + 1;
        uVar15 = uVar15 * 2;
      } while (uVar11 < 0x18);
      uVar4 = (undefined1)(uVar11 >> 3);
      _local_24 = CONCAT31(uStack_23,uVar4);
      uVar11 = 0;
      uVar15 = uVar13;
      do {
        if ((*(uint *)(param_1 + 0x1b0) & uVar15) != 0) break;
        uVar11 = uVar11 + 1;
        uVar15 = uVar15 * 2;
      } while (uVar11 < 0x18);
      uVar5 = (undefined1)(uVar11 >> 3);
      _local_20 = CONCAT31(uStack_1f,uVar5);
      uVar15 = local_c >> 8;
      local_c = local_c & 0xffffff00;
      if ((*(byte *)(param_1 + 0x19c) & 1) != 0) {
        uVar12 = 0;
        uVar11 = uVar13;
        do {
          if ((*(uint *)(param_1 + 0x1b4) & uVar11) != 0) break;
          uVar12 = uVar12 + 1;
          uVar11 = uVar11 * 2;
        } while (uVar12 < 0x18);
        local_c = CONCAT31((int3)uVar15,(char)(uVar12 >> 3));
      }
      bVar6 = (byte)(*(uint *)(param_1 + 0x1a4) >> 3);
      _local_1c = CONCAT31(uStack_1b,bVar6);
      uVar11 = 0;
      uVar15 = uVar13;
      do {
        if ((local_38 & uVar15) != 0) break;
        uVar11 = uVar11 + 1;
        uVar15 = uVar15 * 2;
      } while (uVar11 < 0x18);
      uVar7 = (undefined1)(uVar11 >> 3);
      _local_18 = CONCAT31(uStack_17,uVar7);
      uVar11 = 0;
      uVar15 = uVar13;
      do {
        if ((local_34 & uVar15) != 0) break;
        uVar11 = uVar11 + 1;
        uVar15 = uVar15 * 2;
      } while (uVar11 < 0x18);
      uVar8 = (undefined1)(uVar11 >> 3);
      _local_14 = CONCAT31(uStack_13,uVar8);
      uVar11 = 0;
      uVar15 = uVar13;
      do {
        if ((local_30 & uVar15) != 0) break;
        uVar11 = uVar11 + 1;
        uVar15 = uVar15 * 2;
      } while (uVar11 < 0x18);
      uVar9 = (undefined1)(uVar11 >> 3);
      _local_10 = CONCAT31(uStack_f,uVar9);
      uVar15 = local_8 >> 8;
      local_8 = local_8 & 0xffffff00;
      if ((local_44 & 1) != 0) {
        do {
          if ((local_2c & uVar13) != 0) break;
          uVar14 = uVar14 + 1;
          uVar13 = uVar13 * 2;
        } while (uVar14 < 0x18);
        local_8 = CONCAT31((int3)uVar15,(char)(uVar14 >> 3));
      }
      FUN_10006322(*(void **)(uVar10 + 4),uVar3,uVar4,uVar5,(char)local_c,bVar6,uVar7,uVar8,uVar9,
                   (char)local_8,(byte)(local_3c >> 3));
    }
    else {
      uVar14 = 0;
      uVar10 = 1;
      do {
        if ((local_34 & uVar10) != 0) break;
        uVar14 = uVar14 + 1;
        uVar10 = uVar10 * 2;
      } while (uVar14 < 0x18);
      iVar1 = *(int *)(param_1 + 4);
      *(undefined1 *)(iVar1 + 0x39) = 1;
      cVar2 = (char)(uVar14 >> 3);
      *(char *)(iVar1 + 0x40) = cVar2;
      *(undefined1 *)(iVar1 + 0x38) = 0;
      *(undefined2 *)(iVar1 + 0x3a) = 2;
      *(undefined4 *)(iVar1 + 0x3c) = 3;
      *(char *)(iVar1 + 0x41) = cVar2 + '\x01';
      *(char *)(iVar1 + 0x42) = cVar2 + '\x02';
      *(undefined1 *)(iVar1 + 0x43) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 4;
      uVar10 = param_1;
    }
  }
  uVar14 = *(uint *)(uVar10 + 0x19c);
  if ((uVar14 & 0x20) == 0) {
    if (((uVar14 & 0x40) != 0) || ((uVar14 & 0x80000) != 0)) {
      *(uint *)(uVar10 + 0x1d0) =
           *(uint *)(uVar10 + 0x1b0) | *(uint *)(uVar10 + 0x1ac) | *(uint *)(uVar10 + 0x1a8);
    }
  }
  else {
    *(undefined4 *)(uVar10 + 0x1d0) = 0xff;
  }
  return;
}

