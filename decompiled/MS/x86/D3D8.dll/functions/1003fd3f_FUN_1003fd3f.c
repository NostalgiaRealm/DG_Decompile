/*
 * FUN_1003fd3f at 1003fd3f
 * undefined __fastcall FUN_1003fd3f(int param_1)
 * Address ranges: 1003fd3f-1003fd8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003fd3f(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar1 = 0;
      goto LAB_1003fd5f;
    }
    do {
      iVar1 = uVar2 * 0x40 + *(int *)(param_1 + 0x10);
LAB_1003fd5f:
      if (*(void **)(iVar1 + 0x38) != (void *)0x0) {
        FUN_1003fd14(*(void **)(iVar1 + 0x38),1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

