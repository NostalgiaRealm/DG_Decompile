/*
 * _grViewport@16 at 180002204
 * undefined __fastcall _grViewport@16(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180002204-180002244
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grViewport_16(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  ulonglong uVar2;
  
                    /* 0x2204  93  _grViewport@16
                       0x2204  193  grViewport */
  uVar2 = (ulonglong)param_1;
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x260))
              (*(longlong **)(puVar1 + 0x18),uVar2 & 0xffffffff,param_2,param_3,param_4);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

