/*
 * FUN_10072e3c at 10072e3c
 * undefined __stdcall FUN_10072e3c(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 10072e3c-10072f48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072e3c(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  int *piVar3;
  int local_4c0 [6];
  int local_4a8 [12];
  undefined1 *local_478;
  undefined2 local_474;
  int local_470 [5];
  undefined1 local_45a [90];
  int local_400 [242];
  undefined4 local_38 [2];
  int local_30 [5];
  undefined4 local_1c;
  
  local_30[0] = param_2;
  local_30[4] = param_1;
  local_30[2] = 0;
  local_30[3] = 0;
  local_1c = 0;
  piVar2 = local_30;
  piVar3 = local_4c0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_100cfed0(local_470,0,0x430);
  FUN_100cfed0(local_400,0,0x3c0);
  FUN_100cfed0(local_4a8,0,0x38);
  local_4a8[0] = 0x10040;
  local_478 = local_45a;
  local_474 = 0x40;
  FUN_10070307((int)local_4c0);
  local_1c = 1;
  local_30[3] = 1;
  local_30[2] = extraout_ECX;
  local_38[0] = 0x43425844;
  FUN_100c3d16(param_3,local_38,0x24);
  *(int *)(*param_3 + 0x20) = param_3[1] - *param_3;
  FUN_10070483(param_3,local_4c0);
  FUN_100c3dfb(param_3);
  return;
}

