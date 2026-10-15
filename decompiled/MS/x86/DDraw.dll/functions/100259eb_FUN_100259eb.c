/*
 * FUN_100259eb at 100259eb
 * undefined __fastcall FUN_100259eb(int param_1)
 * Address ranges: 100259eb-10025a62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100259eb(int param_1)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 300) != 0) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0x128) + uVar3 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_1002a1c6(pvVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 300));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x138) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x134) + uVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x138));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x140) + uVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x144));
  }
  return;
}

