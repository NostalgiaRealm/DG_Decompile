/*
 * FUN_18001bfc8 at 18001bfc8
 * undefined __fastcall FUN_18001bfc8(longlong param_1)
 * Address ranges: 18001bfc8-18001c04f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001bfc8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *local_18 [2];
  
  if (*(char *)(param_1 + 0x3170) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x31c8),0,4,0,local_18);
    if (-1 < iVar2) {
      FUN_18005f1b0(local_18[0],(undefined8 *)(param_1 + 0x2bf0),0x580);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x31c8),0);
      *(undefined1 *)(param_1 + 0x3170) = 0;
    }
  }
  return;
}

