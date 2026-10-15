/*
 * grAADrawPolygon at 10001402
 * undefined __stdcall grAADrawPolygon(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10001402-10001443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAADrawPolygon,12
 */

/* __stdcall grAADrawPolygon,12 */

void grAADrawPolygon(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
                    /* 0x1402  5  _grAADrawPolygon@12 */
  puVar2 = FUN_10012ab2();
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
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x120))(iVar3,param_2,param_3);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

