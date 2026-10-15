/*
 * FUN_1800a0038 at 1800a0038
 * undefined FUN_1800a0038(void)
 * Address ranges: 1800a0038-1800a019f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a0038(undefined8 param_1,int param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_2 == 0) {
    uVar10 = 0;
    if (param_3 != 0) {
      uVar10 = *(uint *)(param_3 + (ulonglong)param_4 * 4);
      uVar10 = uVar10 >> 0x18 | uVar10 << 8;
    }
  }
  else {
    lVar12 = (longlong)param_2 * 0x2c;
    iVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    lVar11 = 0;
    do {
      bVar5 = (&DAT_18022d73c)[lVar11];
      uVar1 = 0xff << (ulonglong)(bVar5 & 0x1f) & param_4;
      if (param_2 == 8) {
        if (bVar5 == 0) {
          uVar9 = 0;
          uVar8 = 0;
          iVar7 = 0;
        }
      }
      else {
        cVar6 = (&DAT_18024a960)[lVar12];
        uVar2 = *(uint *)(&DAT_18024a950 + lVar12) & uVar1;
        uVar3 = *(uint *)(&DAT_18024a958 + lVar12) & uVar1;
        uVar4 = uVar2 << (ulonglong)(-(int)cVar6 & 0x1f);
        if (-1 < cVar6) {
          uVar4 = uVar2 >> (ulonglong)((int)cVar6 & 0x1f);
        }
        iVar7 = (uVar2 >> (ulonglong)((int)(char)(&DAT_18024a961)[lVar12] & 0x1f) | uVar4) + iVar7;
        cVar6 = (&DAT_18024a964)[lVar12];
        uVar8 = ((*(uint *)(&DAT_18024a954 + lVar12) & uVar1) >>
                 (ulonglong)((int)(char)(&DAT_18024a963)[lVar12] & 0x1f) |
                (*(uint *)(&DAT_18024a954 + lVar12) & uVar1) >>
                (ulonglong)((int)(char)(&DAT_18024a962)[lVar12] & 0x1f)) + uVar8;
        uVar2 = uVar3 << (ulonglong)(-(int)cVar6 & 0x1f);
        if (-1 < cVar6) {
          uVar2 = uVar3 >> (ulonglong)((int)cVar6 & 0x1f);
        }
        uVar9 = (uVar3 >> (ulonglong)((int)(char)(&DAT_18024a965)[lVar12] & 0x1f) | uVar2) + uVar9;
      }
      uVar10 = uVar10 + ((*(uint *)(&DAT_18024a95c + lVar12) & uVar1) >>
                         (ulonglong)((int)(char)(&DAT_18024a967)[lVar12] & 0x1f) |
                        (*(uint *)(&DAT_18024a95c + lVar12) & uVar1) >>
                        (ulonglong)((int)(char)(&DAT_18024a966)[lVar12] & 0x1f)) *
                        (uint)(byte)(&DAT_18024a968)[lVar12];
      uVar1 = uVar10;
      if ((byte)(&DAT_18024a968)[lVar12] == 0) {
        uVar1 = 0xff;
      }
      if (bVar5 == 0) {
        uVar10 = uVar1;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    uVar10 = uVar10 | (uVar9 | (uVar8 | iVar7 << 8) << 8) << 8;
  }
  return uVar10;
}

