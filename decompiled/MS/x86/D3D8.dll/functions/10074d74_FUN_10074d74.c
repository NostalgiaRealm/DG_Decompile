/*
 * FUN_10074d74 at 10074d74
 * undefined __fastcall FUN_10074d74(int * param_1, undefined4 * param_2, int param_3)
 * Address ranges: 10074d74-10074e86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10074d74(int *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_100a138c(param_2 + 3,param_1,0x2d);
  }
  else {
    FUN_100a138c(param_2 + 3,param_1,0x8000002d);
  }
  if (((byte)*param_2 & 0xf) == 4) {
    FUN_100a138c(param_2 + 3,param_1,0x32);
    FUN_100a138c(param_2 + 3,param_1,0x40);
    FUN_100a138c(param_2 + 3,param_1,0x1c);
  }
  return;
}

