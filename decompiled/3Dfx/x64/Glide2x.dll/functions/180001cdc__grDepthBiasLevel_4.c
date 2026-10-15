/*
 * _grDepthBiasLevel@4 at 180001cdc
 * undefined __fastcall _grDepthBiasLevel@4(short param_1)
 * Address ranges: 180001cdc-180001d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthBiasLevel_4(short param_1)

{
  undefined *puVar1;
  int iVar2;
  
                    /* 0x1cdc  27  _grDepthBiasLevel@4
                       0x1cdc  184  grDepthBiasLevel */
  iVar2 = (int)param_1;
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (iVar2 != *(int *)((longlong)*(longlong **)(puVar1 + 0x18) + 0x133)) {
      (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x110))();
      *(int *)(*(longlong *)(puVar1 + 0x18) + 0x133) = iVar2;
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

