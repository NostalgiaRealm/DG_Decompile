/*
 * FUN_180147150 at 180147150
 * undefined FUN_180147150(void)
 * Address ranges: 180147150-1801471d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180147150(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *extraout_x11;
  undefined1 auVar4 [16];
  undefined8 local_10;
  uint local_8;
  uint local_4;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 4;
  lVar3 = *(longlong *)(param_1 + (param_2 & 0xffffffff) * 8 + 0xfcc0);
  uVar2 = *(uint *)(lVar1 + 0xfce8);
  local_10 = 0;
  local_8 = *(uint *)(lVar3 + 0x24) >> (ulonglong)(uVar2 & 0x1f);
  if (local_8 == 0) {
    local_8 = 1;
  }
  local_4 = *(uint *)(lVar3 + 0x28) >> (ulonglong)(uVar2 & 0x1f);
  if (local_4 == 0) {
    local_4 = 1;
  }
  auVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                     (0x180224000,lVar3,uVar2 + *(int *)(lVar3 + 0x3c) * *(int *)(lVar1 + 0xfcf8));
  (*extraout_x11)(auVar4._0_8_,auVar4._8_8_,&local_10);
  return;
}

