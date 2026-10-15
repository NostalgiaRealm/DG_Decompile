/*
 * FUN_1008af31 at 1008af31
 * undefined __fastcall FUN_1008af31(int * param_1, undefined4 * param_2, int param_3)
 * Address ranges: 1008af31-1008b043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1008af31(int *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_100c3be1(param_2 + 3,param_1,0x2d);
  }
  else {
    FUN_100c3be1(param_2 + 3,param_1,0x8000002d);
  }
  if (((byte)*param_2 & 0xf) == 4) {
    FUN_100c3be1(param_2 + 3,param_1,0x32);
    FUN_100c3be1(param_2 + 3,param_1,0x40);
    FUN_100c3be1(param_2 + 3,param_1,0x1c);
  }
  return;
}

