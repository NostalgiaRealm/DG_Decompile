/*
 * FUN_10034932 at 10034932
 * undefined __stdcall FUN_10034932(int param_1, undefined4 param_2, undefined4 param_3, int * param_4, undefined4 * param_5, int param_6, undefined1 param_7)
 * Address ranges: 10034932-1003497a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034932(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 *param_5
                 ,int param_6,undefined1 param_7)

{
  undefined4 uVar1;
  int local_80 [31];
  
  uVar1 = FUN_10031855(param_4,local_80);
  if (((char)uVar1 == '\0') && (param_4 != (int *)0x0)) {
    local_80[0] = *param_4;
  }
  FUN_100288e0(param_1,param_2,param_3,local_80,param_5,param_6,param_7,(int *)0x0);
  return;
}

