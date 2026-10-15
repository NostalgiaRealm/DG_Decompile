/*
 * grLfbWriteRegion at 100020ac
 * undefined __stdcall grLfbWriteRegion(int param_1, uint param_2, uint param_3, undefined4 param_4, int param_5, uint param_6, int param_7, int param_8, undefined4 param_9)
 * Address ranges: 100020ac-100020e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbWriteRegion,36
 */

/* __stdcall grLfbWriteRegion,36 */

void grLfbWriteRegion(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                     uint param_6,int param_7,int param_8,undefined4 param_9)

{
  uint uVar1;
  undefined *this;
  undefined4 uVar2;
  
                    /* 0x20ac  66  _grLfbWriteRegion@36 */
  uVar2 = 0;
  uVar1 = (uint)(param_7 != 0);
  this = FUN_10005411();
  FUN_100065bb(this,param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,uVar1,uVar2);
  return;
}

