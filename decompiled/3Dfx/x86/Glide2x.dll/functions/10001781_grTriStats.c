/*
 * grTriStats at 10001781
 * undefined __stdcall grTriStats(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 10001781-100017cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTriStats,8
 */

/* __stdcall grTriStats,8 */

void grTriStats(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_c;
  
                    /* 0x1781  101  _grTriStats@8 */
  puVar2 = FUN_10012760();
  *param_1 = 0;
  *param_2 = 0;
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0xec))(local_34);
    *param_1 = local_c;
    *param_2 = local_2c;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

