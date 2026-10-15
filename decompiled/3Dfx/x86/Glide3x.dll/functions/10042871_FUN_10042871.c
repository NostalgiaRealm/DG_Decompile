/*
 * FUN_10042871 at 10042871
 * undefined __thiscall FUN_10042871(void * this, int param_1)
 * Address ranges: 10042871-100428ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10042871(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      piVar1 = *(int **)(param_1 + 0xd78 + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        FUN_10043edf(this,*(int *)(param_1 + 8),piVar1);
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

