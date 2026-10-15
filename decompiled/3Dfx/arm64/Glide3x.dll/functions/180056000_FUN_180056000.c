/*
 * FUN_180056000 at 180056000
 * undefined __cdecl FUN_180056000(longlong param_1, longlong param_2)
 * Address ranges: 180056000-1800560fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056000(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  ulonglong uVar6;
  SIZE_T SVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  uVar3 = *(uint *)(param_1 + 0x660);
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x658) + uVar6 * 8) == param_2) {
        if ((int)uVar6 != -1) goto LAB_1800560d8;
        break;
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < uVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x664);
  plVar2 = (longlong *)(param_1 + 0x658);
  if (uVar3 == uVar1) {
    uVar3 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar3 = 0x10;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT44(0,uVar3);
    SVar7 = CONCAT44(0,uVar3) << 3;
    if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
      SVar7 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)thunk_FUN_1800636c0(SVar7);
    if (puVar5 == (undefined8 *)0x0) goto LAB_1800560d8;
    thunk_FUN_1800010d8(puVar5,(undefined8 *)*plVar2,(ulonglong)*(uint *)(param_1 + 0x664) << 3);
    thunk_FUN_180063700((LPVOID)*plVar2);
    *plVar2 = (longlong)puVar5;
    *(uint *)(param_1 + 0x664) = uVar3;
  }
  *(longlong *)(*plVar2 + (ulonglong)*(uint *)(param_1 + 0x660) * 8) = param_2;
  *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
LAB_1800560d8:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

