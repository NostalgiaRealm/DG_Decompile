/*
 * FUN_1800085a4 at 1800085a4
 * bool __fastcall FUN_1800085a4(longlong param_1, int param_2)
 * Address ranges: 1800085a4-180008775
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800085a4(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  BOOL BVar6;
  HCURSOR pHVar7;
  HCURSOR pHVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  if (((*(byte *)(param_1 + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar3 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar3 = true;
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
    }
  }
  bVar12 = false;
  if (*(longlong *)(param_1 + 0xe90) != 0) {
    lVar1 = **(longlong **)(param_1 + 0xe30);
    bVar4 = FUN_180016a38(lVar1);
    if (bVar4 == 0) {
      uVar9 = FUN_180030d78();
      if (((char)uVar9 != '\0') && (*(char *)(lVar1 + 0x120) != '\0')) {
        bVar12 = true;
      }
    }
    else {
      pHVar7 = GetCursor();
      pHVar8 = (HCURSOR)FUN_180031098();
      bVar12 = pHVar7 != pHVar8;
    }
    uVar11 = 0;
    bVar4 = 1;
    if (*(int *)(param_1 + 0xe38) != 0) {
      do {
        bVar5 = FUN_180016a38(*(longlong *)(*(longlong *)(param_1 + 0xe30) + uVar11 * 8));
        bVar4 = bVar4 & bVar5;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_1 + 0xe38));
      if (bVar4 == 0) {
        pHVar7 = (HCURSOR)FUN_180031098();
        if (*(code **)(DAT_180111f48 + 0x78) == (code *)0x0) {
          SetCursor(pHVar7);
        }
        else {
          (**(code **)(DAT_180111f48 + 0x78))();
        }
        if (*(int *)(param_1 + 0xe38) != 0) {
          uVar11 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe30) + uVar11 * 8);
            plVar2 = *(longlong **)(lVar1 + 0x100);
            (**(code **)(*plVar2 + 0x68))(plVar2,param_2 != 0);
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            *(bool *)(lVar1 + 0x120) = param_2 != 0;
          } while (uVar10 < *(uint *)(param_1 + 0xe38));
        }
        goto LAB_18000874c;
      }
    }
    if (param_2 == 0) {
      pHVar7 = (HCURSOR)FUN_180031098();
    }
    else {
      pHVar7 = *(HCURSOR *)(param_1 + 0xe90);
    }
    if (*(code **)(DAT_180111f48 + 0x78) == (code *)0x0) {
      SetCursor(pHVar7);
    }
    else {
      (**(code **)(DAT_180111f48 + 0x78))();
    }
    uVar11 = 0;
    if (*(int *)(param_1 + 0xe38) != 0) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe30) + uVar11 * 8);
        plVar2 = *(longlong **)(lVar1 + 0x100);
        (**(code **)(*plVar2 + 0x68))(plVar2,0);
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        *(undefined1 *)(lVar1 + 0x120) = 0;
      } while (uVar10 < *(uint *)(param_1 + 0xe38));
    }
  }
LAB_18000874c:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return bVar12;
}

