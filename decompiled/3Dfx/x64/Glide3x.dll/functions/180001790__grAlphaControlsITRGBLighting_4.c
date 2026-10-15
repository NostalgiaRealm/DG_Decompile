/*
 * _grAlphaControlsITRGBLighting@4 at 180001790
 * undefined __fastcall _grAlphaControlsITRGBLighting@4(int param_1)
 * Address ranges: 180001790-1800017de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaControlsITRGBLighting_4(int param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1790  4  _grAlphaControlsITRGBLighting@4
                       0x1790  104  grAlphaControlsITRGBLighting */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(int *)((longlong)plVar1 + 0x116)) {
      (**(code **)(*plVar1 + 0x168))(plVar1,param_1);
      *(int *)(*(longlong *)(puVar2 + 0x18) + 0x116) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

