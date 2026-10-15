/*
 * FUN_180063d5c at 180063d5c
 * undefined __fastcall FUN_180063d5c(longlong * param_1, uint param_2, int param_3, float param_4)
 * Address ranges: 180063d5c-180063da5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063d5c(longlong *param_1,uint param_2,int param_3,float param_4)

{
  longlong *plVar1;
  
  if (param_2 < 5) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x1d8))(param_1,0);
    FUN_180063980(plVar1,(longlong)(param_1 + 0x16),(longlong)(param_1 + 0x1ed0),param_2,param_3,
                  param_4);
  }
  return;
}

