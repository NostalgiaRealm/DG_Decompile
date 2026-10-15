/*
 * FUN_1800b942c at 1800b942c
 * int __fastcall FUN_1800b942c(longlong param_1, longlong param_2)
 * Address ranges: 1800b942c-1800b950e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b942c(longlong param_1,longlong param_2)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 0;
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
      iVar5 = -0x7789f790;
      goto LAB_1800b94b9;
    }
    if (iVar3 != 4) goto LAB_1800b94b9;
  }
  iVar5 = -0x7789f78c;
LAB_1800b94b9:
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  if (-1 < iVar5) {
    uVar4 = FUN_180008af0((longlong *)(param_1 + -0x6838),param_2,'\0');
    iVar5 = (int)uVar4;
    if (iVar5 < 0) {
      iVar5 = -0x7789f798;
    }
  }
  return iVar5;
}

