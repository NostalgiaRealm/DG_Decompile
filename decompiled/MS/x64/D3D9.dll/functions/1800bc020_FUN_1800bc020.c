/*
 * FUN_1800bc020 at 1800bc020
 * int __fastcall FUN_1800bc020(longlong param_1, uint param_2, uint param_3, int param_4, uint param_5, uint param_6, int param_7, undefined8 * param_8, longlong param_9)
 * Address ranges: 1800bc020-1800bc12c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bc020(longlong param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
                 int param_7,undefined8 *param_8,longlong param_9)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  
  iVar3 = -0x7789f794;
  if ((param_8 != (undefined8 *)0x0) && (*param_8 = 0, param_9 == 0)) {
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
    iVar3 = FUN_1800b951c(param_1 + -0x6838,param_2,param_3,param_4,param_5,param_6,0,1,param_7 != 0
                          ,param_8);
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return iVar3;
}

