/*
 * FUN_180011840 at 180011840
 * undefined FUN_180011840(void)
 * Address ranges: 180011840-1800118db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011840(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar2 + 0x885) != *(char *)(lVar2 + 0x661)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))();
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x885) = *(undefined1 *)(lVar2 + 0x661);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((*(int *)(lVar1 + 0x878) != *(int *)(lVar2 + 0x654)) ||
      (*(char *)(lVar1 + 0x887) != *(char *)(lVar2 + 0x663))) ||
     (*(int *)(lVar1 + 0x87c) != *(int *)(lVar2 + 0x658))) {
    *(int *)(lVar1 + 0x878) = *(int *)(lVar2 + 0x654);
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x887) = *(undefined1 *)(lVar2 + 0x663);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x87c) = *(undefined4 *)(lVar2 + 0x658);
  }
  return;
}

