/*
 * FUN_1800c04c0 at 1800c04c0
 * undefined __fastcall FUN_1800c04c0(undefined8 * param_1)
 * Address ranges: 1800c04c0-1800c05dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c04c0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong uVar8;
  
  if (((*(byte *)(param_1[3] + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar5 = false;
  }
  else {
    bVar5 = true;
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
    }
  }
  lVar2 = param_1[3];
  uVar1 = *(uint *)(lVar2 + 0x6940);
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x6938);
    uVar11 = 0;
    uVar9 = uVar1;
    do {
      uVar7 = uVar9 + uVar11 >> 1;
      uVar8 = (ulonglong)uVar7;
      puVar4 = *(undefined8 **)(lVar3 + uVar8 * 0x248);
      if (puVar4 <= param_1) {
        if (param_1 <= puVar4) break;
        uVar11 = uVar7 + 1;
        uVar8 = (ulonglong)uVar11;
        uVar7 = uVar9;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar11);
    if ((((uint)uVar8 != uVar1) && (*(undefined8 **)(uVar8 * 0x248 + lVar3) == param_1)) &&
       (puVar10 = (ulonglong *)(lVar3 + 0x10 + uVar8 * 0x248), puVar10 != (ulonglong *)0x0)) {
      FUN_1800bf394((longlong *)(lVar2 + 0x6910),puVar10);
    }
  }
  FUN_1800fbcf0((LPVOID)param_1[6]);
  param_1[6] = 0;
  *param_1 = &PTR_FUN_180104890;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1800fbcf0(param_1);
  if (bVar5) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

