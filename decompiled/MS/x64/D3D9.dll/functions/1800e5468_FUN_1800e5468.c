/*
 * FUN_1800e5468 at 1800e5468
 * bool __fastcall FUN_1800e5468(longlong param_1, longlong * param_2, uint param_3, longlong * param_4, int * param_5, uint * param_6, uint param_7, uint param_8, undefined8 param_9, int param_10)
 * Address ranges: 1800e5468-1800e550d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800e5468(longlong param_1,longlong *param_2,uint param_3,longlong *param_4,int *param_5,
                  uint *param_6,uint param_7,uint param_8,undefined8 param_9,int param_10)

{
  longlong local_58;
  longlong local_50;
  
  FUN_1800e4f84(param_1,&local_58,param_2,param_4,param_5,param_6,param_7,param_8,0,param_10);
  if (local_50 != 0) {
    FUN_1800e52e4(param_1,(ulonglong)param_2,param_3,(longlong)param_4,(longlong)&local_58,
                  (undefined8 *)param_5);
  }
  return local_50 != 0;
}

