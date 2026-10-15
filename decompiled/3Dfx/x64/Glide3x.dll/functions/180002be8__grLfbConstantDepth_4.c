/*
 * _grLfbConstantDepth@4 at 180002be8
 * undefined __fastcall _grLfbConstantDepth@4(short param_1)
 * Address ranges: 180002be8-180002c39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantDepth_4(short param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x2be8  51  _grLfbConstantDepth@4
                       0x2be8  151  grLfbConstantDepth */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(short *)((longlong)plVar1 + 0x13f)) {
      (**(code **)(*plVar1 + 0xf8))(plVar1,param_1);
      *(short *)(*(longlong *)(puVar2 + 0x18) + 0x13f) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

