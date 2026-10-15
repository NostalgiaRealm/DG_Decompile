/*
 * FUN_1003db63 at 1003db63
 * undefined __fastcall FUN_1003db63(int param_1)
 * Address ranges: 1003db63-1003dba9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003db63(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x14b0);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xa5c) != 0) {
    do {
      *(undefined4 *)(param_1 + 0x14b0 + uVar2 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0xa5c) + 4 + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 9);
    if (*(int *)(*(int *)(param_1 + 0xa58) + 0x30) == 1) {
      *(undefined4 *)(param_1 + 0x14bc) = 1;
    }
  }
  return;
}

