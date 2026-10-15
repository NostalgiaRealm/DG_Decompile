/*
 * FUN_1800b8f3c at 1800b8f3c
 * undefined8 __fastcall FUN_1800b8f3c(longlong param_1, int param_2)
 * Address ranges: 1800b8f3c-1800b8ff9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b8f3c(longlong param_1,int param_2)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x8876086c;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar1 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar1 = true;
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar2 == 0) {
      FUN_1800044dc(0);
    }
  }
  if (param_2 == 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + -0x5990);
    (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar3 * 0x4b] + 0xb0))
              ((longlong *)(&DAT_1801128e0)[uVar3 * 0x4b],(&DAT_180112900)[uVar3 * 0x96],
               *(undefined4 *)(&DAT_180112a70 + uVar3 * 0x4b),
               *(undefined4 *)((longlong)&DAT_180112a70 + uVar3 * 600 + 4),1);
    uVar4 = 0;
  }
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar4;
}

