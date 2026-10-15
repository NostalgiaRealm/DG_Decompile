/*
 * FUN_1000fa9f at 1000fa9f
 * int __stdcall FUN_1000fa9f(int * param_1)
 * Address ranges: 1000fa9f-1000facb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000fa9f(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)*param_1 == -0x7fffffff) {
    cVar1 = (**(code **)(*DAT_1005b82c + 8))(((int *)*param_1)[6]);
    iVar2 = -(uint)(cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

