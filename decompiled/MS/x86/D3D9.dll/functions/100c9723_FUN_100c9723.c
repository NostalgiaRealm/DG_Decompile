/*
 * FUN_100c9723 at 100c9723
 * undefined __stdcall FUN_100c9723(int param_1, uint * param_2)
 * Address ranges: 100c9723-100c97d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c9723(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_50;
  uint local_4c;
  tagRECT local_14;
  
  *param_2 = *(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 0x18);
  param_2[1] = *(uint *)(param_1 + 0x14) / *(uint *)(param_1 + 0x1c);
  (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4),&local_50);
  FUN_100b7d94(&local_14,*(undefined4 *)(param_1 + 0x24),*(uint *)(param_1 + 0x10),
               *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),
               local_50,local_4c);
  uVar4 = local_14.right - local_14.left;
  uVar3 = local_14.bottom - local_14.top;
  param_2[2] = uVar4;
  param_2[3] = uVar3;
  param_2[4] = *(uint *)(&DAT_100d4018 + *(int *)(param_1 + 0x2c) * 4);
  uVar1 = *(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x14) / *(uint *)(param_1 + 0x1c);
  if ((uVar1 < uVar4) || (uVar2 < uVar3)) {
    uVar2 = uVar3 * 2 - 1;
    uVar1 = uVar4 * 2 - 1;
  }
  else {
    uVar2 = uVar2 * 2;
    uVar1 = uVar1 * 2;
  }
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  return;
}

