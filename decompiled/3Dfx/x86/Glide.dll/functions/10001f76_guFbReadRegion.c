/*
 * guFbReadRegion at 10001f76
 * undefined __stdcall guFbReadRegion(uint param_1, uint param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10001f76-10001fa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guFbReadRegion,24
 */

/* __stdcall guFbReadRegion,24 */

void guFbReadRegion(uint param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                   undefined4 param_6)

{
  undefined *this;
  int iVar1;
  
  iVar1 = DAT_10059788;
                    /* 0x1f76  116  _guFbReadRegion@24 */
  this = FUN_10012ab2();
  FUN_10013c1b(this,iVar1,param_1,param_2,param_3,param_4,param_6,param_5);
  return;
}

