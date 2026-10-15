/*
 * FUN_18005cdb4 at 18005cdb4
 * undefined8 * __fastcall FUN_18005cdb4(longlong param_1, undefined8 * param_2, int param_3)
 * Address ranges: 18005cdb4-18005ceba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18005cdb4(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((param_3 != 1) &&
     ((*(longlong **)(param_1 + -0x28) == (longlong *)0x0 ||
      (uVar8 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x40))(),
      uVar8 < *(ulonglong *)(param_1 + -0x20))))) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    uVar2 = *(uint *)(lVar3 + 0x20);
    if (uVar2 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x18);
      uVar8 = param_1 - 0x40;
      uVar12 = 0;
      uVar11 = uVar2;
      do {
        uVar6 = uVar11 + uVar12 >> 1;
        uVar10 = (ulonglong)uVar6;
        uVar5 = *(ulonglong *)(lVar4 + (ulonglong)uVar6 * 0x28);
        if (uVar5 <= uVar8) {
          if (uVar8 <= uVar5) break;
          uVar12 = uVar6 + 1;
          uVar10 = (ulonglong)uVar12;
          uVar6 = uVar11;
        }
        uVar11 = uVar6;
      } while (uVar11 != uVar12);
      if ((((uint)uVar10 != uVar2) && (*(ulonglong *)(lVar4 + uVar10 * 0x28) == uVar8)) &&
         (plVar1 = (longlong *)(lVar4 + (uVar10 * 5 + 2) * 8), plVar1 != (longlong *)0x0)) {
        FUN_180043064(uVar10,plVar1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_38 = 0;
  local_30 = 0;
  iVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                    (*(longlong **)(param_1 + 8),0,&local_38);
  if (-1 < iVar7) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
    *param_2 = uVar9;
    param_2[2] = *(undefined8 *)(param_1 + 8);
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
  return param_2;
}

