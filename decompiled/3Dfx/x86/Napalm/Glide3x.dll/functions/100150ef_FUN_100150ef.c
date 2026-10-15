/*
 * FUN_100150ef at 100150ef
 * undefined __fastcall FUN_100150ef(int param_1)
 * Address ranges: 100150ef-1001513c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100150ef(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x9a0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003ea2f(puVar1);
    FUN_10055686(puVar1);
  }
  FUN_10012f06(param_1);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1f8 + uVar2 * 0x120) != 0) {
      FUN_1001d86a((void *)(param_1 + 0x140 + uVar2 * 0x120));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return;
}

