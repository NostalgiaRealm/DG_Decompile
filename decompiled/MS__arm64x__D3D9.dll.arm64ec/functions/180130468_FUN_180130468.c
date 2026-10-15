/*
 * FUN_180130468 at 180130468
 * undefined FUN_180130468(void)
 * Address ranges: 180130468-18013051f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180130468(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar6;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar6 + 0xa0) - 3U < 2) {
    uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar3 = (*extraout_x11)(uVar5,param_2,*(undefined8 *)(lVar6 + 0x70));
    uVar1 = *(uint *)(lVar6 + 0x88);
    uVar4 = (ulonglong)uVar1;
    if (cVar3 == '\0') {
      if (uVar1 == 0xffffffff) {
        uVar4 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 0x78);
        uVar5 = (*(code *)puVar2)(0x180224000);
        uVar4 = (*extraout_x11_00)(uVar5,param_2,*(undefined8 *)(lVar6 + (uVar4 & 0xffffffff) * 8));
      }
    }
    else {
      uVar4 = (ulonglong)(uVar1 == 0xffffffff);
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

