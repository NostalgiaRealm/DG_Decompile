/*
 * FUN_1005d186 at 1005d186
 * undefined __stdcall FUN_1005d186(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 1005d186-1005d292
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005d186(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  int *piVar3;
  int local_430 [6];
  int local_418 [12];
  undefined1 *local_3e8;
  undefined2 local_3e4;
  int local_3e0 [5];
  undefined1 local_3ca [90];
  int local_370 [206];
  undefined4 local_38 [2];
  int local_30 [5];
  undefined4 local_1c;
  
  local_30[0] = param_2;
  local_30[4] = param_1;
  local_30[2] = 0;
  local_30[3] = 0;
  local_1c = 0;
  piVar2 = local_30;
  piVar3 = local_430;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_100ada8e(local_3e0,0,0x3a0);
  FUN_100ada8e(local_370,0,0x330);
  FUN_100ada8e(local_418,0,0x38);
  local_418[0] = 0x10040;
  local_3e8 = local_3ca;
  local_3e4 = 0x40;
  FUN_1005a8ee((int)local_430);
  local_1c = 1;
  local_30[3] = 1;
  local_30[2] = extraout_ECX;
  local_38[0] = 0x43425844;
  FUN_100a14c1(param_3,local_38,0x24);
  *(int *)(*param_3 + 0x20) = param_3[1] - *param_3;
  FUN_1005aa2c(param_3,local_430);
  FUN_100a15a6(param_3);
  return;
}

