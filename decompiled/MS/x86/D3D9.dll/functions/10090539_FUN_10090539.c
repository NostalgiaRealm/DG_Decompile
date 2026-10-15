/*
 * FUN_10090539 at 10090539
 * undefined __fastcall FUN_10090539(int param_1)
 * Address ranges: 10090539-10090597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10090539(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 100) + uVar2 * 4) + 4))
                (-(uint)(param_1 != 0) & param_1 + 0x60U);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x68));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x48) + uVar2 * 4);
      FUN_1000fc01(&DAT_100deee0 + iVar1 * 8);
      FUN_1000fc01(&DAT_100deeec + iVar1 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x4c));
  }
  FUN_10003912(param_1);
  return;
}

