/*
 * FUN_1002e1ae at 1002e1ae
 * undefined __fastcall FUN_1002e1ae(int param_1)
 * Address ranges: 1002e1ae-1002e1fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e1ae(int param_1)

{
  undefined1 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = FUN_1002cd85(param_1);
  local_8 = *(ushort *)(param_1 + 0xe) - 1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x38))
                    (*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                     *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),&local_14);
  *(undefined1 *)(param_1 + 0xae) = uVar1;
  return;
}

