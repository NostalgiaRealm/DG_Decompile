/*
 * _grAADrawTriangle@24 at 180001218
 * undefined __fastcall _grAADrawTriangle@24(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 180001218-180001283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawTriangle_24
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  
                    /* 0x1218  9  _grAADrawTriangle@24
                       0x1218  170  grAADrawTriangle */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x230))
              (*(longlong **)(puVar1 + 0x18),param_1,param_2,param_3,param_4,param_5,param_6);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

