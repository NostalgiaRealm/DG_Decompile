/*
 * FUN_18003b308 at 18003b308
 * byte __fastcall FUN_18003b308(int * param_1, ushort param_2, ushort param_3, byte param_4, byte param_5, longlong * param_6, char param_7)
 * Address ranges: 18003b308-18003b7a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18003b308(int *param_1,ushort param_2,ushort param_3,byte param_4,byte param_5,
                  longlong *param_6,char param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  uint *puVar14;
  uint *puVar15;
  
  uVar1 = param_2;
  if ((param_2 & 0xff0) == 0x300) {
    uVar1 = 0;
  }
  if (((uVar1 & 0xcf0) == 0) && ((uVar1 & 0xff0) != 0x300)) {
    param_4 = 0;
  }
  uVar1 = FUN_18003b09c(param_1,uVar1,param_3,0,0,0,param_5,param_6);
  bVar10 = 1;
  if ((((byte)param_3 & 0xf0) == 0x70) || (param_4 != 0)) {
    param_7 = '\x01';
  }
  bVar11 = 0xff;
  if (param_5 == 7) {
    bVar11 = 0xa4;
  }
  if (param_5 == 0xf) {
    bVar11 = 0xe4;
  }
  uVar2 = FUN_18003b064((longlong)param_1,(uint)param_3,bVar11);
  FUN_18003a8dc((longlong)param_1,param_3,param_5);
  bVar11 = (byte)uVar2;
  FUN_18003aa00(param_1,0,uVar1,bVar11,0,'\0');
  puVar9 = (uint *)(param_1 + 0x4f);
  puVar8 = (uint *)(param_1 + 0x57);
  iVar6 = *puVar9 + *puVar8;
  uVar3 = uVar1 & 0xf00;
  if ((uVar1 & 0xff0) == 0x100) {
    uVar3 = 0;
  }
  if (uVar3 == 0) {
    if (((uVar1 & 0x2000) == 0) || (param_7 == '\0')) {
      if (param_4 != 1) {
        if (param_4 != 2) {
          puVar15 = (uint *)0x0;
          puVar14 = (uint *)0x0;
          uVar5 = iVar6 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x36;
          goto LAB_18003b70c;
        }
        fVar12 = 4.0;
        goto LAB_18003b674;
      }
      uVar5 = (*puVar9 + *puVar8 * 2) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x2000;
    }
    else {
      fVar12 = (float)(1 << (param_4 & 0x1f)) / 255.0;
LAB_18003b674:
      puVar8 = (uint *)(param_1 + 0x5f);
      uVar5 = 2;
      if (bVar11 != 0xff) {
        uVar5 = 5;
      }
      *puVar8 = uVar5;
      iVar4 = 0x4001 - (uint)(bVar11 != 0xff);
      if (bVar11 != 0xff) {
        iVar4 = 0x4006;
      }
      param_1[0x60] = iVar4;
      uVar5 = (uVar5 + iVar6) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x2038;
      param_1[0x61] = (int)fVar12;
      param_1[0x62] = (int)fVar12;
      param_1[99] = (int)fVar12;
      param_1[100] = (int)fVar12;
    }
    puVar9 = (uint *)0x0;
  }
  else {
    if ((uVar3 != 0x100) && (param_7 = '\x01', (uVar3 - 0x300 & 0xfdff) != 0)) goto LAB_18003b769;
    uVar5 = 0x2000;
    if (((uVar1 & 0x2000) == 0) || (param_7 == '\0')) {
      puVar14 = (uint *)(param_1 + 0x5f);
      uVar7 = 2;
      if (bVar11 != 0xff) {
        uVar7 = 5;
      }
      *puVar14 = uVar7;
      iVar4 = 0x4001 - (uint)(bVar11 != 0xff);
      if (bVar11 != 0xff) {
        iVar4 = 0x4006;
      }
      param_1[0x60] = iVar4;
      fVar12 = FUN_180037c50(uVar1);
      puVar15 = (uint *)0x0;
      if (param_4 == 0) {
        uVar5 = (uVar7 + iVar6) * 0x1000000 + 0x1000000 & 0x7f000000 | ~(uint)uVar1 & uVar5;
        param_1[0x61] = (int)fVar12;
        param_1[0x62] = (int)fVar12;
        param_1[99] = (int)fVar12;
        param_1[100] = (int)fVar12;
      }
      else {
        puVar15 = (uint *)(param_1 + 0x67);
        fVar13 = (float)(1 << (param_4 & 0x1f));
        param_1[0x61] = (int)fVar13;
        param_1[0x62] = (int)fVar13;
        param_1[99] = (int)fVar13;
        param_1[100] = (int)fVar13;
        param_1[0x68] = iVar4;
        fVar12 = fVar12 * fVar13;
        *puVar15 = uVar7;
        iVar4 = 4;
        if (bVar11 != 0xff) {
          iVar4 = 10;
        }
        uVar5 = (iVar4 + iVar6) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2032;
        param_1[0x69] = (int)fVar12;
        param_1[0x6a] = (int)fVar12;
        param_1[0x6b] = (int)fVar12;
        param_1[0x6c] = (int)fVar12;
      }
LAB_18003b70c:
      FUN_180055834(param_6,uVar5,puVar9,puVar8,puVar14,puVar15);
      bVar10 = ~(byte)(uVar1 >> 0xd) & 1;
      goto LAB_18003b769;
    }
    puVar8 = (uint *)(param_1 + 0x5f);
    param_1[0x61] = 0x3b808081;
    param_1[0x62] = 0x3b808081;
    param_1[99] = 0x3b808081;
    param_1[100] = 0x3b808081;
    uVar5 = 2;
    if (bVar11 != 0xff) {
      uVar5 = 5;
    }
    *puVar8 = uVar5;
    iVar4 = 0x4001 - (uint)(bVar11 != 0xff);
    if (bVar11 != 0xff) {
      iVar4 = 0x4006;
    }
    param_1[0x60] = iVar4;
    fVar12 = FUN_180037c50(uVar1);
    fVar12 = fVar12 / 255.0;
    param_1[0x68] = iVar4;
    puVar9 = (uint *)(param_1 + 0x67);
    *puVar9 = uVar5;
    iVar4 = 4;
    if (bVar11 != 0xff) {
      iVar4 = 10;
    }
    uVar5 = (iVar4 + iVar6) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2032;
    param_1[0x69] = (int)fVar12;
    param_1[0x6a] = (int)fVar12;
    param_1[0x6b] = (int)fVar12;
    param_1[0x6c] = (int)fVar12;
  }
  FUN_180055834(param_6,uVar5,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),puVar8,puVar9);
LAB_18003b769:
  if ((uVar1 != param_2) && (uVar1 != param_3)) {
    FUN_18003b028((longlong)param_1,uVar1);
  }
  return bVar10;
}

