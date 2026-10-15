/*
 * FUN_10024156 at 10024156
 * undefined4 __fastcall FUN_10024156(uint param_1, uint param_2)
 * Address ranges: 10024156-100241f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10024156(uint param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar2 = (ushort)param_1;
  uVar1 = param_2 & 0xffff;
  if (uVar1 == 0) {
    uVar1 = param_1 & 0xf00;
    if (uVar1 != 0x200) {
      if (uVar1 == 0x300) {
        uVar1 = -(uint)((param_1 & 0xf0) != 0) & 0xf0;
        uVar2 = (ushort)uVar1;
        goto LAB_100241de;
      }
      if (uVar1 != 0x400) {
LAB_10024188:
        uVar1 = param_1 & 0xf00;
        if (uVar1 == 0x500) {
          uVar2 = 0xf0;
        }
        goto LAB_100241de;
      }
    }
    uVar2 = 0;
  }
  else {
    if (uVar1 != 0x100) goto LAB_100241de;
    uVar1 = param_1 & 0xf00;
    if (uVar1 == 0) {
      uVar2 = uVar2 & 0xf1ff | 0x100;
      goto LAB_100241de;
    }
    if (uVar1 == 0x100) {
      uVar2 = uVar2 & 0xf0ff;
      goto LAB_100241de;
    }
    if (uVar1 != 0x200) {
      if (uVar1 == 0x300) {
        uVar1 = (-(uint)((param_1 & 0xf0) != 0) & 0xfffffff0) + 0x100;
        uVar2 = (ushort)uVar1;
        goto LAB_100241de;
      }
      if (uVar1 != 0x400) goto LAB_10024188;
    }
    uVar2 = 0x100;
  }
LAB_100241de:
  return CONCAT22((short)(uVar1 >> 0x10),uVar2);
}

