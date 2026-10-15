/*
 * FUN_1003c9d4 at 1003c9d4
 * undefined4 * __fastcall FUN_1003c9d4(undefined4 * param_1, int * param_2, int * param_3, int * param_4, int param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 1003c9d4-1003ca35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1003c9d4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 *this;
  
  this = (undefined4 *)FUN_1005c755(0x17e8);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_1003d472(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    *this = &PTR_FUN_1005f038;
    this[0x5f7] = 0;
    this[0x5f8] = 0;
    this[0x5f9] = 0;
    this[0x5f6] = &PTR_LAB_1005f034;
  }
  return this;
}

