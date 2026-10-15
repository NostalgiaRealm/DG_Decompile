/*
 * FUN_1800b3d60 at 1800b3d60
 * undefined8 __fastcall FUN_1800b3d60(longlong param_1)
 * Address ranges: 1800b3d60-1800b3e1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b3d60(longlong param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar1 = false;
  }
  else {
    bVar1 = true;
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar2 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar3 = 0x8876086c;
  if (*(char *)(param_1 + -0x5b27) != '\0') {
    FUN_1800fa780(local_res8);
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x28))();
    *(undefined1 *)(param_1 + -0x5b27) = 0;
    uVar3 = 0;
    FUN_1800fa7bc();
  }
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar3;
}

