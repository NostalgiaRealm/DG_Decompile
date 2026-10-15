/*
 * FUN_100cfbc0 at 100cfbc0
 * uint __cdecl FUN_100cfbc0(byte * param_1, uint * param_2)
 * Address ranges: 100cfbc0-100cfce0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_100cfbc0(byte *param_1,uint *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined2 uVar9;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint3 uVar8;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  
  bVar3 = *param_1;
  uVar9 = (undefined2)((uint)in_EAX >> 0x10);
  uVar5 = CONCAT22(uVar9,CONCAT11(1,bVar3));
  if ((bVar3 == 0x2d) ||
     (uVar5 = CONCAT22(uVar9,(ushort)bVar3), pbVar12 = param_1 + 1, bVar3 == 0x2b)) {
    pbVar12 = param_1 + 2;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),param_1[1]);
  }
  uVar6 = uVar5;
  if ((char)uVar5 == '\0') goto LAB_100cfcda;
  uVar6 = uVar5 & 0xff;
  uVar10 = 0;
  uVar11 = 0;
  if ((char)uVar5 != '0') goto LAB_100cfc11;
  pbVar13 = pbVar12 + 1;
  bVar3 = *pbVar12;
  uVar8 = 0;
  if ((bVar3 == 0x78) || (bVar3 == 0x58)) {
    while( true ) {
      bVar3 = *pbVar13;
      uVar6 = CONCAT31(uVar8,bVar3);
      if (bVar3 == 0) break;
      bVar4 = bVar3 - 0x30;
      uVar6 = CONCAT31(uVar8,bVar4);
      if (bVar3 < 0x30) goto LAB_100cfcda;
      if (9 < bVar4) {
        bVar2 = bVar3 - 0x37;
        uVar6 = CONCAT31(uVar8,bVar2);
        if ((bVar4 < 7) || (bVar2 < 10)) goto LAB_100cfcda;
        if (0xf < bVar2) {
          bVar3 = bVar3 + 0xa9;
          uVar6 = CONCAT31(uVar8,bVar3);
          if (((bVar2 < 0x20) || (bVar3 < 10)) || (0xf < bVar3)) goto LAB_100cfcda;
        }
      }
      if (uVar11 >> 0x1c != 0) goto LAB_100cfcda;
      uVar11 = uVar11 << 4 | uVar10 >> 0x1c;
      uVar10 = CONCAT31((int3)((uVar10 << 4) >> 8),(byte)(uVar10 << 4) | (byte)uVar6);
      uVar8 = (uint3)(byte)((char)(uVar6 >> 8) + 1);
      pbVar13 = pbVar13 + 1;
    }
LAB_100cfcb1:
    if ((char)(uVar6 >> 8) == '\0') goto LAB_100cfcda;
  }
  else {
    if ((bVar3 == 0x62) || (bVar3 == 0x42)) {
      while( true ) {
        bVar3 = *pbVar13;
        uVar6 = CONCAT31(uVar8,bVar3);
        if (bVar3 == 0) break;
        bVar4 = bVar3 - 0x30;
        uVar6 = CONCAT31(uVar8,bVar4);
        if ((bVar3 < 0x30) || (1 < bVar4)) goto LAB_100cfcda;
        uVar1 = (ulonglong)CONCAT14((int)uVar10 < 0,uVar11) << 1;
        uVar11 = (uint)uVar1 | (uint)((int)uVar10 < 0);
        if ((uVar1 & 0x100000000) != 0) goto LAB_100cfcda;
        uVar10 = CONCAT31((int3)((uVar10 << 1) >> 8),(byte)(uVar10 << 1) | bVar4);
        uVar8 = (uint3)(byte)((char)uVar8 + 1);
        pbVar13 = pbVar13 + 1;
      }
      goto LAB_100cfcb1;
    }
    pbVar12 = pbVar13;
    uVar6 = (uint)bVar3;
    while (bVar3 != 0) {
LAB_100cfc11:
      bVar3 = (byte)uVar6;
      if ((bVar3 < 0x30) || (0x39 < bVar3)) goto LAB_100cfcda;
      uVar7 = (uint)((ulonglong)uVar11 * 10);
      uVar6 = uVar7;
      if ((int)((ulonglong)uVar11 * 10 >> 0x20) != 0) goto LAB_100cfcda;
      uVar11 = (uint)((ulonglong)uVar10 * 10 >> 0x20);
      uVar6 = (uint)((ulonglong)uVar10 * 10);
      uVar10 = uVar11 + uVar7;
      if (CARRY4(uVar11,uVar7)) goto LAB_100cfcda;
      bVar14 = CARRY4(uVar6,(uint)(byte)(bVar3 - 0x30));
      uVar6 = uVar6 + (byte)(bVar3 - 0x30);
      uVar7 = (uint)bVar14;
      uVar11 = uVar10 + uVar7;
      if (CARRY4(uVar10,uVar7)) goto LAB_100cfcda;
      bVar3 = *pbVar12;
      uVar10 = uVar6;
      pbVar12 = pbVar12 + 1;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar3);
    }
  }
  if (-1 < (int)uVar11) {
    uVar7 = uVar10;
    if ((char)(uVar5 >> 8) != '\0') {
      uVar7 = -uVar10;
      uVar11 = -(uint)(uVar10 != 0) - uVar11;
      uVar6 = uVar10;
    }
    *param_2 = uVar7;
    param_2[1] = uVar11;
    return CONCAT31((int3)(uVar6 >> 8),1);
  }
LAB_100cfcda:
  return uVar6 & 0xffffff00;
}

