/*
 * FUN_180021808 at 180021808
 * int __cdecl FUN_180021808(undefined8 * param_1)
 * Address ranges: 180021808-180021853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180021808(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)*param_1 == -0x7fffffff) {
    cVar1 = (**(code **)(*DAT_18006b878 + 0x10))
                      (DAT_18006b878,*(undefined8 *)((int *)*param_1 + 10));
    iVar2 = -(uint)(cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

