/*
 * FUN_18001bf20 at 18001bf20
 * undefined __cdecl FUN_18001bf20(longlong param_1)
 * Address ranges: 18001bf20-18001c083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001bf20(longlong param_1)

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
  
  lVar6 = *(longlong *)(param_1 + 0x3180);
  cVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 8) + 0x10) + 8))();
  if ((cVar4 != '\0') &&
     (bVar5 = FUN_1800541a0(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x2978),
                            *(longlong *)(lVar6 + 0x10)), (bool)*(char *)(lVar6 + 0x12e) != bVar5))
  {
    *(bool *)(lVar6 + 0x12e) = bVar5;
    *(bool *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 8) + 0x20) = !bVar5;
    (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 8) + 0x10))();
  }
  lVar1 = *(longlong *)(lVar6 + 0x10);
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x2978);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x620));
  bVar5 = FUN_180052dc0(extraout_x0,lVar1);
  if ((*(char *)(lVar1 + 0xd6e) != '\0') || (bVar3 = false, (bool)*(char *)(lVar1 + 0xd6d) != bVar5)
     ) {
    bVar3 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x620));
  if (bVar3) {
    FUN_180043f90(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x3180) + 0x10);
    plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3180) + 8) + 0x2978);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar7 + 0xc4));
    bVar5 = FUN_180052dc0(extraout_x0_00,(longlong)puVar2);
    if ((*(char *)((longlong)puVar2 + 0xd6e) != '\0') ||
       (bVar5 != (bool)*(char *)((longlong)puVar2 + 0xd6d))) {
      if (!bVar5) {
        *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
      }
      FUN_180052e30(plVar7,puVar2,(longlong *)0x0,'\x01');
      *(bool *)((longlong)puVar2 + 0xd6d) = bVar5;
      *(undefined1 *)((longlong)puVar2 + 0xd6e) = 0;
      (**(code **)(*plVar7 + 0x70))(plVar7,puVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar7 + 0xc4));
  }
  return;
}

