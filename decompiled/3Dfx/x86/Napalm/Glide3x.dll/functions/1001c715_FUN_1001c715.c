/*
 * FUN_1001c715 at 1001c715
 * undefined __fastcall FUN_1001c715(int param_1)
 * Address ranges: 1001c715-1001c785
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001c715(int param_1)

{
  undefined4 *puVar1;
  
  FUN_1001c8fd(param_1);
  FUN_1001dade(param_1 + 0x214);
  puVar1 = *(undefined4 **)(param_1 + 0x20c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003ea2f(puVar1);
    FUN_10055686(puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003ea2f(puVar1);
    FUN_10055686(puVar1);
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  FUN_1001c6cc(param_1);
  FUN_1001c82a(param_1);
  return;
}

