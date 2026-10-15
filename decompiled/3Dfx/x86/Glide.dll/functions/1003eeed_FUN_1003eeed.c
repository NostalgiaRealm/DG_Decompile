/*
 * FUN_1003eeed at 1003eeed
 * bool __thiscall FUN_1003eeed(void * this, uint param_1, void * param_2, int param_3, int param_4, undefined4 * param_5)
 * Address ranges: 1003eeed-1003ef38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1003eeed(void *this,uint param_1,void *param_2,int param_3,int param_4,undefined4 *param_5)

{
  int local_30;
  int local_2c;
  
  FUN_1003ee0a(this,&local_30,param_2,param_4 - param_3,param_5);
  if (local_2c != 0) {
    FUN_1003ee5d(this,param_1,param_2,(int)&local_30,param_3);
  }
  return local_2c != 0;
}

