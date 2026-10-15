/*
 * FUN_100128b9 at 100128b9
 * undefined __fastcall FUN_100128b9(int param_1)
 * Address ranges: 100128b9-1001290b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100128b9(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = 0;
    iVar2 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
      do {
        *(int *)(*(int *)(param_1 + 0xc) + 0x2a0 + iVar2 * 0x4e8) = iVar1;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2a4 + iVar2 * 0x4e8) =
             *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x793);
        iVar1 = iVar1 + *(int *)(*(int *)(param_1 + 0x1c) + 0x793);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797));
    }
  }
  return;
}

