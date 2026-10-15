/*
 * FUN_1800203b0 at 1800203b0
 * int __fastcall FUN_1800203b0(undefined8 * param_1)
 * Address ranges: 1800203b0-1800203dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800203b0(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)*param_1 == -0x7fffffff) {
    cVar1 = (**(code **)(*DAT_18006c888 + 0x10))
                      (DAT_18006c888,*(undefined8 *)((int *)*param_1 + 10));
    iVar2 = -(uint)(cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

