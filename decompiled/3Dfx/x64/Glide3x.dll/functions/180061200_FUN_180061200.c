/*
 * FUN_180061200 at 180061200
 * ulonglong __fastcall FUN_180061200(byte * param_1, int * param_2)
 * Address ranges: 180061200-18006132c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180061200(byte *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined8 in_RAX;
  undefined6 uVar11;
  ulonglong uVar9;
  uint7 uVar10;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  
  bVar6 = *param_1;
  uVar11 = (undefined6)((ulonglong)in_RAX >> 0x10);
  uVar9 = CONCAT62(uVar11,CONCAT11(1,bVar6));
  if ((bVar6 == 0x2d) ||
     (uVar9 = CONCAT62(uVar11,(ushort)bVar6), pbVar16 = param_1 + 1, bVar6 == 0x2b)) {
    pbVar16 = param_1 + 2;
    uVar9 = CONCAT71((int7)(uVar9 >> 8),param_1[1]);
  }
  uVar3 = uVar9 >> 8;
  cVar4 = (char)uVar9;
  if (cVar4 == '\0') goto LAB_180061326;
  uVar9 = uVar9 & 0xff;
  uVar13 = 0;
  uVar15 = 0;
  uVar14 = 0;
  if (cVar4 != '0') goto LAB_18006125c;
  pbVar17 = pbVar16 + 1;
  bVar6 = *pbVar16;
  uVar10 = 0;
  uVar1 = uVar15;
  if ((bVar6 == 0x78) || (uVar1 = uVar14, bVar6 == 0x58)) {
    while( true ) {
      uVar15 = uVar1;
      bVar6 = *pbVar17;
      uVar9 = CONCAT71(uVar10,bVar6);
      if (bVar6 == 0) break;
      bVar7 = bVar6 - 0x30;
      uVar9 = CONCAT71(uVar10,bVar7);
      if (bVar6 < 0x30) goto LAB_180061326;
      if (9 < bVar7) {
        bVar5 = bVar6 - 0x37;
        uVar9 = CONCAT71(uVar10,bVar5);
        if ((bVar7 < 7) || (bVar5 < 10)) goto LAB_180061326;
        if (0xf < bVar5) {
          bVar6 = bVar6 + 0xa9;
          uVar9 = CONCAT71(uVar10,bVar6);
          if (((bVar5 < 0x20) || (bVar6 < 10)) || (0xf < bVar6)) goto LAB_180061326;
        }
      }
      if (uVar15 >> 0x1c != 0) goto LAB_180061326;
      uVar14 = (uint)uVar13;
      iVar12 = uVar14 << 4;
      uVar13 = (ulonglong)CONCAT31((int3)((uint)iVar12 >> 8),(byte)iVar12 | (byte)uVar9);
      uVar10 = (uint7)(byte)((char)(uVar9 >> 8) + 1);
      pbVar17 = pbVar17 + 1;
      uVar1 = uVar15 << 4 | uVar14 >> 0x1c;
    }
LAB_1800612fc:
    if ((char)(uVar9 >> 8) == '\0') goto LAB_180061326;
  }
  else {
    if ((bVar6 == 0x62) || (uVar15 = uVar14, bVar6 == 0x42)) {
      while( true ) {
        bVar6 = *pbVar17;
        uVar9 = CONCAT71(uVar10,bVar6);
        if (bVar6 == 0) break;
        bVar7 = bVar6 - 0x30;
        uVar9 = CONCAT71(uVar10,bVar7);
        if ((bVar6 < 0x30) || (1 < bVar7)) goto LAB_180061326;
        iVar12 = (int)uVar13;
        uVar13 = (ulonglong)CONCAT14(iVar12 < 0,uVar15) << 1;
        uVar15 = (uint)uVar13 | (uint)(iVar12 < 0);
        if ((uVar13 & 0x100000000) != 0) goto LAB_180061326;
        uVar13 = (ulonglong)CONCAT31((int3)((uint)(iVar12 << 1) >> 8),(byte)(iVar12 << 1) | bVar7);
        uVar10 = (uint7)(byte)((char)uVar10 + 1);
        pbVar17 = pbVar17 + 1;
      }
      goto LAB_1800612fc;
    }
    uVar9 = (ulonglong)bVar6;
    pbVar16 = pbVar17;
    while (bVar6 != 0) {
LAB_18006125c:
      bVar6 = (byte)uVar9;
      if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_180061326;
      uVar2 = (ulonglong)uVar15 * 10;
      uVar9 = uVar2 & 0xffffffff;
      if ((int)(uVar2 >> 0x20) != 0) goto LAB_180061326;
      uVar13 = uVar13 * 10;
      uVar9 = uVar13 & 0xffffffff;
      uVar15 = (uint)(uVar13 >> 0x20);
      uVar14 = uVar15 + (uint)uVar2;
      if (CARRY4(uVar15,(uint)uVar2)) goto LAB_180061326;
      uVar8 = (uint)uVar13 + (uint)(byte)(bVar6 - 0x30);
      uVar9 = (ulonglong)uVar8;
      uVar1 = (uint)CARRY4((uint)uVar13,(uint)(byte)(bVar6 - 0x30));
      uVar15 = uVar14 + uVar1;
      if (CARRY4(uVar14,uVar1)) goto LAB_180061326;
      uVar13 = (ulonglong)uVar8;
      bVar6 = *pbVar16;
      uVar9 = (ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar6);
      pbVar16 = pbVar16 + 1;
    }
  }
  iVar12 = (int)uVar13;
  if (-1 < (int)uVar15) {
    if ((char)uVar3 != '\0') {
      bVar18 = iVar12 != 0;
      iVar12 = -iVar12;
      uVar15 = -(uint)bVar18 - uVar15;
      uVar9 = uVar13;
    }
    *param_2 = iVar12;
    param_2[1] = uVar15;
    return CONCAT71((int7)(uVar9 >> 8),1);
  }
LAB_180061326:
  return uVar9 & 0xffffffffffffff00;
}

