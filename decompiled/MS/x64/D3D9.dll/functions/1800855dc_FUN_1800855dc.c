/*
 * FUN_1800855dc at 1800855dc
 * undefined __fastcall FUN_1800855dc(undefined8 param_1, uint * param_2, undefined4 param_3, uint param_4, int param_5, longlong param_6, longlong * param_7, char param_8, char param_9)
 * Address ranges: 1800855dc-18008562d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800855dc(undefined8 param_1,uint *param_2,undefined4 param_3,uint param_4,int param_5,
                  longlong param_6,longlong *param_7,char param_8,char param_9)

{
  if (1 < *(byte *)(*(longlong *)(param_6 + 0x10) + 0x4a6c)) {
    FUN_18007be04(param_6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  FUN_180085134(param_6,param_2,param_3,param_4,param_5,param_6,param_8,param_9);
  return;
}

