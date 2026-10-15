/*
 * FUN_180023620 at 180023620
 * undefined __fastcall FUN_180023620(longlong param_1)
 * Address ranges: 180023620-1800237c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023620(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *local_18 [2];
  
  if (*(char *)(param_1 + 0x3020) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x3050),0,4,0,local_18);
    if (-1 < iVar2) {
      FUN_180061330(local_18[0],(undefined8 *)(param_1 + 0x20),0x1000);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x3050),0);
      *(undefined1 *)(param_1 + 0x3020) = 0;
    }
  }
  if (*(char *)(param_1 + 0x3021) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x3040),0,4,0,local_18);
    if (-1 < iVar2) {
      FUN_180061330(local_18[0],(undefined8 *)(param_1 + 0x1020),0x1000);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x3040),0);
      *(undefined1 *)(param_1 + 0x3021) = 0;
    }
  }
  if (*(char *)(param_1 + 0x3022) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x3048),0,4,0,local_18);
    if (-1 < iVar2) {
      FUN_180061330(local_18[0],(undefined8 *)(param_1 + 0x2020),0x1000);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x3048),0);
      *(undefined1 *)(param_1 + 0x3022) = 0;
    }
  }
  return;
}

