/*
 * grLfbReadRegion at 100020b0
 * undefined __stdcall grLfbReadRegion(int param_1, uint param_2, uint param_3, int param_4, int param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 100020b0-100020d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbReadRegion,28
 */

/* __stdcall grLfbReadRegion,28 */

void grLfbReadRegion(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                    undefined4 param_6,undefined4 param_7)

{
  undefined *this;
  
                    /* 0x20b0  53  _grLfbReadRegion@28 */
  this = FUN_10012760();
  FUN_1001388d(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

