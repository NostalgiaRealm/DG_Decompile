/*
 * FUN_10028051 at 10028051
 * undefined __fastcall FUN_10028051(int param_1)
 * Address ranges: 10028051-10028106
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10028051(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *local_c;
  uint local_8;
  
  FUN_10047052(*(void **)(param_1 + 8),param_1);
  uVar4 = 0;
  piVar1 = (int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      iVar3 = *piVar1;
      local_8 = 0;
      if (*(int *)(*(int *)(iVar3 + uVar4 * 4) + 4) != 0) {
        do {
          local_c = *(undefined4 **)(*(int *)(**(int **)(iVar3 + uVar4 * 4) + local_8 * 4) + 0x24);
          FUN_100380de((void *)(*(int *)(param_1 + 0xc) + 0x1640),(int *)&local_c);
          puVar2 = *(undefined4 **)(**(int **)(*piVar1 + uVar4 * 4) + local_8 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          iVar3 = *piVar1;
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)(*(int *)(iVar3 + uVar4 * 4) + 4));
      }
      local_c = *(undefined4 **)(iVar3 + uVar4 * 4);
      if (local_c != (undefined4 *)0x0) {
        thunk_FUN_1004f626((LPVOID)*local_c);
        FUN_1004f626(local_c);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  thunk_FUN_1004f626((LPVOID)*piVar1);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

