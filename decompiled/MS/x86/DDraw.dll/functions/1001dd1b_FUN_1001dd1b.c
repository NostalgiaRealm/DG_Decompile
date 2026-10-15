/*
 * FUN_1001dd1b at 1001dd1b
 * undefined __fastcall FUN_1001dd1b(int * param_1, undefined4 * param_2, int param_3)
 * Address ranges: 1001dd1b-1001de2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001dd1b(int *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_100575ba(param_2 + 3,param_1,0x2d);
  }
  else {
    FUN_100575ba(param_2 + 3,param_1,0x8000002d);
  }
  if (((byte)*param_2 & 0xf) == 4) {
    FUN_100575ba(param_2 + 3,param_1,0x32);
    FUN_100575ba(param_2 + 3,param_1,0x40);
    FUN_100575ba(param_2 + 3,param_1,0x1c);
  }
  return;
}

