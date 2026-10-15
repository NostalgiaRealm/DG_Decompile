/*
 * FUN_1800bd64c at 1800bd64c
 * undefined8 __fastcall FUN_1800bd64c(longlong param_1, undefined4 * param_2)
 * Address ranges: 1800bd64c-1800bd71c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bd64c(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  BOOL BVar2;
  undefined8 uVar3;
  uint local_res8 [8];
  
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
  if (param_2 != (undefined4 *)0x0) {
    FUN_1800fa780(local_res8);
    *param_2 = *(undefined4 *)(param_1 + -0x67e0);
    uVar3 = 0;
    param_2[1] = *(undefined4 *)(param_1 + -0x67dc);
    param_2[2] = *(undefined4 *)(param_1 + -0x67d8);
    param_2[3] = *(undefined4 *)(param_1 + -0x67d4);
    param_2[4] = *(undefined4 *)(param_1 + -0x67d0);
    param_2[5] = *(undefined4 *)(param_1 + -0x67cc);
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

