/*
 * _grTexMultibase@8 at 180002410
 * undefined __fastcall _grTexMultibase@8(int param_1, int param_2)
 * Address ranges: 180002410-18000246f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMultibase_8(int param_1,int param_2)

{
  undefined *puVar1;
  longlong lVar2;
  
                    /* 0x2410  98  _grTexMultibase@8
                       0x2410  255  grTexMultibase */
  lVar2 = (longlong)param_1;
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if ((int)lVar2 < *(int *)(*(longlong *)(puVar1 + 0x30) + 0x833)) {
      if ((bool)*(char *)(lVar2 * 0x41 + 0x1a1 + *(longlong *)(puVar1 + 0x18)) != (param_2 != 0)) {
        *(bool *)(lVar2 * 0x41 + 0x1a1 + *(longlong *)(puVar1 + 0x18)) = param_2 != 0;
        FUN_180017984((longlong)puVar1,(int)lVar2,'\x01');
      }
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

