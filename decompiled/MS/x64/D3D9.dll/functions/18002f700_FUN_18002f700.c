/*
 * FUN_18002f700 at 18002f700
 * undefined __fastcall FUN_18002f700(undefined8 param_1, ulonglong param_2, uint param_3, uint param_4)
 * Address ranges: 18002f700-18002f81a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f700(undefined8 param_1,ulonglong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int yBottom;
  uint yTop;
  int iVar4;
  uint xLeft;
  uint uVar5;
  
  iVar4 = *(int *)(DAT_180111f20 + 0x81c);
  if (((iVar4 == 6) || (iVar4 < 3)) || (8 < iVar4)) {
    SetRectEmpty((LPRECT)(&DAT_180112aa4 + (param_2 & 0xffffffff) * 600));
  }
  else {
    uVar1 = *(uint *)(DAT_180111f20 + 0x8ba);
    yTop = *(uint *)(DAT_180111f20 + 0x8b2);
    xLeft = *(uint *)(DAT_180111f20 + 0x8ae);
    uVar3 = *(uint *)(DAT_180111f20 + 0x8b6);
    uVar2 = uVar1;
    if (*(uint *)(DAT_180111f20 + 0x8b6) == 0xffffffff) {
      uVar3 = 0;
      uVar2 = 0;
      if (((uVar1 >> 0x10 != 0) && (uVar5 = uVar1 & 0xffff, uVar5 != 0)) &&
         (uVar2 = (uVar5 * param_3) / (uVar1 >> 0x10), uVar3 = param_3, param_4 <= uVar2)) {
        uVar3 = ((uVar1 >> 0x10) * param_4) / uVar5;
        uVar2 = param_4;
      }
    }
    if ((xLeft == 0xffffffff) && (yTop == 0xffffffff)) {
      xLeft = param_3 - uVar3 >> 1;
      yTop = param_4 - uVar2 >> 1;
    }
    iVar4 = xLeft + uVar3;
    if ((iVar4 <= (int)xLeft) || (yBottom = uVar2 + yTop, yBottom <= (int)yTop)) {
      yBottom = 0;
      yTop = 0;
      iVar4 = 0;
      xLeft = 0;
    }
    SetRect((LPRECT)(&DAT_180112aa4 + (param_2 & 0xffffffff) * 600),xLeft,yTop,iVar4,yBottom);
  }
  return;
}

