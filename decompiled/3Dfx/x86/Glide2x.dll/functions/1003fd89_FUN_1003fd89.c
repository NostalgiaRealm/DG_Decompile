/*
 * FUN_1003fd89 at 1003fd89
 * undefined __thiscall FUN_1003fd89(void * this, int param_1)
 * Address ranges: 1003fd89-1003fe07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003fd89(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      piVar1 = *(int **)(param_1 + 0xd78 + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        FUN_100413f7(this,*(int *)(param_1 + 8),piVar1);
        *(undefined4 *)(param_1 + 0xd78 + uVar2 * 4) = 0;
      }
      piVar1 = *(int **)(param_1 + 0xd80 + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0xd80 + uVar2 * 4) = 0;
      }
      piVar1 = *(int **)(param_1 + 0xd70 + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0xd70 + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

