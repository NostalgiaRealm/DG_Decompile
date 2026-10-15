/*
 * FUN_1800347f4 at 1800347f4
 * undefined __fastcall FUN_1800347f4(longlong param_1)
 * Address ranges: 1800347f4-180034987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800347f4(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  FUN_180034a6c(param_1);
  FUN_180053970(*(longlong *)(param_1 + 0xb0),param_1 + 0xa8);
  uVar5 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0xe0);
      uVar7 = 0;
      if (*(int *)(*(longlong *)(lVar3 + uVar5 * 8) + 8) != 0) {
        do {
          puVar1 = *(undefined8 **)(**(longlong **)(lVar3 + uVar5 * 8) + uVar7 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          lVar3 = *(longlong *)(param_1 + 0xe0);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(*(longlong *)(lVar3 + uVar5 * 8) + 8));
      }
      puVar1 = *(undefined8 **)(lVar3 + uVar5 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_18005d720((LPVOID)*puVar1);
        FUN_18005d720(puVar1);
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0xe8));
  }
  FUN_18005d720(*(LPVOID *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  plVar2 = *(longlong **)(param_1 + 0x98);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0);
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  lVar4 = (ulonglong)uVar6 * 0x18c0;
  if (plVar2 == *(longlong **)(lVar4 + 0xb70 + lVar3)) {
    *(undefined8 *)(lVar4 + 0xb70 + lVar3) = 0;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0);
  FUN_18004cbd4(lVar3,uVar5,*(longlong **)(param_1 + 0x90));
  FUN_18004c8e0(lVar3,uVar5,1,param_1 + 0x80,param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

