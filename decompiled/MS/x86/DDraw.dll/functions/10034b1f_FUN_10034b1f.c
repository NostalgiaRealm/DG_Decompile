/*
 * FUN_10034b1f at 10034b1f
 * undefined __thiscall FUN_10034b1f(void * this, int param_1, uint param_2, int * param_3, undefined4 param_4, undefined * param_5)
 * Address ranges: 10034b1f-10034b5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10034b1f(void *this,int param_1,uint param_2,int *param_3,undefined4 param_4,undefined *param_5)

{
  if ((param_3 == (int *)0x0) || (*param_3 != 0x6c)) {
    FUN_10025efc(*(void **)this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_10034abd(this,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

