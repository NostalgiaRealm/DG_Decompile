/*
 * _grDrawPoint@4 at 180001060
 * undefined __fastcall _grDrawPoint@4(undefined8 param_1)
 * Address ranges: 180001060-1800010ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPoint_4(undefined8 param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1060  29  _grDrawPoint@4
                       0x1060  129  grDrawPoint */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    FUN_180009054(*(longlong *)(puVar2 + 0x18));
    plVar1 = *(longlong **)(puVar2 + 0x18);
    (**(code **)(*plVar1 + 0x210))(plVar1,*(undefined4 *)((longlong)plVar1 + 0x2a4),param_1);
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

