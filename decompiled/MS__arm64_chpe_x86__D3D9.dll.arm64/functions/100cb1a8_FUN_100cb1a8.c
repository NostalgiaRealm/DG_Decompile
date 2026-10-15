/*
 * FUN_100cb1a8 at 100cb1a8
 * undefined FUN_100cb1a8(void)
 * Address ranges: 100cb1a8-100cb36b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100cb1a8(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  uVar9 = 0;
  if (param_2 == 0) {
    if (param_3 != 0) {
      uVar9 = *(uint *)(param_3 + param_4 * 4);
      uVar9 = uVar9 >> 0x18 | uVar9 << 8;
    }
  }
  else {
    iVar13 = 0;
    iVar8 = param_2 * 0x2c;
    uVar12 = 0;
    uVar11 = 0;
    pbVar1 = &DAT_101626f8;
    iVar10 = 4;
    do {
      bVar6 = *pbVar1;
      uVar2 = 0xff << (ulonglong)(bVar6 & 0x1f) & param_4;
      if (param_2 == 8) {
        if (bVar6 == 0) {
          uVar11 = 0;
          uVar12 = 0;
          iVar13 = 0;
        }
      }
      else {
        uVar3 = uVar2 & *(uint *)(&DAT_1016f210 + iVar8);
        uVar4 = uVar2 & *(uint *)(&DAT_1016f218 + iVar8);
        cVar7 = (&DAT_1016f220)[iVar8];
        uVar5 = uVar3 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar5 = uVar3 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        iVar13 = (uVar5 | uVar3 >> (ulonglong)((int)(char)(&DAT_1016f221)[iVar8] & 0x1f)) + iVar13;
        uVar12 = ((uVar2 & *(uint *)(&DAT_1016f214 + iVar8)) >>
                  (ulonglong)((int)(char)(&DAT_1016f223)[iVar8] & 0x1f) |
                 (uVar2 & *(uint *)(&DAT_1016f214 + iVar8)) >>
                 (ulonglong)((int)(char)(&DAT_1016f222)[iVar8] & 0x1f)) + uVar12;
        cVar7 = (&DAT_1016f224)[iVar8];
        uVar3 = uVar4 << (ulonglong)(-(int)cVar7 & 0x1f);
        if (-1 < cVar7) {
          uVar3 = uVar4 >> (ulonglong)((int)cVar7 & 0x1f);
        }
        uVar11 = (uVar3 | uVar4 >> (ulonglong)((int)(char)(&DAT_1016f225)[iVar8] & 0x1f)) + uVar11;
      }
      uVar9 = uVar9 + ((uVar2 & *(uint *)(&DAT_1016f21c + iVar8)) >>
                       (ulonglong)((int)(char)(&DAT_1016f227)[iVar8] & 0x1f) |
                      (uVar2 & *(uint *)(&DAT_1016f21c + iVar8)) >>
                      (ulonglong)((int)(char)(&DAT_1016f226)[iVar8] & 0x1f)) *
                      (uint)(byte)(&DAT_1016f228)[iVar8];
      uVar2 = uVar9;
      if ((byte)(&DAT_1016f228)[iVar8] == 0) {
        uVar2 = 0xff;
      }
      if (bVar6 == 0) {
        uVar9 = uVar2;
      }
      pbVar1 = pbVar1 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    uVar9 = uVar9 | (uVar11 | (uVar12 | iVar13 << 8) << 8) << 8;
  }
  return uVar9;
}

