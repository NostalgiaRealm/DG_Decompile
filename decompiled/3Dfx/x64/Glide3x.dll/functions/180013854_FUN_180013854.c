/*
 * FUN_180013854 at 180013854
 * int __fastcall FUN_180013854(undefined8 * param_1)
 * Address ranges: 180013854-180013880
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180013854(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)*param_1 == -0x7fffffff) {
    cVar1 = (**(code **)(*DAT_18006da60 + 0x10))
                      (DAT_18006da60,*(undefined8 *)((int *)*param_1 + 10));
    iVar2 = -(uint)(cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

