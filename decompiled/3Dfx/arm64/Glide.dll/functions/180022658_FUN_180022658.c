/*
 * FUN_180022658 at 180022658
 * int __cdecl FUN_180022658(undefined8 * param_1)
 * Address ranges: 180022658-1800226a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180022658(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)*param_1 == -0x7fffffff) {
    cVar1 = (**(code **)(*DAT_18006c8d0 + 0x10))
                      (DAT_18006c8d0,*(undefined8 *)((int *)*param_1 + 10));
    iVar2 = -(uint)(cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

