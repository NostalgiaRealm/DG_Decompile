/*
 * FUN_1800140f0 at 1800140f0
 * undefined __fastcall FUN_1800140f0(undefined8 * param_1)
 * Address ranges: 1800140f0-1800141f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800140f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  BOOL BVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1[8] + -0x59c0);
  if (param_1[8] == 0) {
    pbVar4 = &DAT_00000e78;
  }
  if (((*pbVar4 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  FUN_180007e90(-(ulonglong)(param_1[8] != 0) & param_1[8] - 0x6838,(longlong)param_1);
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0xc] = 0;
  if (param_1[1] != 0) {
    FUN_1800fbdd4(*(LPVOID *)(param_1[1] + -8));
  }
  param_1[1] = 0;
  *param_1 = &PTR_LAB_180101660;
  FUN_180014804(param_1 + 6);
  FUN_1800fbcf0(param_1);
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

