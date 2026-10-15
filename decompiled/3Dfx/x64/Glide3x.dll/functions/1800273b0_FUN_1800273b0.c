/*
 * FUN_1800273b0 at 1800273b0
 * undefined __fastcall FUN_1800273b0(longlong param_1)
 * Address ranges: 1800273b0-180027561
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800273b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  FUN_180027650(param_1);
  FUN_180055f7c(*(longlong *)(param_1 + 0x2e0),param_1 + 0x2d8);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x318) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x310);
      uVar7 = 0;
      if (*(int *)(*(longlong *)(lVar3 + uVar5 * 8) + 8) != 0) {
        do {
          puVar1 = *(undefined8 **)(**(longlong **)(lVar3 + uVar5 * 8) + uVar7 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          lVar3 = *(longlong *)(param_1 + 0x310);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(*(longlong *)(lVar3 + uVar5 * 8) + 8));
      }
      puVar1 = *(undefined8 **)(lVar3 + uVar5 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_180060ac0((LPVOID)*puVar1);
        FUN_180060ac0(puVar1);
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x318));
  }
  FUN_180060ac0(*(LPVOID *)(param_1 + 0x310));
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  plVar2 = *(longlong **)(param_1 + 0x2c8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330);
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  lVar4 = (ulonglong)uVar6 * 0x18c0;
  if (plVar2 == *(longlong **)(lVar4 + 0xb70 + lVar3)) {
    *(undefined8 *)(lVar4 + 0xb70 + lVar3) = 0;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330);
  FUN_18004f1e0(lVar3,uVar5,*(longlong **)(param_1 + 0x2c0));
  FUN_18004eeec(lVar3,uVar5,2,param_1 + 0x2a0,param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  return;
}

