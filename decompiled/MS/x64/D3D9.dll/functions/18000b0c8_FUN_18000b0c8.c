/*
 * FUN_18000b0c8 at 18000b0c8
 * undefined __fastcall FUN_18000b0c8(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 18000b0c8-18000b19d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b0c8(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    if (((*(byte *)(param_1 + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      BVar3 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar3 == 0) {
        FUN_1800044dc(0);
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe30) + (param_2 & 0xffffffff) * 8);
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = *(undefined4 *)(lVar1 + 0xec);
    }
    (**(code **)(**(longlong **)(param_1 + 0xe98) + 0x98))
              (*(longlong **)(param_1 + 0xe98),uVar4,param_3,param_3 + 0x200,param_3 + 0x400,
               0x437f0000);
    if (bVar2) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return;
}

