/*
 * FUN_100939db at 100939db
 * int __stdcall FUN_100939db(int param_1)
 * Address ranges: 100939db-100939f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100939db(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + -0x17) != '\0') {
    iVar1 = (*(char *)(param_1 + -0x16) != '\0') + 0x88760868;
  }
  return iVar1;
}

