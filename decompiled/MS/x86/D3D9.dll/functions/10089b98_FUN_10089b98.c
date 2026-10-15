/*
 * FUN_10089b98 at 10089b98
 * int __fastcall FUN_10089b98(int * param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 10089b98-10089d80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10089b98(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  
  if (param_4 != 2) {
    FUN_10089407(param_1,param_2);
    param_4 = 2;
  }
  puVar1 = (uint *)(param_2 + 0xc);
  if (*puVar1 < 0x50) {
    FUN_100c3be1((int *)puVar1,param_1,0x55);
    FUN_100c3be1((int *)puVar1,param_1,0x55);
    FUN_100c3be1((int *)puVar1,param_1,0x55);
  }
  FUN_100c3be1((int *)puVar1,param_1,0x55);
  if (*puVar1 < 0x50) {
    FUN_100c3be1((int *)puVar1,param_1,0x29);
    FUN_100c3be1((int *)puVar1,param_1,0x29);
    FUN_100c3be1((int *)puVar1,param_1,0x29);
  }
  FUN_100c3be1((int *)puVar1,param_1,0x29);
  FUN_100c3be1((int *)puVar1,param_1,0x3c);
  FUN_100c3be1((int *)puVar1,param_1,0x3c);
  FUN_100c3be1((int *)puVar1,param_1,1);
  return param_4;
}

