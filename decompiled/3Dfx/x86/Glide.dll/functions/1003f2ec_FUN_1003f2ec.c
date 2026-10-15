/*
 * FUN_1003f2ec at 1003f2ec
 * bool __thiscall FUN_1003f2ec(void * this, int * param_1, uint param_2, void * param_3, int * param_4, undefined4 * param_5, uint param_6, int param_7, undefined4 param_8, int param_9)
 * Address ranges: 1003f2ec-1003f33b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1003f2ec(void *this,int *param_1,uint param_2,void *param_3,int *param_4,undefined4 *param_5,
            uint param_6,int param_7,undefined4 param_8,int param_9)

{
  int local_30;
  int local_2c;
  
  FUN_1003efa7(this,&local_30,param_1,param_3,param_4,param_5,param_6,param_7,this,param_9);
  if (local_2c != 0) {
    FUN_1003f1a2(this,(uint)param_1,param_2,param_3,(int)&local_30,param_4);
  }
  return local_2c != 0;
}

