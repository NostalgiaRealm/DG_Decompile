/*
 * FUN_1800b8e64 at 1800b8e64
 * undefined8 __fastcall FUN_1800b8e64(longlong param_1, int param_2)
 * Address ranges: 1800b8e64-1800b8f3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b8e64(longlong param_1,int param_2)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x8876086c;
  if (param_2 + 7U < 0xf) {
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
    iVar3 = (**(code **)(*(longlong *)
                          (&DAT_1801128e0)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] + 0x130))
                      ();
    if (iVar3 == 2) {
      uVar4 = 0x88760870;
    }
    else {
      (**(code **)(*(longlong *)(&DAT_1801128e0)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] +
                  0x140))((longlong *)
                          (&DAT_1801128e0)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b],param_2);
      uVar4 = 0;
    }
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar4;
}

