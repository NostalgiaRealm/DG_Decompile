/*
 * FUN_180085760 at 180085760
 * undefined __fastcall FUN_180085760(undefined8 param_1, longlong param_2, longlong * param_3)
 * Address ranges: 180085760-180085826
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180085760(undefined8 param_1,longlong param_2,longlong *param_3)

{
  if (*(int *)(param_2 + 0x484) != -1) {
    FUN_1800edd10((uint *)(param_2 + 0x20),param_3,0x37,param_2 + 0x350);
    FUN_1800ec960(param_2 + 0x20,*(uint *)(param_2 + 800));
    *(undefined4 *)(param_2 + 800) = 0;
  }
  return;
}

