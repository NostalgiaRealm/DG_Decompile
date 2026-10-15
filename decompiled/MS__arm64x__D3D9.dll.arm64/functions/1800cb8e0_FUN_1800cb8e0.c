/*
 * FUN_1800cb8e0 at 1800cb8e0
 * undefined FUN_1800cb8e0(void)
 * Address ranges: 1800cb8e0-1800cbb47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800cb8e0(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 local_300;
  undefined1 auStack_278 [4];
  int local_274;
  uint local_270;
  byte abStack_261 [509];
  byte local_64 [68];
  uint uVar12;
  
  uVar15 = 0;
  uVar14 = 0;
  uVar5 = FUN_180079830(param_2,1,auStack_278);
  if ((uVar5 & 1) != 0) {
    if ((local_274 == 0) || (bVar4 = false, local_274 == 3)) {
      bVar4 = true;
    }
    if (local_270 != 0) {
      lVar7 = *(longlong *)(&DAT_00006898 + *(longlong *)(param_1 + 0x10));
      uVar8 = 9;
      if (!bVar4) {
        uVar8 = 0;
      }
      do {
        lVar3 = uVar15 * 8;
        bVar1 = local_64[uVar15];
        *(undefined2 *)(&local_300 + uVar15) = 0;
        *(undefined1 *)((longlong)&local_300 + lVar3 + 5) = 0;
        bVar2 = abStack_261[(ulonglong)bVar1 * 8 + 1];
        if (bVar2 == 0) {
          uVar9 = 0;
        }
        else if (bVar2 == 1) {
          uVar9 = 1;
        }
        else if (bVar2 == 2) {
          uVar9 = 2;
        }
        else if (bVar2 == 3) {
          uVar9 = 3;
        }
        else if (bVar2 == 4) {
          uVar9 = 4;
        }
        else {
          uVar9 = 0x11;
          if (bVar2 == 5) {
            uVar9 = 5;
          }
        }
        *(undefined1 *)((longlong)&local_300 + lVar3 + 4) = uVar9;
        uVar13 = bVar1 - 7;
        *(ushort *)((longlong)&local_300 + lVar3 + 2) =
             (ushort)abStack_261[(ulonglong)bVar1 * 8] << 2;
        uVar11 = (uint)bVar1;
        uVar12 = (uint)bVar1;
        if (uVar13 < 8) {
          uVar9 = 5;
        }
        else if ((0xf < bVar1) || (uVar9 = uVar8, (0x8001U >> (ulonglong)(uVar12 & 0x1f) & 1) == 0))
        {
          if ((uVar12 < 0x11) && ((0x10008U >> (ulonglong)(uVar11 & 0x1f) & 1) != 0)) {
            uVar9 = 3;
          }
          else if (uVar11 - 5 < 2) {
            uVar9 = 10;
          }
          else if (bVar1 == 1) {
            uVar9 = 1;
          }
          else if (bVar1 == 2) {
            uVar9 = 2;
          }
          else {
            uVar9 = 0;
            if (uVar11 == 4) {
              uVar9 = 4;
            }
          }
        }
        *(undefined1 *)((longlong)&local_300 + lVar3 + 6) = uVar9;
        if (uVar13 < 8) {
          cVar10 = bVar1 - 7;
        }
        else if (((bVar1 < 6) || (0x10 < uVar12)) ||
                ((0x18040U >> (ulonglong)(uVar12 & 0x1f) & 1) == 0)) {
          cVar10 = '\0';
        }
        else {
          cVar10 = '\x01';
        }
        *(char *)((longlong)&local_300 + lVar3 + 7) = cVar10;
        if ((*(char *)((longlong)&local_300 + lVar3 + 4) == '\x05') &&
           ((*(uint *)(lVar7 + 0xec) & 1) == 0)) {
          uVar13 = 1;
        }
        else {
          uVar13 = 0;
        }
        uVar11 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar11;
        uVar14 = uVar13 | uVar14;
      } while (uVar11 < local_270);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  (&local_300)[uVar15] = 0x11000000ff;
  lVar7 = FUN_1800a32d0(uVar6,auStack_278,param_2,uVar14,1);
  if (lVar7 != 0) {
    FUN_1800c8708(lVar7,&local_300,(int)uVar15 + 1);
    FUN_1800015a0(lVar7 + 0xc);
  }
  return lVar7;
}

