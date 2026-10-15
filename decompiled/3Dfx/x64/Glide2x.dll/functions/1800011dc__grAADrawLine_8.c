/*
 * _grAADrawLine@8 at 1800011dc
 * undefined __fastcall _grAADrawLine@8(undefined8 param_1, undefined8 param_2)
 * Address ranges: 1800011dc-180001214
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawLine_8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
                    /* 0x11dc  5  _grAADrawLine@8
                       0x11dc  162  grAADrawLine */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x228))
              (*(longlong **)(puVar1 + 0x18),param_1,param_2);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

