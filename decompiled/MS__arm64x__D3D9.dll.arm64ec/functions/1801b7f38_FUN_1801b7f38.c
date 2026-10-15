/*
 * FUN_1801b7f38 at 1801b7f38
 * undefined FUN_1801b7f38(void)
 * Address ranges: 1801b7f38-1801b80b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801b7f38(undefined8 param_1,int param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_2 == 0) {
    uVar10 = 0;
    if (param_3 != 0) {
      uVar10 = *(uint *)(param_3 + (ulonglong)param_4 * 4);
      uVar10 = uVar10 >> 0x18 | uVar10 << 8;
    }
  }
  else {
    lVar9 = (longlong)param_2 * 0x2c;
    iVar12 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar10 = 0;
    lVar11 = 0;
    do {
      bVar5 = (&DAT_18022d73c)[lVar11];
      uVar1 = 0xff << (ulonglong)(bVar5 & 0x1f) & param_4;
      if (param_2 == 8) {
        if (bVar5 == 0) {
          uVar8 = 0;
          uVar7 = 0;
          iVar12 = 0;
        }
      }
      else {
        uVar2 = *(uint *)(&DAT_180248440 + lVar9) & uVar1;
        uVar3 = *(uint *)(&DAT_180248448 + lVar9) & uVar1;
        cVar6 = (&DAT_180248450)[lVar9];
        uVar4 = uVar2 << (ulonglong)(-(int)cVar6 & 0x1f);
        if (-1 < cVar6) {
          uVar4 = uVar2 >> (ulonglong)((int)cVar6 & 0x1f);
        }
        iVar12 = (uVar2 >> (ulonglong)((int)(char)(&DAT_180248451)[lVar9] & 0x1f) | uVar4) + iVar12;
        cVar6 = (&DAT_180248454)[lVar9];
        uVar7 = ((*(uint *)(&DAT_180248444 + lVar9) & uVar1) >>
                 (ulonglong)((int)(char)(&DAT_180248453)[lVar9] & 0x1f) |
                (*(uint *)(&DAT_180248444 + lVar9) & uVar1) >>
                (ulonglong)((int)(char)(&DAT_180248452)[lVar9] & 0x1f)) + uVar7;
        uVar2 = uVar3 << (ulonglong)(-(int)cVar6 & 0x1f);
        if (-1 < cVar6) {
          uVar2 = uVar3 >> (ulonglong)((int)cVar6 & 0x1f);
        }
        uVar8 = (uVar3 >> (ulonglong)((int)(char)(&DAT_180248455)[lVar9] & 0x1f) | uVar2) + uVar8;
      }
      uVar10 = uVar10 + ((*(uint *)(&DAT_18024844c + lVar9) & uVar1) >>
                         (ulonglong)((int)(char)(&DAT_180248457)[lVar9] & 0x1f) |
                        (*(uint *)(&DAT_18024844c + lVar9) & uVar1) >>
                        (ulonglong)((int)(char)(&DAT_180248456)[lVar9] & 0x1f)) *
                        (uint)(byte)(&DAT_180248458)[lVar9];
      uVar1 = uVar10;
      if ((byte)(&DAT_180248458)[lVar9] == 0) {
        uVar1 = 0xff;
      }
      if (bVar5 == 0) {
        uVar10 = uVar1;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    uVar10 = uVar10 | (uVar8 | (uVar7 | iVar12 << 8) << 8) << 8;
  }
  return uVar10;
}

