/*
 * FUN_1000a2ef at 1000a2ef
 * undefined __fastcall FUN_1000a2ef(int param_1)
 * Address ranges: 1000a2ef-1000a364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000a2ef(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24 [7];
  undefined4 local_8;
  
  local_34 = 0x3d;
  local_30 = 4;
  local_2c = 0x1688;
  puVar3 = local_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_24[0] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[1] = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 14000) + 0x24))(*(int **)(param_1 + 14000),&local_8);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3684) * 0x18 + 0x520 + *(int *)(param_1 + 0x3680));
  (**(code **)(*piVar1 + 0x48))(piVar1,*(undefined4 *)(param_1 + 0x36ac),&local_34,local_8);
  return;
}

