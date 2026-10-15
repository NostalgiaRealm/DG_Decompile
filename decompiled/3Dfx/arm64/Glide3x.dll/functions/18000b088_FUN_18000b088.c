/*
 * FUN_18000b088 at 18000b088
 * undefined __cdecl FUN_18000b088(longlong param_1, uint param_2)
 * Address ranges: 18000b088-18000b103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b088(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *extraout_x10;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    uVar1 = FUN_18000d3f8(*(longlong *)(param_1 + 0x18),param_2);
    if (uVar1 != *(uint *)((longlong)extraout_x10 + 0x10a)) {
      (**(code **)(*extraout_x10 + 0x178))(extraout_x10,uVar1);
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x10a) = uVar1;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

