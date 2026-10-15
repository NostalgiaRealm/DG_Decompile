/*
 * grLfbLock at 10001f69
 * bool __stdcall grLfbLock(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined4 param_6)
 * Address ranges: 10001f69-10001fb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbLock,24
 */

/* __stdcall grLfbLock,24 */

bool grLfbLock(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              int param_5,undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  
                    /* 0x1f69  52  _grLfbLock@24 */
  puVar3 = FUN_10012760();
  bVar4 = false;
  if (puVar3[0x3c] != '\0') {
    piVar1 = (int *)(puVar3 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    cVar2 = (**(code **)(**(int **)(puVar3 + 0xc) + 0x74))
                      (param_1,param_2,param_3,param_4,param_5 != 0,param_6,0);
    bVar4 = cVar2 != '\0';
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return bVar4;
}

