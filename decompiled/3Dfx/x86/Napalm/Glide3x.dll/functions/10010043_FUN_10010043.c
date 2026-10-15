/*
 * FUN_10010043 at 10010043
 * undefined __fastcall FUN_10010043(int param_1)
 * Address ranges: 10010043-100100d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10010043(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_100118f8(*(void **)(*(int *)(param_1 + 0x1b0) + 0x365c),
                       *(int *)(*(int *)(param_1 + 0x1b0) + 0x2b1c));
  uVar2 = FUN_100118f8(*(void **)(*(int *)(param_1 + 0x1b0) + 0x365c),
                       *(int *)(*(int *)(param_1 + 0x1b0) + 0x2b20));
  if (uVar1 != 0xffffffff) {
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1b0) + 0x365c) + 0x2c))(uVar1);
    FUN_100165b8(iVar3);
  }
  if (uVar2 != 0xffffffff) {
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1b0) + 0x365c) + 0x2c))(uVar2);
    if ((*(char *)(*(int *)(param_1 + 0x1b0) + 0x2c9c) != '\0') && (*(char *)(iVar3 + 0x48) != '\0')
       ) {
      FUN_100165b8(iVar3);
      return;
    }
  }
  return;
}

