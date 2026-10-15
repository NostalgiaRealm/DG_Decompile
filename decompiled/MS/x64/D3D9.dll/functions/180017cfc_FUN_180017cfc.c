/*
 * FUN_180017cfc at 180017cfc
 * uint __fastcall FUN_180017cfc(longlong param_1, int param_2, uint param_3, uint * param_4, RECT * param_5, uint param_6)
 * Address ranges: 180017cfc-180017df3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180017cfc(longlong param_1,int param_2,uint param_3,uint *param_4,RECT *param_5,
                  uint param_6)

{
  bool bVar1;
  BOOL BVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = 0x8876086c;
  if ((*(char *)(param_1 + 0x88) != '\0') && (param_3 < *(ushort *)(param_1 + 0x3c))) {
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
    uVar3 = FUN_18001522c(*(longlong *)
                           (*(longlong *)(param_1 + 0x40) +
                           (ulonglong)(param_2 * 0x10 + param_3) * 8),param_4,param_5,param_6,
                          *(int *)(param_1 + 0x7c) == 0,'\0');
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

