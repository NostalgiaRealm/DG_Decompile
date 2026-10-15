/*
 * FUN_180018e18 at 180018e18
 * undefined __cdecl FUN_180018e18(longlong param_1, uint param_2)
 * Address ranges: 180018e18-180018e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018e18(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *extraout_x10;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    uVar1 = FUN_1800200d0(*(longlong *)(param_1 + 0x18),param_2);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0x10a)) {
      (**(code **)(*extraout_x10 + 0x158))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x10a) = uVar1;
    }
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

