/*
 * FUN_10048d8c at 10048d8c
 * uint __fastcall FUN_10048d8c(uint param_1, byte param_2, uint param_3, int param_4, uint param_5, uint param_6, uint param_7)
 * Address ranges: 10048d8c-10048de9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_10048d8c(uint param_1,byte param_2,uint param_3,int param_4,uint param_5,uint param_6,
            uint param_7)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 == 1);
  if (param_4 == 4) {
    uVar1 = 2;
  }
  return ((((((param_7 & 3) << 3 | param_6 & 3) << 3 | param_5 & 3) << 2 | param_3 & 3) << 8 |
          param_1 & 0xff) << 8 | param_2 & 3) << 4 | uVar1 | 8;
}

