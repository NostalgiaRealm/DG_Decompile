/*
 * FUN_10079759 at 10079759
 * undefined4 * __fastcall FUN_10079759(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined2 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)
 * Address ranges: 10079759-100797dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_10079759(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  undefined4 *this;
  
  this = (undefined4 *)FUN_100ad475(0xd8);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this[0x33] = 0;
    this[0x34] = 0;
    this[0x35] = this + 0x32;
    FUN_10011511(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 param_10,param_11);
    this[0x32] = &PTR_FUN_100b38d8;
    *this = &PTR_LAB_100b3924;
    this[0x30] = &PTR_LAB_100b1530;
  }
  return this;
}

