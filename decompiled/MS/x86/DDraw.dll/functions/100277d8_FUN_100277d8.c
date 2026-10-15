/*
 * FUN_100277d8 at 100277d8
 * undefined4 __stdcall FUN_100277d8(int param_1)
 * Address ranges: 100277d8-1002799d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100277d8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar2 = *(uint *)(param_1 + 0x6c);
  bVar5 = 1U - ((uVar1 & 0x3800401) != 0) & 1U - ((uVar2 & 0xfff00001) != 0);
  if (((uVar2 & 0x3fe9c) != 0) && ((uVar1 & 0x1000) == 0)) {
    bVar5 = 0;
  }
  uVar4 = uVar2 & 0x8c;
  if ((((uVar4 == 0) || (uVar4 == 0x80)) || (uVar4 == 8)) || (uVar4 == 4)) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  if (((uVar2 & 2) == 0) || ((uVar2 & 0x8000080) == 0x8000080)) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  bVar6 = 0;
  if ((uVar2 & 0x60) == 0) {
    bVar6 = bVar7;
  }
  bVar7 = 0;
  if ((uVar1 & 0x82) == 0) {
    bVar7 = bVar8 & bVar5;
  }
  bVar7 = bVar7 & bVar6;
  uVar4 = uVar1 & 0x21264;
  bVar5 = (byte)(uVar1 >> 0x18);
  if (uVar4 != 0x200) {
    if ((((uVar4 != 0x220) && (uVar4 != 4)) &&
        ((uVar4 != 0x20 && (((uVar4 != 0x40 && (uVar4 != 0x1000)) && (uVar4 != 0x20000)))))) &&
       ((uVar4 != 0x20040 && (uVar4 != 0)))) {
      bVar8 = 0;
      goto LAB_10027995;
    }
    if (uVar4 != 0x200) {
      if ((uVar4 == 0x20) || (uVar4 == 4)) {
        uVar4 = 0;
        bVar8 = 0;
        if ((uVar1 & 0x18) == 0) {
          bVar8 = bVar7;
        }
        bVar8 = 1U - ((uVar1 & 0x20400000) != 0) & bVar8;
        bVar5 = ~(bVar5 >> 7);
      }
      else {
        if ((uVar4 == 0x40) || (uVar4 == 0)) {
          bVar5 = bVar5 >> 7;
          iVar3 = 0x16;
        }
        else {
          if (uVar4 == 0x1000) {
            uVar4 = uVar1 & 0x400018;
            bVar8 = bVar7;
            if ((((uVar4 != 0) && (uVar4 != 0x400000)) && (uVar4 != 0x400008)) &&
               ((uVar4 != 8 || ((uVar2 & 0x200) == 0)))) {
              bVar8 = 0;
            }
            bVar5 = ~(byte)(uVar1 >> 0x15);
            goto LAB_10027993;
          }
          bVar8 = bVar7;
          if (uVar4 != 0x20000) goto LAB_10027995;
          bVar5 = bVar5 >> 7 | (byte)(uVar1 >> 0x16);
          iVar3 = 0x15;
        }
        uVar4 = 0;
        bVar8 = ~(bVar5 | (byte)(uVar1 >> iVar3));
        bVar5 = 0;
        if ((uVar1 & 0x18) == 0) {
          bVar5 = bVar7;
        }
      }
LAB_10027993:
      bVar8 = bVar8 & bVar5;
      goto LAB_10027995;
    }
  }
  if (((uVar1 & 0x18) != 0) && ((uVar1 & 0x18) != 0x18)) {
    bVar7 = 0;
  }
  uVar4 = 0;
  bVar8 = 0;
  if ((uVar1 & 0x20400000) == 0) {
    bVar8 = ~(bVar5 >> 7) & bVar7;
  }
LAB_10027995:
  return CONCAT31((int3)(uVar4 >> 8),bVar8);
}

