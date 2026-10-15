/*
 * FUN_1800ea3f8 at 1800ea3f8
 * undefined __fastcall FUN_1800ea3f8(longlong param_1, ulonglong param_2, longlong param_3, longlong param_4, undefined8 param_5)
 * Address ranges: 1800ea3f8-1800ea5c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea3f8(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong local_res10 [3];
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  
  local_res10[0] = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    uVar9 = 0;
    uVar7 = uVar2;
    do {
      uVar6 = uVar7 + uVar9 >> 1;
      uVar10 = (ulonglong)uVar6;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar6 * 0x28);
      if (uVar8 <= param_2) {
        if (param_2 <= uVar8) break;
        uVar9 = uVar6 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar6 = uVar7;
      }
      uVar7 = uVar6;
    } while (uVar7 != uVar9);
    if ((((uint)uVar10 != uVar2) &&
        (lVar3 = *(longlong *)(param_1 + 0x18), *(ulonglong *)(lVar3 + uVar10 * 0x28) == param_2))
       && (plVar1 = (longlong *)(lVar3 + 0x10 + uVar10 * 0x28), plVar1 != (longlong *)0x0)) {
      uVar8 = (**(code **)(**(longlong **)(*plVar1 + 0x18) + 0x40))();
      if (uVar8 < *(ulonglong *)(lVar3 + 0x20 + uVar10 * 0x28)) {
        lVar4 = *(longlong *)(lVar3 + 0x18 + uVar10 * 0x28);
        if (param_3 == *plVar1) {
          if ((param_4 != lVar4) && (lVar4 != -1)) {
            FUN_1800e2ae8(lVar4 + 8,'\0');
          }
        }
        else {
          if (lVar4 != -1) {
            FUN_1800e2ae8(lVar4 + 8,'\0');
          }
          if (param_4 != -1) {
            FUN_1800e2ae8(param_4 + 8,'\0');
          }
          (**(code **)(**(longlong **)(param_3 + 0x10) + 0x78))
                    (*(longlong **)(param_3 + 0x10),*(undefined8 *)(*plVar1 + 0x18),
                     *(undefined8 *)(lVar3 + 0x20 + uVar10 * 0x28));
        }
      }
      *(undefined8 *)(lVar3 + 0x20 + uVar10 * 0x28) = param_5;
      *plVar1 = param_3;
      *(longlong *)(lVar3 + 0x18 + uVar10 * 0x28) = param_4;
      goto LAB_1800ea5ac;
    }
  }
  uVar7 = 0;
  local_58 = param_5;
  local_68 = param_3;
  lStack_60 = param_4;
  if (uVar2 != 0) {
    uVar9 = 0;
    uVar6 = uVar2;
    do {
      uVar7 = uVar6 + uVar9 >> 1;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar7 * 0x28);
      uVar5 = uVar7;
      if (uVar8 <= param_2) {
        if (param_2 <= uVar8) break;
        uVar9 = uVar7 + 1;
        uVar5 = uVar6;
        uVar7 = uVar9;
      }
      uVar6 = uVar5;
    } while (uVar6 != uVar9);
    if (uVar7 != uVar2) {
      uVar8 = (ulonglong)uVar7;
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (*(ulonglong *)(lVar3 + uVar8 * 0x28) == param_2) {
        plVar1 = (longlong *)(lVar3 + 0x10 + uVar8 * 0x28);
        *plVar1 = param_3;
        plVar1[1] = param_4;
        *(undefined8 *)(lVar3 + 0x20 + uVar8 * 0x28) = param_5;
        goto LAB_1800ea5ac;
      }
    }
  }
  FUN_1800eafb0((longlong *)(param_1 + 0x10),uVar7,param_2,local_res10,&local_68);
LAB_1800ea5ac:
                    /* WARNING: Could not recover jumptable at 0x0001800ea5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}

