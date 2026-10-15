/*
 * FUN_18019c450 at 18019c450
 * undefined FUN_18019c450(void)
 * Address ranges: 18019c450-18019c513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019c450(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  code *extraout_x11;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 uStack_14;
  uint local_c;
  
  iVar3 = FUN_1801bad48(&local_20,*(undefined4 *)(param_1 + 0x2c));
  local_20 = (undefined4)local_1c;
  if (*(char *)(param_1 + 0x248) != '\0') {
    lVar1 = 0x40;
    if (iVar3 == 0x15) {
      lVar1 = 0x50;
    }
    local_20 = *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar1);
  }
  bVar2 = *(int *)(param_1 + 0x34) == 1;
  if (bVar2) {
    local_1c = 5;
  }
  else {
    local_1c = 9;
  }
  uStack_14 = 0xffffffff;
  local_c = (uint)bVar2;
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar4,*(undefined8 *)(param_1 + 0x78),&local_20,param_1 + 0x140);
  return;
}

