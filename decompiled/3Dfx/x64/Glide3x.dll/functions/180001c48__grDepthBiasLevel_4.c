/*
 * _grDepthBiasLevel@4 at 180001c48
 * undefined __fastcall _grDepthBiasLevel@4(int param_1)
 * Address ranges: 180001c48-180001c96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthBiasLevel_4(int param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1c48  20  _grDepthBiasLevel@4
                       0x1c48  120  grDepthBiasLevel */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(int *)((longlong)plVar1 + 0x133)) {
      (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
      *(int *)(*(longlong *)(puVar2 + 0x18) + 0x133) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

