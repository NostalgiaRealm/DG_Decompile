/*
 * grSstPerfStats at 100016d1
 * undefined __stdcall grSstPerfStats(uint * param_1)
 * Address ranges: 100016d1-1000173c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstPerfStats,4
 */

/* __stdcall grSstPerfStats,4 */

void grSstPerfStats(uint *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 local_34 [12];
  uint local_28;
  uint local_24;
  uint local_1c;
  uint local_14;
  uint local_10;
  
                    /* 0x16d1  68  _grSstPerfStats@4 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0xec))(local_34);
    param_1[3] = local_28 & 0xffffff;
    param_1[1] = local_24 & 0xffffff;
    *param_1 = local_14 & 0xffffff;
    param_1[4] = local_10 & 0xffffff;
    param_1[2] = local_1c & 0xffffff;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

