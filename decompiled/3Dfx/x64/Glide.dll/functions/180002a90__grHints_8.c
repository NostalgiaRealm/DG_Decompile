/*
 * _grHints@8 at 180002a90
 * undefined __fastcall _grHints@8(uint param_1, uint param_2)
 * Address ranges: 180002a90-180002afe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grHints_8(uint param_1,uint param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  ulonglong uVar3;
  
                    /* 0x2a90  51  _grHints@8
                       0x2a90  212  grHints */
  uVar3 = (ulonglong)param_1;
  puVar2 = FUN_180015384();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    if ((uint)uVar3 < 7) {
      plVar1 = *(longlong **)(puVar2 + 0x18);
      if (param_2 != *(byte *)((longlong)plVar1 + uVar3 + 0x14a)) {
        (**(code **)(*plVar1 + 0x1f0))(plVar1,uVar3 & 0xffffffff,param_2);
        *(char *)(*(longlong *)(puVar2 + 0x18) + 0x14a + (uVar3 & 0xffffffff)) = (char)param_2;
      }
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

