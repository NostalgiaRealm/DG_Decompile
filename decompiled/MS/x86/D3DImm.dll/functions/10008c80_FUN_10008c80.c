/*
 * FUN_10008c80 at 10008c80
 * undefined __fastcall FUN_10008c80(int param_1)
 * Address ranges: 10008c80-10008cba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10008c80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x909) == '\0') {
    puVar2 = *(undefined4 **)(param_1 + 0x9cc);
    puVar3 = *(undefined4 **)(param_1 + 0x9cc) + 0x210;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_10013838((float *)(*(int *)(param_1 + 0x9cc) + 0x840));
    *(undefined1 *)(param_1 + 0x909) = 1;
  }
  return;
}

