/*
 * FUN_1004acb8 at 1004acb8
 * undefined __fastcall FUN_1004acb8(uint param_1, byte param_2, uint param_3, undefined4 param_4, uint param_5, uint param_6)
 * Address ranges: 1004acb8-1004acf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1004acb8(uint param_1,byte param_2,uint param_3,undefined4 param_4,uint param_5,uint param_6)

{
  byte bVar1;
  
  bVar1 = (byte)(param_1 >> 0x14) & 7;
  if (bVar1 <= param_2) {
    param_2 = bVar1 - 1;
  }
  FUN_1004b4e4(param_1 >> 8 & 0x3f,((byte)(param_1 >> 0x12) & 3) + param_2,param_3,4,param_5,param_6
               ,0);
  return;
}

