/*
 * _grDrawPlanarPolygon@12 at 180001114
 * undefined __fastcall _grDrawPlanarPolygon@12(int param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180001114-18000115d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPlanarPolygon_12(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
                    /* 0x1114  34  _grDrawPlanarPolygon@12
                       0x1114  37  _grDrawPolygon@12
                       0x1114  191  grDrawPlanarPolygon
                       0x1114  194  grDrawPolygon */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (2 < param_1) {
      if (0x400 < param_1) {
        param_1 = 0x400;
      }
      (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x210))
                (*(longlong **)(puVar1 + 0x18),param_1,param_2,param_3);
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

