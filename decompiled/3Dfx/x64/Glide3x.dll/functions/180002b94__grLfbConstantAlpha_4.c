/*
 * _grLfbConstantAlpha@4 at 180002b94
 * undefined __fastcall _grLfbConstantAlpha@4(char param_1)
 * Address ranges: 180002b94-180002be6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantAlpha_4(char param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x2b94  50  _grLfbConstantAlpha@4
                       0x2b94  150  grLfbConstantAlpha */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(char *)((longlong)plVar1 + 0x13e)) {
      (**(code **)(*plVar1 + 0xf0))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x13e) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

