/*
 * FUN_100227ee at 100227ee
 * bool __thiscall FUN_100227ee(void * this, undefined4 param_1, HDC param_2, int * param_3)
 * Address ranges: 100227ee-1002282f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100227ee(void *this,undefined4 param_1,HDC param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = FUN_10002c4f(*(void **)((int)this + 0xe4),param_2,param_3);
  if (*param_3 == 1) {
    FUN_100036fd(*(int *)(&DAT_1006c488 + *(int *)((int)this + 0xe4) * 0x228));
  }
  return bVar1;
}

