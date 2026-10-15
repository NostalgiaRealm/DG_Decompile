/*
 * FUN_1004c7c3 at 1004c7c3
 * undefined __fastcall FUN_1004c7c3(int param_1)
 * Address ranges: 1004c7c3-1004c811
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c7c3(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar1 = 0;
      goto LAB_1004c7e3;
    }
    do {
      iVar1 = uVar2 * 0x40 + *(int *)(param_1 + 0x10);
LAB_1004c7e3:
      if (*(void **)(iVar1 + 0x38) != (void *)0x0) {
        FUN_1004c798(*(void **)(iVar1 + 0x38),1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  thunk_FUN_100cfd6c(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

