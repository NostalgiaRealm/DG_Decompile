/*
 * _grDrawTriangle@12 at 1800010d0
 * undefined __fastcall _grDrawTriangle@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800010d0-180001110
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawTriangle_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
                    /* 0x10d0  39  _grDrawTriangle@12
                       0x10d0  196  grDrawTriangle */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x208))
              (*(longlong **)(puVar1 + 0x18),param_1,param_2,param_3,0);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

