/*
 * FUN_100268b5 at 100268b5
 * undefined __fastcall FUN_100268b5(int param_1)
 * Address ranges: 100268b5-10026902
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100268b5(int param_1)

{
  undefined1 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = FUN_10025723(param_1);
  local_8 = *(ushort *)(param_1 + 0xe) - 1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x38))
                    (*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                     *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),&local_14);
  *(undefined1 *)(param_1 + 0xae) = uVar1;
  return;
}

