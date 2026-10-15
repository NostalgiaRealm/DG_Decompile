/*
 * FUN_1800b1f90 at 1800b1f90
 * undefined4 __fastcall FUN_1800b1f90(longlong param_1, longlong param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1800b1f90-1800b205d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800b1f90(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar3 = 0x88760868;
  if (*(char *)(param_1 + 0x6819) == '\0') {
    if (((*(byte *)(param_1 + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1c0))
                      (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x30),
                       *(undefined4 *)(param_2 + 0x20),param_3,param_4,param_5);
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

