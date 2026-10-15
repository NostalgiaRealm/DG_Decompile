/*
 * FUN_10034a81 at 10034a81
 * undefined __thiscall FUN_10034a81(void * this, int param_1, uint param_2, int * param_3, undefined4 param_4, undefined * param_5)
 * Address ranges: 10034a81-10034abc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10034a81(void *this,int param_1,uint param_2,int *param_3,undefined4 param_4,undefined *param_5)

{
  if ((param_3 == (int *)0x0) || (*param_3 != 0x6c)) {
    FUN_10025c3c(*(void **)this,param_1,param_2,(int)param_3,param_4,param_5);
  }
  else {
    FUN_10034a1f(this,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

