/*
 * _grDrawVertexArrayContiguous@16 at 1800011e8
 * undefined __fastcall _grDrawVertexArrayContiguous@16(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 1800011e8-18000124a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawVertexArrayContiguous_16
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x11e8  32  _grDrawVertexArrayContiguous@16
                       0x11e8  132  grDrawVertexArrayContiguous */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    FUN_180009054(*(longlong *)(puVar2 + 0x18));
    plVar1 = *(longlong **)(puVar2 + 0x18);
    (**(code **)(*plVar1 + 0x230))
              (plVar1,*(undefined4 *)((longlong)plVar1 + 0x2a4),param_1,param_2,param_3,param_4);
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

