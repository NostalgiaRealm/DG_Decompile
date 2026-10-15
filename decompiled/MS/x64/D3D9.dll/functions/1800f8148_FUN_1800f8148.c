/*
 * FUN_1800f8148 at 1800f8148
 * undefined __fastcall FUN_1800f8148(undefined8 * param_1)
 * Address ranges: 1800f8148-1800f818b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f8148(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0xd);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_1800f83f0((longlong)param_1,'\0');
      FUN_1800f7e0c((longlong)param_1);
      FUN_1800f8044(param_1);
      FUN_1800fbcf0(param_1);
    }
  }
  return;
}

