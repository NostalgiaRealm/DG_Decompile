/*
 * FUN_10006691 at 10006691
 * bool __fastcall FUN_10006691(int param_1)
 * Address ranges: 10006691-100066e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10006691(int param_1)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = FUN_10005029(param_1);
  local_8 = *(ushort *)(param_1 + 0xe) - 1;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x3c))
                    (*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                     *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),&local_14);
  *(bool *)(param_1 + 0xad) = cVar1 == '\0';
  return cVar1 != '\0';
}

