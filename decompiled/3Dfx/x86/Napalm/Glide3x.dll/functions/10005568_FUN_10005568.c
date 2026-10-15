/*
 * FUN_10005568 at 10005568
 * undefined __fastcall FUN_10005568(int param_1)
 * Address ranges: 10005568-100055bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005568(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar2 = 0, 0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)))
  {
    do {
      iVar1 = iVar2 * 0x4e8;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x458 + iVar1) = 0;
      iVar2 = iVar2 + 1;
      *(int *)(*(int *)(param_1 + 0xc) + 0x45c + iVar1) =
           *(int *)(*(int *)(param_1 + 0x1c) + 0x797) * *(int *)(*(int *)(param_1 + 0x1c) + 0x793);
    } while (iVar2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797));
  }
  return;
}

