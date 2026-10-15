/*
 * FUN_10052dfd at 10052dfd
 * bool __thiscall FUN_10052dfd(void * this, int * param_1, uint param_2, void * param_3, int * param_4, undefined4 * param_5, uint param_6, undefined4 param_7, undefined4 param_8, int param_9)
 * Address ranges: 10052dfd-10052e4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10052dfd(void *this,int *param_1,uint param_2,void *param_3,int *param_4,undefined4 *param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int local_30;
  int local_2c;
  
  FUN_10052ad5(this,&local_30,param_1,param_3,param_4,param_5,param_6,this,this,param_9);
  if (local_2c != 0) {
    FUN_10052cb3(this,(uint)param_1,param_2,param_3,(int)&local_30,param_4);
  }
  return local_2c != 0;
}

