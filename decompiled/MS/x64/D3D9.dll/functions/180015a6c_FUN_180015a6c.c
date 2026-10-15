/*
 * FUN_180015a6c at 180015a6c
 * undefined __fastcall FUN_180015a6c(longlong param_1)
 * Address ranges: 180015a6c-180015b29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015a6c(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  
  lVar1 = DAT_180111f20;
  *(undefined1 *)(param_1 + 0x121) = 0;
  if (*(char *)(lVar1 + 0x882) != '\0') {
    if (((*(byte *)(*(longlong *)(param_1 + 0x50) + 0xe78) & 4) == 0) &&
       (DAT_1801123a8[1].LockCount == 0)) {
      bVar2 = false;
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    }
    else {
      bVar2 = true;
      BVar3 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar3 == 0) {
        FUN_1800044dc(0);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x28))();
    if (*(char *)(lVar1 + 0xe83) != '\0') {
      *(undefined2 *)(lVar1 + 0x6819) = 1;
    }
    if (bVar2) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return;
}

