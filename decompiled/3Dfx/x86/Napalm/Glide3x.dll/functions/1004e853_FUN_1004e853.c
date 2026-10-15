/*
 * FUN_1004e853 at 1004e853
 * uint __fastcall FUN_1004e853(uint param_1, byte param_2, uint param_3, int param_4, undefined4 param_5, uint param_6)
 * Address ranges: 1004e853-1004e894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_1004e853(uint param_1,byte param_2,uint param_3,int param_4,undefined4 param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 == 1);
  if (param_4 == 4) {
    uVar1 = 2;
  }
  return ((((param_6 & 3) << 5 | param_3 & 3) << 8 | param_1 & 0xff) << 8 | (uint)param_2) << 4 |
         uVar1;
}

