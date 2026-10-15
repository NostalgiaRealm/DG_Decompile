/*
 * grLfbWriteRegion at 10002081
 * undefined __stdcall grLfbWriteRegion(int param_1, uint param_2, uint param_3, undefined4 param_4, int param_5, uint param_6, int param_7, undefined4 param_8)
 * Address ranges: 10002081-100020af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbWriteRegion,32
 */

/* __stdcall grLfbWriteRegion,32 */

void grLfbWriteRegion(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                     uint param_6,int param_7,undefined4 param_8)

{
  undefined *this;
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* 0x2081  57  _grLfbWriteRegion@32 */
  uVar2 = 0;
  uVar1 = 0;
  this = FUN_10012760();
  FUN_100137d4(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1,uVar2);
  return;
}

