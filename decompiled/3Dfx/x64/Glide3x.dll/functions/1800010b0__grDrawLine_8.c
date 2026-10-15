/*
 * _grDrawLine@8 at 1800010b0
 * undefined __fastcall _grDrawLine@8(undefined8 param_1, undefined8 param_2)
 * Address ranges: 1800010b0-18000110d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawLine_8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x10b0  28  _grDrawLine@8
                       0x10b0  128  grDrawLine */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    FUN_180009054(*(longlong *)(puVar2 + 0x18));
    plVar1 = *(longlong **)(puVar2 + 0x18);
    (**(code **)(*plVar1 + 0x218))(plVar1,*(undefined4 *)((longlong)plVar1 + 0x2a4),param_1,param_2)
    ;
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

