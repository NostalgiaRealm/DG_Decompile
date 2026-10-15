/*
 * FUN_1800eaba8 at 1800eaba8
 * char __fastcall FUN_1800eaba8(longlong param_1, ulonglong param_2)
 * Address ranges: 1800eaba8-1800eac49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800eaba8(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    uVar9 = 0;
    uVar8 = uVar2;
    do {
      uVar6 = uVar8 + uVar9 >> 1;
      uVar7 = *(ulonglong *)(lVar3 + (ulonglong)uVar6 * 0x28);
      uVar4 = uVar6;
      if (uVar7 <= param_2) {
        if (param_2 <= uVar7) break;
        uVar9 = uVar6 + 1;
        uVar4 = uVar8;
        uVar6 = uVar9;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar9);
    if (uVar6 != uVar2) {
      uVar7 = (ulonglong)uVar6;
      if (*(ulonglong *)(lVar3 + uVar7 * 0x28) == param_2) {
        cVar5 = '\x01';
        plVar1 = (longlong *)(lVar3 + 0x10 + uVar7 * 0x28);
        if (plVar1 != (longlong *)0x0) {
          cVar5 = FUN_1800e9ce8(uVar7 * 5,plVar1,'\x01');
        }
        goto LAB_1800eac2f;
      }
    }
  }
  cVar5 = '\x01';
LAB_1800eac2f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return cVar5;
}

