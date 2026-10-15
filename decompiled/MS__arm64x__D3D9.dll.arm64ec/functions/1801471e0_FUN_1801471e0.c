/*
 * FUN_1801471e0 at 1801471e0
 * undefined FUN_1801471e0(void)
 * Address ranges: 1801471e0-18014725b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801471e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  code *extraout_x11;
  undefined1 auVar3 [16];
  undefined8 local_10;
  uint local_8;
  uint local_4;
  
  lVar2 = *(longlong *)(param_1 + 0xfce0);
  uVar1 = *(uint *)(param_1 + 0xfd08);
  local_10 = 0;
  local_8 = *(uint *)(lVar2 + 0x24) >> (ulonglong)(uVar1 & 0x1f);
  if (local_8 == 0) {
    local_8 = 1;
  }
  local_4 = *(uint *)(lVar2 + 0x28) >> (ulonglong)(uVar1 & 0x1f);
  if (local_4 == 0) {
    local_4 = 1;
  }
  auVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                     (0x180224000,lVar2,uVar1 + *(int *)(param_1 + 0xfd0c) * *(int *)(lVar2 + 0x3c))
  ;
  (*extraout_x11)(auVar3._0_8_,auVar3._8_8_,&local_10);
  return;
}

