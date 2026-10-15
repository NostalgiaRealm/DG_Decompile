/*
 * FUN_1800ed2d4 at 1800ed2d4
 * uint __fastcall FUN_1800ed2d4(uint param_1, int param_2, uint param_3, undefined8 param_4, uint param_5, uint param_6)
 * Address ranges: 1800ed2d4-1800ed322
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800ed2d4(uint param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                  uint param_6)

{
  byte bVar1;
  
  bVar1 = (byte)(param_1 >> 0x14) & 7;
  if (bVar1 <= (byte)param_2) {
    param_2 = bVar1 - 1;
  }
  return (param_2 + (param_1 >> 0x12) & 3 |
         (((param_6 & 3) << 3 | param_5 & 3) << 2 | param_3 & 3) << 0x10 | param_1 & 0x3f00) << 4 |
         10;
}

