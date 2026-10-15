/*
 * FUN_10041645 at 10041645
 * bool __thiscall FUN_10041645(void * this, uint param_1, void * param_2, int param_3, int param_4, undefined4 * param_5)
 * Address ranges: 10041645-10041690
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10041645(void *this,uint param_1,void *param_2,int param_3,int param_4,undefined4 *param_5)

{
  int local_30;
  int local_2c;
  
  FUN_10041562(this,&local_30,param_2,param_4 - param_3,param_5);
  if (local_2c != 0) {
    FUN_100415b5(this,param_1,param_2,(int)&local_30,param_3);
  }
  return local_2c != 0;
}

