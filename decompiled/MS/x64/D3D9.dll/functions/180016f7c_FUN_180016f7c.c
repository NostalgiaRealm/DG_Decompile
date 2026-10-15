/*
 * FUN_180016f7c at 180016f7c
 * ulonglong __fastcall FUN_180016f7c(longlong param_1, longlong * param_2, undefined8 * param_3, uint * param_4)
 * Address ranges: 180016f7c-18001702c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180016f7c(longlong param_1,longlong *param_2,undefined8 *param_3,uint *param_4)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(*(longlong *)(param_1 + 0x18) + -0x59c0);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    pbVar4 = &DAT_00000e78;
  }
  if (((*pbVar4 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  uVar3 = FUN_180013f50((longlong *)(param_1 + 8),param_2,param_3,param_4);
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar3 & 0xffffffff;
}

