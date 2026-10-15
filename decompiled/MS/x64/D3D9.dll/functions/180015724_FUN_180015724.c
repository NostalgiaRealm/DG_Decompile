/*
 * FUN_180015724 at 180015724
 * uint __fastcall FUN_180015724(longlong param_1, uint * param_2, RECT * param_3, uint param_4, char param_5)
 * Address ranges: 180015724-1800157d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180015724(longlong param_1,uint *param_2,RECT *param_3,uint param_4,char param_5)

{
  bool bVar1;
  BOOL BVar2;
  uint uVar3;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xe78) & 4) == 0) &&
     (DAT_1801123a8[1].LockCount == 0)) {
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
  uVar3 = FUN_18001522c(param_1,param_2,param_3,param_4,'\x01',param_5);
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar3;
}

