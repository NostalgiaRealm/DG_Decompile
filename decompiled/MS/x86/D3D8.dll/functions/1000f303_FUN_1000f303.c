/*
 * FUN_1000f303 at 1000f303
 * bool __thiscall FUN_1000f303(void * this, undefined4 param_1, HDC param_2, int * param_3)
 * Address ranges: 1000f303-1000f33d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1000f303(void *this,undefined4 param_1,HDC param_2,int *param_3)

{
  void *this_00;
  bool bVar1;
  
  this_00 = *(void **)((int)this + 0x7c);
  bVar1 = FUN_100234c1(this_00,param_2,param_3);
  if (*param_3 == 1) {
    FUN_10023f88(*(int *)(&DAT_100ba8f8 + (int)this_00 * 0x228));
  }
  return bVar1;
}

