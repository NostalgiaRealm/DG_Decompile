/*
 * FUN_1000ec60 at 1000ec60
 * undefined __fastcall FUN_1000ec60(int param_1)
 * Address ranges: 1000ec60-1000ecee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000ec60(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_1001059c(*(void **)(*(int *)(param_1 + 0x1b0) + 0x32dc),
                       *(int *)(*(int *)(param_1 + 0x1b0) + 0x29e0));
  uVar2 = FUN_1001059c(*(void **)(*(int *)(param_1 + 0x1b0) + 0x32dc),
                       *(int *)(*(int *)(param_1 + 0x1b0) + 0x29e4));
  if (uVar1 != 0xffffffff) {
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1b0) + 0x32dc) + 0x2c))(uVar1);
    FUN_10014f27(iVar3);
  }
  if (uVar2 != 0xffffffff) {
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1b0) + 0x32dc) + 0x2c))(uVar2);
    if ((*(char *)(*(int *)(param_1 + 0x1b0) + 0x2b5c) != '\0') && (*(char *)(iVar3 + 0x48) != '\0')
       ) {
      FUN_10014f27(iVar3);
      return;
    }
  }
  return;
}

