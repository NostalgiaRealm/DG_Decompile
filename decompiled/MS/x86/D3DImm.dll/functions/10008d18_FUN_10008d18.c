/*
 * FUN_10008d18 at 10008d18
 * undefined __fastcall FUN_10008d18(int param_1)
 * Address ranges: 10008d18-10008d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10008d18(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x90a) == '\0') {
    FUN_10008c2c(param_1);
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x9cc) + 0x800);
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x9cc) + 0x880);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar1 = FUN_10013838((float *)(*(int *)(param_1 + 0x9cc) + 0x880));
    *(undefined1 *)(param_1 + 0x90b) = uVar1;
    *(undefined1 *)(param_1 + 0x90a) = 1;
  }
  return;
}

