/*
 * FUN_1007e0f2 at 1007e0f2
 * undefined __fastcall FUN_1007e0f2(int param_1)
 * Address ranges: 1007e0f2-1007e183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007e0f2(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xb4c) != 0) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0xb48) + uVar3 * 4);
      if (*(int *)((int)pvVar1 + 0x60) == 1) {
        FUN_10010729(pvVar1,(int)pvVar1 + 0x88);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb4c));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0xb40) != 0) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0xb3c) + uVar3 * 4);
      if (*(int *)((int)pvVar1 + 0x60) == 1) {
        FUN_10010729(pvVar1,(int)pvVar1 + 0x88);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb40));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0xb64) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xb60) + uVar3 * 4);
      if (*(int *)(iVar2 + 0x34) == 1) {
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0xb0) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb64));
  }
  return;
}

