/*
 * grDrawPlanarPolygon at 100012ec
 * undefined __stdcall grDrawPlanarPolygon(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100012ec-1000132d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDrawPlanarPolygon,12
 */

/* __stdcall grDrawPlanarPolygon,12 */

void grDrawPlanarPolygon(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
                    /* 0x12ec  32  _grDrawPlanarPolygon@12
                       0x12ec  35  _grDrawPolygon@12 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (2 < param_1) {
      iVar3 = 0x400;
      if (param_1 < 0x401) {
        iVar3 = param_1;
      }
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x108))(iVar3,param_2,param_3);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

