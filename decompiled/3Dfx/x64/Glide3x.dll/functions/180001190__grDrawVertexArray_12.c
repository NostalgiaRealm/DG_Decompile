/*
 * _grDrawVertexArray@12 at 180001190
 * undefined __fastcall _grDrawVertexArray@12(undefined4 param_1, undefined4 param_2, undefined8 param_3)
 * Address ranges: 180001190-1800011e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawVertexArray_12(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1190  31  _grDrawVertexArray@12
                       0x1190  131  grDrawVertexArray */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    FUN_180009054(*(longlong *)(puVar2 + 0x18));
    plVar1 = *(longlong **)(puVar2 + 0x18);
    (**(code **)(*plVar1 + 0x228))
              (plVar1,*(undefined4 *)((longlong)plVar1 + 0x2a4),param_1,param_2,param_3);
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

