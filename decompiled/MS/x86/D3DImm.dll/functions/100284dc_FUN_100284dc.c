/*
 * FUN_100284dc at 100284dc
 * int * __thiscall FUN_100284dc(void * this, int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 100284dc-10028566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100284dc(void *this,int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *local_18;
  int local_14;
  
  FUN_1005c9cc(param_1,0,0x58);
  if ((param_2 & 0x100) == 0) {
    FUN_10019cac(&local_18,0x100);
    cVar1 = FUN_1003c0da((int)this + 0x18,param_2,param_3,0x10051,(int *)&local_18,
                         *(char *)((int)this + 0x120),param_1 + 1);
    if (cVar1 != '\0') {
      piVar2 = FUN_10056dbd(local_14 - (int)local_18,local_18);
      *param_1 = (int)piVar2;
    }
    thunk_FUN_1005c76c(local_18);
  }
  return param_1;
}

