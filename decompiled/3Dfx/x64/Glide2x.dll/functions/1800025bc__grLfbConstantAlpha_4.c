/*
 * _grLfbConstantAlpha@4 at 1800025bc
 * undefined __fastcall _grLfbConstantAlpha@4(char param_1)
 * Address ranges: 1800025bc-18000260e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantAlpha_4(char param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x25bc  52  _grLfbConstantAlpha@4
                       0x25bc  209  grLfbConstantAlpha */
  puVar2 = FUN_180015044();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(char *)((longlong)plVar1 + 0x13e)) {
      (**(code **)(*plVar1 + 0xd0))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x13e) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

