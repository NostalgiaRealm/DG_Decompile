/*
 * FUN_1001b88b at 1001b88b
 * undefined2 __stdcall FUN_1001b88b(int param_1, byte param_2, char param_3, byte param_4)
 * Address ranges: 1001b88b-1001b8d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_1001b88b(int param_1,byte param_2,char param_3,byte param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1005398c;
  if (param_3 == '\0') {
    puVar1 = &DAT_10053968;
  }
  return *(undefined2 *)
          (puVar1 + (-(uint)(*(char *)(param_1 + 0x7d) != '\0') & 4 |
                     -(uint)(*(char *)(param_1 + 0x48) != '\0') & 2 | (uint)param_2 << 3 |
                    (uint)param_4 << 4));
}

