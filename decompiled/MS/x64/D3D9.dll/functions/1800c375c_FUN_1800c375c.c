/*
 * FUN_1800c375c at 1800c375c
 * ulonglong __fastcall FUN_1800c375c(longlong param_1, uint * param_2, int * param_3, uint param_4)
 * Address ranges: 1800c375c-1800c3803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800c375c(longlong param_1,uint *param_2,int *param_3,uint param_4)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  if (((*(byte *)(*(longlong *)(param_1 + -0x40) + 0xe78) & 4) == 0) &&
     (DAT_1801123a8[1].LockCount == 0)) {
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
  uVar3 = FUN_1800186f0(param_1 + -0xc0,param_2,param_3,param_4);
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar3 & 0xffffffff;
}

