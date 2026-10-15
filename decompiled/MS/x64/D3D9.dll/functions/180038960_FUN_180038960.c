/*
 * FUN_180038960 at 180038960
 * ulonglong __fastcall FUN_180038960(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 180038960-180038b2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180038960(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  
  bVar6 = (byte)param_3;
  bVar4 = (byte)param_2;
  iVar8 = (int)param_4;
  if (*(int *)(param_1 + 0x94) == 0) {
    if (*(int *)(param_1 + 0x74) == 0) {
      if ((bVar4 != 0 || bVar6 != 0) ||
         ((uVar3 = 0, iVar8 != 0 && (iVar8 != *(int *)(param_1 + 0x80))))) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0xf718),0);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0xf710),0);
        uVar3 = FUN_1800387c0(param_1,bVar4,bVar6,iVar8);
      }
      return uVar3 & 0xffffffffffffff00;
    }
    cVar2 = FUN_180035080(param_1,param_2,param_3,param_4);
    if (cVar2 == '\0') goto LAB_180038a98;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0xf718),0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0xf710),0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    lVar7 = 0x70;
    if (*(longlong *)(param_1 + 0xfcd8) != *(longlong *)(param_1 + 0xf718)) {
      lVar7 = 0x98;
    }
    (**(code **)(*plVar1 + 0x68))
              (plVar1,*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(lVar7 + param_1));
  }
  else {
    cVar2 = FUN_180035080(param_1,param_2,param_3,param_4);
    if (cVar2 == '\0') goto LAB_180038a98;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0xf718),0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0xf710),0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    lVar7 = 0x70;
    if (*(longlong *)(param_1 + 0xfcd8) != *(longlong *)(param_1 + 0xf718)) {
      lVar7 = 0x98;
    }
    (**(code **)(*plVar1 + 0x60))
              (plVar1,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x90),
               *(undefined4 *)(lVar7 + param_1));
  }
  FUN_1800387c0(param_1,bVar4,bVar6,iVar8);
LAB_180038a98:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6d0) + 0x620));
  puVar5 = (undefined4 *)(param_1 + 0x30);
  for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  return 0;
}

