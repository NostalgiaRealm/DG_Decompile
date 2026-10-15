/*
 * FUN_100226d8 at 100226d8
 * undefined FUN_100226d8(void)
 * Address ranges: 100226d8-1002294b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100226d8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_64 [4];
  int local_60 [5];
  uint local_4c;
  
  iVar1 = param_1 + 0x1c1;
  iVar11 = 0;
  do {
    if (((*(char *)(iVar1 + iVar11) != '\0') && (piVar2 = (int *)(param_1 + 0x194), *piVar2 != 0))
       && ((*(byte *)(param_1 + 0x1c2) & 1) != 0)) {
      puVar3 = (uint *)(param_1 + 0x1c4);
      local_60[0] = 0;
      uVar6 = *puVar3;
      uVar8 = 0;
      uVar10 = uVar6;
      do {
        uVar5 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar5 = (uint)LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
        if ((1 - (uVar5 >> 5) & 0xff) != 0) {
          uVar9 = -1 << (ulonglong)(uVar5 + 1 & 0x1f);
          iVar12 = uVar8 + uVar5;
          uVar10 = uVar9 & ~uVar10;
          uVar9 = uVar9 & uVar6;
          if (iVar12 != -1) goto LAB_100227d8;
          break;
        }
        uVar8 = uVar8 + 0x20;
        if (uVar8 == 0x100) break;
        uVar6 = puVar3[uVar8 >> 5];
        uVar10 = 0;
        if (0x100 - uVar8 < 0x20) {
          uVar10 = 0xffffffff;
        }
        uVar10 = uVar10 | uVar6;
      } while (uVar8 < 0x100);
    }
LAB_100228f8:
    iVar11 = iVar11 + 0x120;
    param_1 = param_1 + 0x120;
    if (iVar11 == 0x7e0) {
      return;
    }
  } while( true );
LAB_100227d8:
  uVar6 = (uVar10 & 0xaaaaaaaa) >> 1 | (uVar10 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
  if ((1 - (uVar6 >> 5) & 0xff) == 0) {
    uVar8 = uVar8 + 0x20;
    if (uVar8 != 0x100) {
      uVar9 = puVar3[uVar8 >> 5];
      uVar10 = 0;
      if (0x100 - uVar8 < 0x20) {
        uVar10 = 0xffffffff;
      }
      uVar10 = ~(uVar10 | uVar9);
      if (uVar8 < 0x100) goto LAB_100227d8;
    }
    iVar7 = -1;
  }
  else {
    uVar5 = -1 << (ulonglong)(uVar6 + 1 & 0x1f);
    uVar10 = uVar5 & uVar10;
    uVar9 = uVar5 & uVar9;
    iVar7 = uVar8 + uVar6;
  }
  if (iVar7 == -1) {
    iVar7 = iVar12;
  }
  if ((local_60[0] == 0) && (iVar4 = (*(code *)PTR_FUN_100a80fc)(*piVar2,local_60,0x1c), iVar4 == 0)
     ) goto LAB_100228f8;
  (*(code *)PTR_FUN_100a80f8)
            (*piVar2 + iVar12 * 0x8000,(iVar7 - iVar12) * 0x8000,local_4c | 0x100,auStack_64);
  while( true ) {
    if (0xff < uVar8) goto LAB_100228f8;
    uVar6 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    if ((1 - (uVar6 >> 5) & 0xff) != 0) break;
    uVar8 = uVar8 + 0x20;
    if (uVar8 == 0x100) goto LAB_100228f8;
    uVar9 = puVar3[uVar8 >> 5];
    uVar10 = 0;
    if (0x100 - uVar8 < 0x20) {
      uVar10 = 0xffffffff;
    }
    uVar10 = ~(uVar10 | uVar9);
  }
  uVar5 = -1 << (ulonglong)(uVar6 + 1 & 0x1f);
  iVar12 = uVar8 + uVar6;
  uVar9 = uVar5 & uVar9;
  uVar10 = uVar5 & uVar10;
  if (iVar12 == -1) goto LAB_100228f8;
  goto LAB_100227d8;
}

