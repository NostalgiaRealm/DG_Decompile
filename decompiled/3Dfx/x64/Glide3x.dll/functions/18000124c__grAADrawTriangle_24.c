/*
 * _grAADrawTriangle@24 at 18000124c
 * undefined __fastcall _grAADrawTriangle@24(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 18000124c-1800012c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawTriangle_24
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x124c  1  _grAADrawTriangle@24
                       0x124c  101  grAADrawTriangle */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    FUN_180009054(*(longlong *)(puVar2 + 0x18));
    plVar1 = *(longlong **)(puVar2 + 0x18);
    (**(code **)(*plVar1 + 0x238))
              (plVar1,*(undefined4 *)((longlong)plVar1 + 0x2a4),param_1,param_2,param_3,param_4,
               param_5,param_6);
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

