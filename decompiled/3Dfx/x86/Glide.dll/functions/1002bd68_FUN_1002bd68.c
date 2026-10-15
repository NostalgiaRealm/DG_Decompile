/*
 * FUN_1002bd68 at 1002bd68
 * undefined __fastcall FUN_1002bd68(int param_1)
 * Address ranges: 1002bd68-1002bdf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002bd68(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8;
  
  FUN_100473e2(*(void **)(param_1 + 8),param_1);
  uVar4 = 0;
  piVar1 = (int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      iVar3 = *piVar1;
      local_8 = 0;
      if (*(int *)(*(int *)(iVar3 + uVar4 * 4) + 4) != 0) {
        do {
          puVar2 = *(undefined4 **)(**(int **)(iVar3 + uVar4 * 4) + local_8 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          iVar3 = *piVar1;
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)(*(int *)(iVar3 + uVar4 * 4) + 4));
      }
      puVar2 = *(undefined4 **)(iVar3 + uVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        thunk_FUN_1004f9b6((LPVOID)*puVar2);
        FUN_1004f9b6(puVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  thunk_FUN_1004f9b6((LPVOID)*piVar1);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

