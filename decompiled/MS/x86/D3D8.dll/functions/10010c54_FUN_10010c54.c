/*
 * FUN_10010c54 at 10010c54
 * undefined __fastcall FUN_10010c54(int param_1)
 * Address ranges: 10010c54-10010c87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10010c54(int param_1)

{
  if (((*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) && (*(int *)(param_1 + 4) != 0)) &&
     (*(int **)(param_1 + 0x44) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x14))
              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),
               *(uint *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

