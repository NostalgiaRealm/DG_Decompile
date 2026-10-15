/*
 * FUN_1007b11b at 1007b11b
 * undefined __fastcall FUN_1007b11b(int param_1)
 * Address ranges: 1007b11b-1007b153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007b11b(int param_1)

{
  int extraout_EDX;
  undefined4 in_XMM0_Da;
  
  if ((*(uint *)(*(int *)(param_1 + 0x58f4) + 0x1c) & 0x1000000) != 0) {
    FUN_10013a3b();
    (**(code **)(**(int **)(extraout_EDX + 0x14) + 0x9c))
              (in_XMM0_Da,*(int *)(*(int *)(extraout_EDX + 0xc) + 0x94f) != 0);
  }
  return;
}

