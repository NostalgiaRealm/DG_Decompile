/*
 * _grLfbConstantDepth@4 at 1800028c0
 * undefined __fastcall _grLfbConstantDepth@4(short param_1)
 * Address ranges: 1800028c0-180002912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantDepth_4(short param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x28c0  55  _grLfbConstantDepth@4
                       0x28c0  216  grLfbConstantDepth */
  puVar2 = FUN_180015384();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(short *)((longlong)plVar1 + 0x13f)) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,param_1);
      *(short *)(*(longlong *)(puVar2 + 0x18) + 0x13f) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

