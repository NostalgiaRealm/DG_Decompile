/*
 * _grAlphaControlsITRGBLighting@4 at 1800019c4
 * undefined __fastcall _grAlphaControlsITRGBLighting@4(int param_1)
 * Address ranges: 1800019c4-180001a12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaControlsITRGBLighting_4(int param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x19c4  12  _grAlphaControlsITRGBLighting@4
                       0x19c4  169  grAlphaControlsITRGBLighting */
  puVar2 = FUN_180015044();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(int *)((longlong)plVar1 + 0x116)) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_1);
      *(int *)(*(longlong *)(puVar2 + 0x18) + 0x116) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

