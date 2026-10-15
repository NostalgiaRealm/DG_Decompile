/*
 * FUN_1001b91d at 1001b91d
 * int __stdcall FUN_1001b91d(int * param_1)
 * Address ranges: 1001b91d-1001b949
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001b91d(int *param_1)

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

