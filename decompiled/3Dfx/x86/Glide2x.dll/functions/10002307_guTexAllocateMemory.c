/*
 * guTexAllocateMemory at 10002307
 * undefined __stdcall guTexAllocateMemory(int param_1, uint param_2, undefined4 param_3, undefined4 param_4, uint param_5, undefined4 param_6, int param_7, uint param_8, int param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15)
 * Address ranges: 10002307-10002349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guTexAllocateMemory,60
 */

/* __stdcall guTexAllocateMemory,60 */

void guTexAllocateMemory(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5
                        ,undefined4 param_6,int param_7,uint param_8,int param_9,undefined4 param_10
                        ,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                        undefined4 param_14,undefined4 param_15)

{
  undefined *this;
  undefined4 extraout_var;
  
                    /* 0x2307  125  _guTexAllocateMemory@60 */
  this = FUN_10012760();
  FUN_10014bdc(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
               ,param_11,param_12,extraout_var,param_14,param_15);
  return;
}

