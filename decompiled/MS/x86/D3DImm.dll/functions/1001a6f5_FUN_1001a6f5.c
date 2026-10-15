/*
 * FUN_1001a6f5 at 1001a6f5
 * undefined __fastcall FUN_1001a6f5(int param_1)
 * Address ranges: 1001a6f5-1001a75c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a6f5(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = 0;
      goto LAB_1001a711;
    }
    do {
      iVar2 = uVar3 * 0x28 + *(int *)(param_1 + 0x10);
LAB_1001a711:
      puVar1 = *(undefined4 **)(iVar2 + 0x20);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_1001a75d(puVar1);
        FUN_1005c76c(puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

