/*
 * FUN_10016794 at 10016794
 * undefined __fastcall FUN_10016794(int param_1)
 * Address ranges: 10016794-100167ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10016794(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x9d9) == '\0') {
    puVar2 = *(undefined4 **)(param_1 + 0xabc);
    puVar3 = *(undefined4 **)(param_1 + 0xabc) + 0x2190;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_10021464((float *)(*(int *)(param_1 + 0xabc) + 0x8640));
    *(undefined1 *)(param_1 + 0x9d9) = 1;
  }
  return;
}

