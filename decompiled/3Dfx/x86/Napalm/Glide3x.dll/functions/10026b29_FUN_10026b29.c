/*
 * FUN_10026b29 at 10026b29
 * byte __fastcall FUN_10026b29(int param_1, uint param_2, byte param_3)
 * Address ranges: 10026b29-10026b60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10026b29(int param_1,uint param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  
  if ((((byte)param_2 & 0xf0) == 0x80) &&
     (uVar2 = *(uint *)(param_1 + 0x90 + (param_2 & 0xf) * 4) >> 0x12, bVar1 = (byte)uVar2 & 3,
     (uVar2 & 3) != 0)) {
    do {
      param_3 = param_3 << 2 | param_3 & 3;
      bVar1 = bVar1 - 1;
    } while (bVar1 != 0);
  }
  return param_3;
}

