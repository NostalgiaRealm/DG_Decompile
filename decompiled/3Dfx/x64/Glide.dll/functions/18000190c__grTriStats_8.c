/*
 * _grTriStats@8 at 18000190c
 * undefined __fastcall _grTriStats@8(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 18000190c-18000196a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTriStats_8(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_10;
  
  puVar2 = param_2;
                    /* 0x190c  107  _grTriStats@8
                       0x190c  268  grTriStats */
  puVar1 = FUN_180015384();
  *param_1 = 0;
  *puVar2 = 0;
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x1d8))(*(longlong **)(puVar1 + 0x18),local_38);
    *param_1 = local_10;
    *param_2 = local_30;
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

