/*
 * FUN_1800c1164 at 1800c1164
 * undefined __fastcall FUN_1800c1164(undefined8 * param_1)
 * Address ranges: 1800c1164-1800c1253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c1164(undefined8 *param_1)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  
  if (((*(byte *)(param_1[0x17] + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  if ((param_1[0x1a] == 0) && (param_1[0x19] == 0)) {
    lVar1 = param_1[0x17];
    FUN_1800b04f8(lVar1,(longlong)param_1);
    FUN_180007d00(lVar1,(longlong)param_1);
  }
  else {
    FUN_1800b04f8(param_1[0x17],(longlong)param_1);
  }
  FUN_180014d3c((longlong)param_1);
  FUN_1800c0fbc(param_1);
  FUN_1800fbcf0(param_1);
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

