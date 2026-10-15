/*
 * FUN_1001a7d4 at 1001a7d4
 * undefined __fastcall FUN_1001a7d4(int param_1)
 * Address ranges: 1001a7d4-1001a80e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a7d4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0xc9d) == '\0') {
    puVar2 = *(undefined4 **)(param_1 + 0xd80);
    puVar3 = *(undefined4 **)(param_1 + 0xd80) + 0x2190;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_10028afc((float *)(*(int *)(param_1 + 0xd80) + 0x8640));
    *(undefined1 *)(param_1 + 0xc9d) = 1;
  }
  return;
}

