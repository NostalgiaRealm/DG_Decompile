/*
 * FUN_18004a40c at 18004a40c
 * bool __fastcall FUN_18004a40c(longlong param_1, longlong * param_2, uint param_3, longlong * param_4, int * param_5, undefined8 * param_6, uint param_7, uint param_8, undefined8 param_9, int param_10)
 * Address ranges: 18004a40c-18004a4a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18004a40c(longlong param_1,longlong *param_2,uint param_3,longlong *param_4,int *param_5,
                  undefined8 *param_6,uint param_7,uint param_8,undefined8 param_9,int param_10)

{
  undefined8 in_stack_ffffffffffffff98;
  longlong local_58;
  longlong local_50;
  
  FUN_18004a008(param_1,&local_58,param_2,param_4,param_5,param_6,param_7,param_8,
                in_stack_ffffffffffffff98,param_10);
  if (local_50 != 0) {
    FUN_18004a288(param_1,(ulonglong)param_2,param_3,(longlong)param_4,(longlong)&local_58,
                  (undefined8 *)param_5);
  }
  return local_50 != 0;
}

