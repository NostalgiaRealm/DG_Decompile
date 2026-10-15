/*
 * FUN_1003eb5d at 1003eb5d
 * bool __thiscall FUN_1003eb5d(void * this, uint param_1, void * param_2, int param_3, int param_4, undefined4 * param_5)
 * Address ranges: 1003eb5d-1003eba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1003eb5d(void *this,uint param_1,void *param_2,int param_3,int param_4,undefined4 *param_5)

{
  int local_30;
  int local_2c;
  
  FUN_1003ea7a(this,&local_30,param_2,param_4 - param_3,param_5);
  if (local_2c != 0) {
    FUN_1003eacd(this,param_1,param_2,(int)&local_30,param_3);
  }
  return local_2c != 0;
}

