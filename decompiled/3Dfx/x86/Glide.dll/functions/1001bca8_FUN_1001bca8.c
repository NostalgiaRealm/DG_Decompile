/*
 * FUN_1001bca8 at 1001bca8
 * int __stdcall FUN_1001bca8(int * param_1)
 * Address ranges: 1001bca8-1001bcd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001bca8(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)*param_1 == -0x7fffffff) {
    cVar1 = (**(code **)(*DAT_10059758 + 8))(((int *)*param_1)[6]);
    iVar2 = -(uint)(cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

