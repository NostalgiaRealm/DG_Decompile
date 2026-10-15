/*
 * FUN_10081432 at 10081432
 * undefined __fastcall FUN_10081432(int param_1)
 * Address ranges: 10081432-10081468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10081432(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1008109d(*(int *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x38 + uVar2 * 4);
    if (iVar1 != 0) {
      FUN_1008109d(iVar1);
      *(undefined4 *)(param_1 + 0x38 + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

