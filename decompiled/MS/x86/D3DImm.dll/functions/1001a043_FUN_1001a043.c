/*
 * FUN_1001a043 at 1001a043
 * undefined __fastcall FUN_1001a043(int param_1)
 * Address ranges: 1001a043-1001a091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a043(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = 0;
      goto LAB_1001a063;
    }
    do {
      iVar1 = uVar2 * 0x40 + *(int *)(param_1 + 0xc);
LAB_1001a063:
      if (*(void **)(iVar1 + 0x38) != (void *)0x0) {
        FUN_1001a01b(*(void **)(iVar1 + 0x38),1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

