/*
 * FUN_100356e8 at 100356e8
 * int __thiscall FUN_100356e8(void * this, int * param_1, int * param_2, uint param_3, int param_4)
 * Address ranges: 100356e8-1003571b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100356e8(void *this,int *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0x6c) {
      iVar1 = FUN_10035692(this,param_1,param_2,param_3,param_4);
    }
    else {
      iVar1 = FUN_10032b5b(*(void **)this,param_1,param_2,param_3,param_4);
    }
  }
  return iVar1;
}

