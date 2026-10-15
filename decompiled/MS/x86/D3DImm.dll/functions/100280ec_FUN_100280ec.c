/*
 * FUN_100280ec at 100280ec
 * undefined __fastcall FUN_100280ec(int param_1)
 * Address ranges: 100280ec-1002813a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100280ec(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar1 = 0;
      goto LAB_1002810c;
    }
    do {
      iVar1 = uVar2 * 0x40 + *(int *)(param_1 + 0x10);
LAB_1002810c:
      if (*(void **)(iVar1 + 0x38) != (void *)0x0) {
        FUN_100280c1(*(void **)(iVar1 + 0x38),1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

