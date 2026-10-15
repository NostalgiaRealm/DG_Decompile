/*
 * FUN_10098cb4 at 10098cb4
 * undefined __fastcall FUN_10098cb4(int param_1)
 * Address ranges: 10098cb4-10098d45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10098cb4(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xe10) != 0) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0xe0c) + uVar3 * 4);
      if (*(int *)((int)pvVar1 + 0x60) == 1) {
        FUN_10014628(pvVar1,(int)pvVar1 + 0x88);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe10));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0xe04) != 0) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0xe00) + uVar3 * 4);
      if (*(int *)((int)pvVar1 + 0x60) == 1) {
        FUN_10014628(pvVar1,(int)pvVar1 + 0x88);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe04));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0xe28) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xe24) + uVar3 * 4);
      if (*(int *)(iVar2 + 0x34) == 1) {
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0xb0) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe28));
  }
  return;
}

