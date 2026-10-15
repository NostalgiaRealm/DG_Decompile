/*
 * FUN_1800c2d6c at 1800c2d6c
 * undefined __fastcall FUN_1800c2d6c(undefined8 * param_1)
 * Address ranges: 1800c2d6c-1800c2e67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c2d6c(undefined8 *param_1)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (((*(byte *)(param_1[3] + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar2 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar2 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  lVar1 = param_1[3];
  uVar5 = *(uint *)(lVar1 + 0x6968);
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      iVar4 = (int)uVar6;
      if (*(undefined8 **)(*(longlong *)(lVar1 + 0x6960) + uVar6 * 8) == param_1) {
        if (iVar4 != -1) {
          uVar7 = iVar4 + 1;
          if (uVar7 < uVar5) {
            do {
              uVar6 = (ulonglong)uVar7;
              uVar5 = uVar7 - 1;
              uVar7 = uVar7 + 1;
              *(undefined8 *)(*(longlong *)(lVar1 + 0x6960) + (ulonglong)uVar5 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar1 + 0x6960) + uVar6 * 8);
            } while (uVar7 < *(uint *)(lVar1 + 0x6968));
          }
          *(int *)(lVar1 + 0x6968) = *(int *)(lVar1 + 0x6968) + -1;
        }
        break;
      }
      uVar6 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < uVar5);
  }
  FUN_1800c2f6c((longlong)param_1);
  *param_1 = &PTR_FUN_180104cd0;
  FUN_1800fbcf0(param_1);
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

