/*
 * FUN_1800b30c8 at 1800b30c8
 * undefined4 __fastcall FUN_1800b30c8(longlong param_1, longlong * param_2, longlong * param_3)
 * Address ranges: 1800b30c8-1800b3202
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b30c8(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  byte bVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0x8876086c;
  if (param_2 == (longlong *)0x0) {
    return 0x8876086c;
  }
  if (param_3 == (longlong *)0x0) {
    return 0x8876086c;
  }
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar1 = false;
  }
  else {
    bVar1 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  iVar4 = (**(code **)(*param_2 + 0x50))(param_2);
  iVar5 = (**(code **)(*param_3 + 0x50))(param_3);
  if (iVar4 == iVar5) {
    if (iVar5 == 3) {
      if (((*(uint *)(param_2[3] + 0x50) & 0x400) == 0) ||
         ((*(uint *)(param_3[3] + 0x50) & 0x400) != 0)) {
        uVar6 = FUN_1800174c8((longlong)(param_3 + -0x13),(longlong)(param_2 + -0x13));
        uVar7 = 0x8876086c;
        if ((char)uVar6 != '\0') {
          uVar7 = 0;
        }
      }
    }
    else {
      if (iVar5 == 4) {
        bVar2 = FUN_180018b78((longlong)(param_3 + -0x23),(longlong)(param_2 + -0x23));
      }
      else {
        if ((iVar5 != 5) ||
           (((*(uint *)(param_2[3] + 0x50) & 0x400) != 0 &&
            ((*(uint *)(param_3[3] + 0x50) & 0x400) == 0)))) goto LAB_1800b31db;
        uVar6 = FUN_1800174c8((longlong)(param_3 + -0x13),(longlong)(param_2 + -0x13));
        bVar2 = (byte)uVar6;
      }
      if (bVar2 != 0) {
        uVar7 = 0;
      }
    }
  }
LAB_1800b31db:
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar7;
}

