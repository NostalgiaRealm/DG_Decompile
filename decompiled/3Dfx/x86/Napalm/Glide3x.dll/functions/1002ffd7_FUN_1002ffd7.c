/*
 * FUN_1002ffd7 at 1002ffd7
 * uint __fastcall FUN_1002ffd7(int param_1)
 * Address ranges: 1002ffd7-10030023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002ffd7(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 4))
                    (0x1000,*(undefined4 *)(param_1 + 0x1c),&local_8);
  if (uVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    *(bool *)(param_1 + 0x2c) = local_8 == 0;
    *(int *)(param_1 + 0x28) = iVar2 + local_8;
    if (local_8 == 0) {
      iVar2 = 0;
    }
    uVar1 = 1;
    *(int *)(param_1 + 0x24) = iVar2;
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

