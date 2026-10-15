/*
 * FUN_18001d608 at 18001d608
 * undefined __fastcall FUN_18001d608(longlong param_1)
 * Address ranges: 18001d608-18001d69f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d608(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x885) != *(char *)(lVar1 + 0x661)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))();
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x885) = *(undefined1 *)(lVar1 + 0x661);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (((*(int *)(lVar2 + 0x878) != *(int *)(lVar1 + 0x654)) ||
      (*(char *)(lVar2 + 0x887) != *(char *)(lVar1 + 0x663))) ||
     (*(int *)(lVar2 + 0x87c) != *(int *)(lVar1 + 0x658))) {
    *(int *)(lVar2 + 0x878) = *(int *)(lVar1 + 0x654);
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x887) = *(undefined1 *)(lVar1 + 0x663);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x87c) = *(undefined4 *)(lVar1 + 0x658);
  }
  return;
}

