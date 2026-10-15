/*
 * FUN_1801f3740 at 1801f3740
 * undefined FUN_1801f3740(void)
 * Address ranges: 1801f3740-1801f37db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801f3740(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_x11;
  uint local_20 [4];
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40) + 1;
    *(longlong *)(param_1 + 0x40) = lVar1;
    if (lVar1 != *(longlong *)(param_1 + 0x48)) {
      return lVar1;
    }
    local_20[0] = 0;
    uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar2 = (*extraout_x11)(uVar3,0x1000,*(undefined8 *)(param_1 + 0x30),local_20);
    if (iVar2 == 0) {
      *(bool *)(param_1 + 0x50) = local_20[0] == 0;
      lVar1 = 0;
      if (local_20[0] != 0) {
        lVar1 = *(longlong *)(param_1 + 0x30);
      }
      *(longlong *)(param_1 + 0x40) = lVar1;
      *(ulonglong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x30) + (ulonglong)local_20[0];
      return lVar1;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return 0;
}

