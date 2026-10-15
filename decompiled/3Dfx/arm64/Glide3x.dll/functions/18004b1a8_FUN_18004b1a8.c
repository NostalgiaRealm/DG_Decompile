/*
 * FUN_18004b1a8 at 18004b1a8
 * undefined __cdecl FUN_18004b1a8(longlong param_1, ulonglong param_2)
 * Address ranges: 18004b1a8-18004b3a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b1a8(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  puVar3 = *(undefined8 **)(lVar2 + 0x2250);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004cd88(puVar3);
    FUN_180063700(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2248);
  *(undefined8 *)(lVar2 + 0x2250) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004d318(puVar3);
    FUN_180063700(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2240);
  *(undefined8 *)(lVar2 + 0x2248) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004d318(puVar3);
    FUN_180063700(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2238);
  *(undefined8 *)(lVar2 + 0x2240) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004d318(puVar3);
    FUN_180063700(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2230);
  *(undefined8 *)(lVar2 + 0x2238) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004d318(puVar3);
    FUN_180063700(puVar3);
  }
  *(undefined8 *)(lVar2 + 0x2230) = 0;
  if (*(longlong **)(lVar2 + 0x2378) != (longlong *)0x0) {
    FUN_18004c928(param_1,*(longlong **)(lVar2 + 0x2378));
    FUN_18004c928(param_1,*(longlong **)(lVar2 + 0x2370));
    FUN_18004c928(param_1,*(longlong **)(lVar2 + 0x2398));
    FUN_18004c928(param_1,*(longlong **)(lVar2 + 0x2388));
    FUN_18004c928(param_1,*(longlong **)(lVar2 + 0x2390));
    FUN_18004c928(param_1,*(longlong **)(lVar2 + 0x2380));
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
      FUN_18004d518(lVar4,uVar1,2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
    }
    uVar1 = *(uint *)(lVar2 + 0x2368);
    if (uVar1 != 0xffffffff) {
      lVar4 = *(longlong *)(lVar2 + 0x2230);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
      FUN_18004d518(lVar4,uVar1,2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
    }
    *(undefined4 *)(lVar2 + 0x2368) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x236c) = 0xffffffff;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x908);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180048a90(puVar3);
    FUN_180063700(puVar3);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x910);
  *(undefined8 *)(lVar2 + 0x908) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180048a90(puVar3);
    FUN_180063700(puVar3);
  }
  *(undefined8 *)(lVar2 + 0x910) = 0;
  return;
}

