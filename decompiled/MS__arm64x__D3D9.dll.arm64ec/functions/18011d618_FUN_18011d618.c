/*
 * FUN_18011d618 at 18011d618
 * undefined FUN_18011d618(void)
 * Address ranges: 18011d618-18011d6c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011d618(longlong param_1)

{
  longlong lVar1;
  code *extraout_x11;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar2 + 0x885) != *(char *)(lVar2 + 0x661)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
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

