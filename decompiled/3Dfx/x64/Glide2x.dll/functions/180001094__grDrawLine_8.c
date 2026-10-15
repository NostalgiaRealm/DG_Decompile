/*
 * _grDrawLine@8 at 180001094
 * undefined __fastcall _grDrawLine@8(undefined8 param_1, undefined8 param_2)
 * Address ranges: 180001094-1800010cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawLine_8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
                    /* 0x1094  33  _grDrawLine@8
                       0x1094  190  grDrawLine */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x200))
              (*(longlong **)(puVar1 + 0x18),param_1,param_2);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

