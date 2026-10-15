/*
 * FUN_180048468 at 180048468
 * undefined __cdecl FUN_180048468(longlong param_1, ulonglong param_2)
 * Address ranges: 180048468-180048663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048468(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  puVar3 = *(undefined8 **)(lVar2 + 0x2250);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004a048(puVar3);
    FUN_180060a18(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2248);
  *(undefined8 *)(lVar2 + 0x2250) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004a5d8(puVar3);
    FUN_180060a18(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2240);
  *(undefined8 *)(lVar2 + 0x2248) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004a5d8(puVar3);
    FUN_180060a18(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2238);
  *(undefined8 *)(lVar2 + 0x2240) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004a5d8(puVar3);
    FUN_180060a18(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2230);
  *(undefined8 *)(lVar2 + 0x2238) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004a5d8(puVar3);
    FUN_180060a18(puVar3);
  }
  *(undefined8 *)(lVar2 + 0x2230) = 0;
  if (*(longlong **)(lVar2 + 0x2378) != (longlong *)0x0) {
    FUN_180049be8(param_1,*(longlong **)(lVar2 + 0x2378));
    FUN_180049be8(param_1,*(longlong **)(lVar2 + 0x2370));
    FUN_180049be8(param_1,*(longlong **)(lVar2 + 0x2398));
    FUN_180049be8(param_1,*(longlong **)(lVar2 + 0x2388));
    FUN_180049be8(param_1,*(longlong **)(lVar2 + 0x2390));
    FUN_180049be8(param_1,*(longlong **)(lVar2 + 0x2380));
    uVar1 = *(uint *)(lVar2 + 0x236c);
    *(undefined8 *)(lVar2 + 0x2370) = 0;
    *(undefined8 *)(lVar2 + 0x2378) = 0;
    *(undefined8 *)(lVar2 + 0x2390) = 0;
    *(undefined8 *)(lVar2 + 0x2398) = 0;
    *(undefined8 *)(lVar2 + 0x2380) = 0;
    *(undefined8 *)(lVar2 + 0x2388) = 0;
    if (uVar1 != 0xffffffff) {
      lVar4 = *(longlong *)(lVar2 + 0x2238);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
      FUN_18004a7d8(lVar4,uVar1,2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
    }
    uVar1 = *(uint *)(lVar2 + 0x2368);
    if (uVar1 != 0xffffffff) {
      lVar4 = *(longlong *)(lVar2 + 0x2230);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
      FUN_18004a7d8(lVar4,uVar1,2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
    }
    *(undefined4 *)(lVar2 + 0x2368) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x236c) = 0xffffffff;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x908);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180045d50(puVar3);
    FUN_180060a18(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x910);
  *(undefined8 *)(lVar2 + 0x908) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180045d50(puVar3);
    FUN_180060a18(puVar3);
  }
  *(undefined8 *)(lVar2 + 0x910) = 0;
  return;
}

