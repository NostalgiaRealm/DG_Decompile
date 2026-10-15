/*
 * FUN_1800bdc58 at 1800bdc58
 * undefined8 __fastcall FUN_1800bdc58(longlong param_1, ulonglong param_2, longlong * param_3)
 * Address ranges: 1800bdc58-1800bdd33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bdc58(longlong param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  BOOL BVar4;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar3 = false;
  }
  else {
    bVar3 = true;
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar4 == 0) {
      FUN_1800044dc(0);
    }
  }
  *param_3 = 0;
  lVar2 = *(longlong *)(param_1 + -0x5500 + (param_2 & 0xffffffff) * 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x20);
    if (iVar1 == 3) {
      *param_3 = lVar2 + 0x98;
      FUN_1800af620(lVar2 + 0x98);
    }
    else if (iVar1 == 4) {
      *param_3 = lVar2 + 0x118;
      FUN_1800c3de4(lVar2 + 0x118);
    }
    else if (iVar1 == 5) {
      *param_3 = lVar2 + 0x98;
      FUN_1800af620(lVar2 + 0x98);
    }
  }
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return 0;
}

