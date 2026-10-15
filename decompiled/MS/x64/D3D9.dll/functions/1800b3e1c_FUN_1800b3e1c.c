/*
 * FUN_1800b3e1c at 1800b3e1c
 * undefined4 __fastcall FUN_1800b3e1c(longlong param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1800b3e1c-1800b3ee8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b3e1c(longlong param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  BOOL BVar2;
  uint uVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x8876086c;
  }
  bVar1 = true;
  if (param_2 != 2 && param_2 != 3) {
    if ((7 < param_2 - 0x10) && (0xff < param_2 - 0x100)) {
      return 0x8876086c;
    }
    if (0x17 < param_2) {
      uVar3 = param_2 - 0xf6;
      goto LAB_1800b3e78;
    }
  }
  uVar3 = *(uint *)(&DAT_180100ef0 + (longlong)(int)param_2 * 4);
LAB_1800b3e78:
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar1 = false;
  }
  else {
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar2 == 0) {
      FUN_1800044dc(0);
    }
  }
  FUN_18001cf34(param_1 + -0x6838,uVar3,param_3);
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return 0;
}

