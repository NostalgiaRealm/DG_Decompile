/*
 * FUN_100c3f98 at 100c3f98
 * uint __fastcall FUN_100c3f98(uint param_1, byte param_2, uint param_3, int param_4, undefined4 param_5, uint param_6)
 * Address ranges: 100c3f98-100c3fd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_100c3f98(uint param_1,byte param_2,uint param_3,int param_4,undefined4 param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 == 1);
  if (param_4 == 4) {
    uVar1 = 2;
  }
  return ((((param_6 & 3) << 5 | param_3 & 3) << 8 | param_1 & 0xff) << 8 | (uint)param_2) << 4 |
         uVar1;
}

