/*
 * _grTexNCCTable@4 at 180002318
 * undefined __fastcall _grTexNCCTable@4(undefined4 param_1)
 * Address ranges: 180002318-18000238b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexNCCTable_4(undefined4 param_1)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0x2318  87  _grTexNCCTable@4
                       0x2318  187  grTexNCCTable */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    iVar3 = 0;
    if (0 < *(int *)(*(longlong *)(puVar1 + 0x30) + 0x833)) {
      do {
        (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x2c0))
                  (*(longlong **)(puVar1 + 0x18),iVar3,param_1);
        lVar2 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        *(char *)(lVar2 + 0x147 + *(longlong *)(puVar1 + 0x18)) = (char)param_1;
      } while (iVar3 < *(int *)(*(longlong *)(puVar1 + 0x30) + 0x833));
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

