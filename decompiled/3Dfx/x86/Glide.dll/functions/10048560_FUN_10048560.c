/*
 * FUN_10048560 at 10048560
 * undefined __fastcall FUN_10048560(uint param_1, byte param_2, uint param_3, undefined4 param_4, uint param_5, uint param_6)
 * Address ranges: 10048560-1004859b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10048560(uint param_1,byte param_2,uint param_3,undefined4 param_4,uint param_5,uint param_6)

{
  byte bVar1;
  
  bVar1 = (byte)(param_1 >> 0x14) & 7;
  if (bVar1 <= param_2) {
    param_2 = bVar1 - 1;
  }
  FUN_10048d8c(param_1 >> 8 & 0x3f,((byte)(param_1 >> 0x12) & 3) + param_2,param_3,4,param_5,param_6
               ,0);
  return;
}

