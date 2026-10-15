/*
 * FUN_10010d81 at 10010d81
 * int __stdcall FUN_10010d81(int * param_1)
 * Address ranges: 10010d81-10010dad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10010d81(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)*param_1 == -0x7fffffff) {
    cVar1 = (**(code **)(*DAT_1005fa0c + 8))(((int *)*param_1)[6]);
    iVar2 = -(uint)(cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

