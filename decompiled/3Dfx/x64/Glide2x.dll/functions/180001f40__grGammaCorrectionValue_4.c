/*
 * _grGammaCorrectionValue@4 at 180001f40
 * undefined __fastcall _grGammaCorrectionValue@4(float param_1)
 * Address ranges: 180001f40-180001f8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGammaCorrectionValue_4(float param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1f40  44  _grGammaCorrectionValue@4
                       0x1f40  201  grGammaCorrectionValue */
  puVar2 = FUN_180015044();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    FUN_18001e25c((undefined4 *)(*(longlong *)(puVar2 + 0x18) + 0x1170),param_1,param_1,param_1);
    plVar1 = *(longlong **)(puVar2 + 0x18);
    (**(code **)(*plVar1 + 0x60))(plVar1,plVar1 + 0x22e);
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

