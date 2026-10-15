/*
 * _grDrawTriangle@12 at 180001110
 * undefined __fastcall _grDrawTriangle@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180001110-180001168
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawTriangle_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1110  30  _grDrawTriangle@12
                       0x1110  130  grDrawTriangle */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    FUN_180009054(*(longlong *)(puVar2 + 0x18));
    plVar1 = *(longlong **)(puVar2 + 0x18);
    (**(code **)(*plVar1 + 0x220))
              (plVar1,*(undefined4 *)((longlong)plVar1 + 0x2a4),param_1,param_2,param_3);
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

