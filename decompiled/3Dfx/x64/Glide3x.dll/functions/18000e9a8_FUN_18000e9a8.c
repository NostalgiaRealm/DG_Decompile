/*
 * FUN_18000e9a8 at 18000e9a8
 * undefined __fastcall FUN_18000e9a8(longlong param_1)
 * Address ranges: 18000e9a8-18000ea2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000e9a8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *local_18 [2];
  
  if (*(char *)(param_1 + 0x32f0) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x3348),0,4,0,local_18);
    if (-1 < iVar2) {
      FUN_180061330(local_18[0],(undefined8 *)(param_1 + 0x2c90),0x660);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x3348),0);
      *(undefined1 *)(param_1 + 0x32f0) = 0;
    }
  }
  return;
}

