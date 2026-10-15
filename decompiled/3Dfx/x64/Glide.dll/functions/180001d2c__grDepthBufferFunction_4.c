/*
 * _grDepthBufferFunction@4 at 180001d2c
 * undefined __fastcall _grDepthBufferFunction@4(uint param_1)
 * Address ranges: 180001d2c-180001d7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthBufferFunction_4(uint param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1d2c  28  _grDepthBufferFunction@4
                       0x1d2c  189  grDepthBufferFunction */
  puVar2 = FUN_180015384();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(byte *)(plVar1 + 0x27)) {
      (**(code **)(*plVar1 + 0x118))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x138) = (char)param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

