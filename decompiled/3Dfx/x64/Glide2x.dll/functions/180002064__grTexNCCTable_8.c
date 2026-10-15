/*
 * _grTexNCCTable@8 at 180002064
 * undefined __fastcall _grTexNCCTable@8(int param_1, undefined4 param_2)
 * Address ranges: 180002064-1800020c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexNCCTable_8(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
                    /* 0x2064  100  _grTexNCCTable@8
                       0x2064  257  grTexNCCTable */
  uVar2 = param_2;
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(longlong *)(puVar1 + 0x30) + 0x833)) {
      (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x280))
                (*(longlong **)(puVar1 + 0x18),param_1,uVar2);
      *(char *)(*(longlong *)(puVar1 + 0x18) + 0x147 + (longlong)param_1) = (char)param_2;
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

