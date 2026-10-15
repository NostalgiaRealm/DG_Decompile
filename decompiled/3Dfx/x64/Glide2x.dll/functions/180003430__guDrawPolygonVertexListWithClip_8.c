/*
 * _guDrawPolygonVertexListWithClip@8 at 180003430
 * undefined __fastcall _guDrawPolygonVertexListWithClip@8(int param_1)
 * Address ranges: 180003430-180003476
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guDrawPolygonVertexListWithClip_8(int param_1)

{
  undefined *puVar1;
  
                    /* 0x3430  109  _guDrawPolygonVertexListWithClip@8
                       0x3430  266  guDrawPolygonVertexListWithClip */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (2 < param_1) {
      if (0x400 < param_1) {
        param_1 = 0x400;
      }
      (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x218))(*(longlong **)(puVar1 + 0x18),param_1);
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

