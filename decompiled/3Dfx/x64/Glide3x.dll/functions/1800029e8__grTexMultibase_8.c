/*
 * _grTexMultibase@8 at 1800029e8
 * undefined __fastcall _grTexMultibase@8(int param_1, int param_2)
 * Address ranges: 1800029e8-180002a45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMultibase_8(int param_1,int param_2)

{
  undefined *puVar1;
  
                    /* 0x29e8  85  _grTexMultibase@8
                       0x29e8  185  grTexMultibase */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(longlong *)(puVar1 + 0x30) + 0x833)) {
      if ((bool)*(char *)((longlong)param_1 * 0x55 + 499 + *(longlong *)(puVar1 + 0x18)) !=
          (param_2 != 0)) {
        *(bool *)((longlong)param_1 * 0x55 + 499 + *(longlong *)(puVar1 + 0x18)) = param_2 != 0;
        FUN_180006824((longlong)puVar1,param_1,'\x01');
      }
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

