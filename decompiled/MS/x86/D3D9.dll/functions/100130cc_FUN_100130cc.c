/*
 * FUN_100130cc at 100130cc
 * bool __thiscall FUN_100130cc(void * this, undefined4 param_1, HDC param_2, int * param_3)
 * Address ranges: 100130cc-10013106
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100130cc(void *this,undefined4 param_1,HDC param_2,int *param_3)

{
  void *this_00;
  bool bVar1;
  
  this_00 = *(void **)((int)this + 0x7c);
  bVar1 = FUN_1002aaf5(this_00,param_2,param_3);
  if (*param_3 == 1) {
    FUN_1002b5fa(*(int *)(&DAT_100df4c0 + (int)this_00 * 0x228));
  }
  return bVar1;
}

