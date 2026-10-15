/*
 * FUN_180040c74 at 180040c74
 * undefined __fastcall FUN_180040c74(longlong param_1, ulonglong param_2)
 * Address ranges: 180040c74-180040d88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040c74(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar12 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
  FUN_1800fb1f0(lVar4 + 0x1bc0 + lVar12);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b500);
  if (*(char *)(param_2 + 0x3c) == '\0') {
    FUN_1800eaba8(lVar5,param_2);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x1e08 + lVar12) + 0xb50);
    *(bool *)(param_2 + 0x3c) = iVar3 != -1;
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    if ((puVar8 != (undefined8 *)0x0) && (iVar3 != -1)) {
      (**(code **)*puVar8)(puVar8,param_1);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
    uVar2 = *(uint *)(lVar5 + 0x20);
    if (uVar2 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x18);
      uVar13 = 0;
      uVar11 = uVar2;
      do {
        uVar9 = uVar11 + uVar13 >> 1;
        uVar10 = (ulonglong)uVar9;
        uVar7 = *(ulonglong *)(lVar6 + (ulonglong)uVar9 * 0x28);
        if (uVar7 <= param_2) {
          if (param_2 <= uVar7) break;
          uVar13 = uVar9 + 1;
          uVar10 = (ulonglong)uVar13;
          uVar9 = uVar11;
        }
        uVar11 = uVar9;
      } while (uVar11 != uVar13);
      if ((((uint)uVar10 != uVar2) && (*(ulonglong *)(lVar6 + uVar10 * 0x28) == param_2)) &&
         (plVar1 = (longlong *)(lVar6 + (uVar10 * 5 + 2) * 8), plVar1 != (longlong *)0x0)) {
        FUN_1800e9ce8(uVar10,plVar1,'\0');
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
    do {
      uVar7 = *(ulonglong *)(param_2 + 0x28);
      uVar10 = FUN_1800e3070(*(longlong *)(lVar4 + 0x1e08 + lVar12));
    } while (uVar10 < uVar7);
  }
  return;
}

