/*
 * FUN_10069580 at 10069580
 * undefined FUN_10069580(void)
 * Address ranges: 10069580-1006970f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069580(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  byte local_40 [16];
  
  iVar4 = *param_1;
  iVar5 = param_1[1];
  uVar6 = param_1[2];
  iVar8 = param_1[3];
  FUN_1005df78(iVar5,0,0,0);
  uVar11 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
  uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  lVar12 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
  uVar11 = (uint)lVar12;
  iVar10 = 0;
  if ((1 - (uVar11 >> 5) & 0xff) != 0) {
    local_40[(int)uVar11 >> 3] =
         local_40[(int)uVar11 >> 3] & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
    iVar9 = 0;
    while( true ) {
      puVar1 = (undefined4 *)(iVar4 + 4 + iVar9);
      puVar2 = (undefined4 *)(iVar4 + 8 + iVar9);
      if ((int)lVar12 == 0) {
        *(undefined4 *)(iVar5 + 0xfbc8) = *(undefined4 *)(iVar9 + iVar4);
        *(undefined4 *)(iVar5 + 0x104c) = *puVar1;
        *(undefined4 *)(iVar5 + 0x1008) = *puVar2;
      }
      else {
        iVar3 = iVar5 + (int)lVar12 * 4;
        *(undefined4 *)(iVar3 + 0xfbd0) = *(undefined4 *)(iVar9 + iVar4);
        *(undefined4 *)(iVar3 + 0x100c) = *puVar1;
        *(undefined4 *)(iVar3 + 0xfc8) = *puVar2;
      }
      *(undefined1 *)(iVar5 + 0xf66f) = 1;
      iVar10 = iVar10 + 1;
      uVar11 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      lVar12 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
      uVar11 = (uint)lVar12;
      if ((1 - (uVar11 >> 5) & 0xff) == 0) break;
      iVar9 = iVar9 + 0xc;
      local_40[(int)uVar11 >> 3] =
           local_40[(int)uVar11 >> 3] & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
    }
  }
  if ((char)iVar8 != '\0') {
    puVar1 = (undefined4 *)(iVar4 + iVar10 * 0xc);
    *(undefined4 *)(iVar5 + 0xfbcc) = *puVar1;
    uVar7 = puVar1[1];
    *(undefined1 *)(iVar5 + 0xf670) = 1;
    *(undefined4 *)(iVar5 + 0xfc14) = uVar7;
  }
  return;
}

