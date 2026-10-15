/*
 * FUN_1800b8ffc at 1800b8ffc
 * undefined8 __fastcall FUN_1800b8ffc(longlong param_1)
 * Address ranges: 1800b8ffc-1800b90cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b8ffc(longlong param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
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
  iVar3 = (**(code **)(*(longlong *)(&DAT_1801128e0)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b]
                      + 0x130))();
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      uVar4 = 0x88760870;
      goto LAB_1800b9091;
    }
    if (iVar3 == 3) {
      uVar4 = 0x88760868;
      goto LAB_1800b9091;
    }
    if (iVar3 != 4) goto LAB_1800b9091;
  }
  uVar4 = 0x88760874;
LAB_1800b9091:
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar4;
}

