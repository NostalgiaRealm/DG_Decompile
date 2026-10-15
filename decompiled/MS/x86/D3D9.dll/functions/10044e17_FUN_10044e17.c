/*
 * FUN_10044e17 at 10044e17
 * undefined __fastcall FUN_10044e17(int param_1)
 * Address ranges: 10044e17-10044eb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10044e17(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0xfc38 + uVar2 * 4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  if (*(int *)(param_1 + 0xfc78) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xfc78) + 0x10) = 0;
  }
  if (*(void **)(param_1 + 0xf760) != (void *)0x0) {
    FUN_1003c2e0(*(void **)(param_1 + 0xf760),1);
  }
  if (*(void **)(param_1 + 0xf758) != (void *)0x0) {
    FUN_1003c2e0(*(void **)(param_1 + 0xf758),1);
  }
  if (*(void **)(param_1 + 0xf75c) != (void *)0x0) {
    FUN_1003c2e0(*(void **)(param_1 + 0xf75c),1);
  }
  if (*(void **)(param_1 + 0xf6e8) != (void *)0x0) {
    FUN_1003c2e0(*(void **)(param_1 + 0xf6e8),1);
  }
  if (*(void **)(param_1 + 0xf754) != (void *)0x0) {
    FUN_1003c2e0(*(void **)(param_1 + 0xf754),1);
  }
  *(undefined4 *)(param_1 + 0xf760) = 0;
  *(undefined4 *)(param_1 + 0xf758) = 0;
  *(undefined4 *)(param_1 + 0xf75c) = 0;
  *(undefined4 *)(param_1 + 0xf6e8) = 0;
  *(undefined4 *)(param_1 + 0xf754) = 0;
  return;
}

