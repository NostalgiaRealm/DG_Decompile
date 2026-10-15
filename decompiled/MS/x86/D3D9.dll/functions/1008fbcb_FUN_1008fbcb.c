/*
 * FUN_1008fbcb at 1008fbcb
 * undefined4 * __fastcall FUN_1008fbcb(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined2 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)
 * Address ranges: 1008fbcb-1008fc58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1008fbcb(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  undefined4 *this;
  
  this = (undefined4 *)FUN_100cfd55(0xe0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this[0x33] = 0;
    this[0x34] = 0;
    this[0x35] = this + 0x32;
    FUN_10015401(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 param_10,param_11);
    this[0x32] = &PTR_FUN_100d729c;
    *this = &PTR_D3DPERF_SetOptions_100d72f4;
    this[0x30] = &PTR_LAB_100d4840;
    this[0x36] = 2;
  }
  return this;
}

