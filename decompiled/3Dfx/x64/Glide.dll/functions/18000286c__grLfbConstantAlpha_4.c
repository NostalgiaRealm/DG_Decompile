/*
 * _grLfbConstantAlpha@4 at 18000286c
 * undefined __fastcall _grLfbConstantAlpha@4(char param_1)
 * Address ranges: 18000286c-1800028be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantAlpha_4(char param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x286c  54  _grLfbConstantAlpha@4
                       0x286c  215  grLfbConstantAlpha */
  puVar2 = FUN_180015384();
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

