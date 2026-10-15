/*
 * _grSstPerfStats@4 at 18000182c
 * undefined __fastcall _grSstPerfStats@4(uint * param_1)
 * Address ranges: 18000182c-1800018aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstPerfStats_4(uint *param_1)

{
  undefined *puVar1;
  undefined1 local_38 [12];
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_18;
  uint local_14;
  
                    /* 0x182c  76  _grSstPerfStats@4
                       0x182c  237  grSstPerfStats */
  puVar1 = FUN_180015384();
  if (puVar1[100] == '\0') {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x1d8))(*(longlong **)(puVar1 + 0x18),local_38);
    param_1[1] = local_28 & 0xffffff;
    param_1[3] = local_2c & 0xffffff;
    *param_1 = local_18 & 0xffffff;
    param_1[4] = local_14 & 0xffffff;
    param_1[2] = local_20 & 0xffffff;
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

