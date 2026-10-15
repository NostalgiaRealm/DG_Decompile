/*
 * FUN_18000f630 at 18000f630
 * undefined __cdecl FUN_18000f630(longlong param_1)
 * Address ranges: 18000f630-18000f637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000f630(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x3300);
  cVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 8) + 0x10) + 8))();
  if ((cVar4 != '\0') &&
     (bVar5 = FUN_180056ee0(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x29f0),
                            *(longlong *)(lVar6 + 0x10)), (bool)*(char *)(lVar6 + 0x12e) != bVar5))
  {
    *(bool *)(lVar6 + 0x12e) = bVar5;
    *(bool *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 8) + 0x20) = !bVar5;
    (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 8) + 0x10))();
  }
  lVar1 = *(longlong *)(lVar6 + 0x10);
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x29f0);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x620));
  bVar5 = FUN_180055b00(extraout_x0,lVar1);
  if ((*(char *)(lVar1 + 0xd6e) != '\0') || (bVar3 = false, (bool)*(char *)(lVar1 + 0xd6d) != bVar5)
     ) {
    bVar3 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x620));
  if (bVar3) {
    FUN_180038c00(*(longlong *)(param_1 + 0x3340) + 0x12c0);
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x3300) + 0x10);
    plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3300) + 8) + 0x29f0);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar7 + 0xc4));
    bVar5 = FUN_180055b00(extraout_x0_00,(longlong)puVar2);
    if ((*(char *)((longlong)puVar2 + 0xd6e) != '\0') ||
       (bVar5 != (bool)*(char *)((longlong)puVar2 + 0xd6d))) {
      if (!bVar5) {
        *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
      }
      FUN_180055b70(plVar7,puVar2,(longlong *)0x0,'\x01');
      *(bool *)((longlong)puVar2 + 0xd6d) = bVar5;
      *(undefined1 *)((longlong)puVar2 + 0xd6e) = 0;
      (**(code **)(*plVar7 + 0x70))(plVar7,puVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar7 + 0xc4));
  }
  return;
}

