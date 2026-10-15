/*
 * FUN_1800bd720 at 1800bd720
 * undefined8 __fastcall FUN_1800bd720(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800bd720-1800bd7f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bd720(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  BOOL BVar3;
  undefined8 uVar4;
  uint local_res8 [8];
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  uVar4 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    FUN_1800fa780(local_res8);
    uVar1 = *(undefined8 *)(param_1 + -0x655c);
    uVar4 = 0;
    *param_2 = *(undefined8 *)(param_1 + -0x6564);
    param_2[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + -0x654c);
    param_2[2] = *(undefined8 *)(param_1 + -0x6554);
    param_2[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + -0x653c);
    param_2[4] = *(undefined8 *)(param_1 + -0x6544);
    param_2[5] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + -0x652c);
    param_2[6] = *(undefined8 *)(param_1 + -0x6534);
    param_2[7] = uVar1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + -0x6524);
    FUN_1800fa7bc();
  }
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar4;
}

