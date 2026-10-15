/*
 * FUN_1800084c0 at 1800084c0
 * undefined __fastcall FUN_1800084c0(longlong param_1, ulonglong param_2, uint param_3, longlong param_4)
 * Address ranges: 1800084c0-1800085a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800084c0(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  BOOL BVar2;
  
  bVar1 = true;
  if (((param_3 < 2) && (param_4 != 0)) && (*(char *)(param_1 + 0x681c) == '\0')) {
    if (((*(byte *)(param_1 + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      bVar1 = false;
    }
    else {
      BVar2 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar2 == 0) {
        FUN_1800044dc(0);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xe98) + 0xa0))
              (*(longlong **)(param_1 + 0xe98),
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0xe30) + (param_2 & 0xffffffff) * 8) + 0xec),
               param_4,param_4 + 0x200,param_4 + 0x400,0x477fff00);
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return;
}

