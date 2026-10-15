/*
 * FUN_1800b3c7c at 1800b3c7c
 * uint __fastcall FUN_1800b3c7c(longlong param_1)
 * Address ranges: 1800b3c7c-1800b3d5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800b3c7c(longlong param_1)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  uint uVar4;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar1 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar1 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar4 = 0x8876086c;
  if (*(char *)(param_1 + -0x5b27) == '\0') {
    if (*(longlong **)(param_1 + -0x6808) != (longlong *)0x0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x20))();
      uVar4 = ~-(uint)(cVar2 != '\0') & 0x88760868;
      if (cVar2 == '\0') goto LAB_1800b3d32;
    }
    if (*(longlong **)(param_1 + -0x67e8) != (longlong *)0x0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + -0x67e8) + 0x20))();
      uVar4 = ~-(uint)(cVar2 != '\0') & 0x88760868;
      if (cVar2 == '\0') goto LAB_1800b3d32;
    }
    *(undefined1 *)(param_1 + -0x5b27) = 1;
    uVar4 = 0;
  }
LAB_1800b3d32:
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar4;
}

