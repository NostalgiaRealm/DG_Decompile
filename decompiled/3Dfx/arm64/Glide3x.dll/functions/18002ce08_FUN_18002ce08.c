/*
 * FUN_18002ce08 at 18002ce08
 * undefined __cdecl FUN_18002ce08(longlong param_1)
 * Address ranges: 18002ce08-18002cf77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ce08(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  FUN_18002d098(param_1);
  FUN_180058ef8(*(longlong *)(param_1 + 0x2e0),param_1 + 0x2d8);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x318) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x310);
      if (*(int *)(*(longlong *)(lVar3 + uVar6 * 8) + 8) != 0) {
        uVar4 = 0;
        do {
          puVar2 = *(undefined8 **)(**(longlong **)(lVar3 + uVar6 * 8) + uVar4 * 8);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          lVar3 = *(longlong *)(param_1 + 0x310);
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(*(longlong *)(lVar3 + uVar6 * 8) + 8));
      }
      puVar2 = *(undefined8 **)(lVar3 + uVar6 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        thunk_FUN_180063700((LPVOID)*puVar2);
        FUN_180063700(puVar2);
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x318));
  }
  thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x310));
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  plVar5 = *(longlong **)(param_1 + 0x2c8);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x620));
  lVar3 = lVar7 + (ulonglong)uVar1 * 0x18c0;
  if (plVar5 == *(longlong **)(lVar3 + 0xb70)) {
    *(undefined8 *)(lVar3 + 0xb70) = 0;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x620));
  auVar8 = FUN_180053678(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330),
                         *(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338),
                         *(longlong **)(param_1 + 0x2c0));
  FUN_180053328(auVar8._0_8_,auVar8._8_8_,2,param_1 + 0x2a0,param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  return;
}

