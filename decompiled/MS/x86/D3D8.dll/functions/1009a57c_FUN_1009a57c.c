/*
 * FUN_1009a57c at 1009a57c
 * bool __thiscall FUN_1009a57c(void * this, uint param_1, void * param_2, int param_3, int param_4, undefined4 * param_5)
 * Address ranges: 1009a57c-1009a5bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1009a57c(void *this,uint param_1,void *param_2,int param_3,int param_4,undefined4 *param_5)

{
  int local_30;
  int local_2c;
  
  FUN_1009a499(this,&local_30,param_2,param_4 - param_3,param_5);
  if (local_2c != 0) {
    FUN_1009a4ec(this,param_1,param_2,(int)&local_30,param_3);
  }
  return local_2c != 0;
}

