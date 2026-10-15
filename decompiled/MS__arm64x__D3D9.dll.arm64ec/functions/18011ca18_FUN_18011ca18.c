/*
 * FUN_18011ca18 at 18011ca18
 * undefined FUN_18011ca18(void)
 * Address ranges: 18011ca18-18011cad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011ca18(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar5;
  undefined4 local_30 [4];
  
  uVar5 = 0;
  do {
    local_30[0] = param_2;
    if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar5 * 4) == -1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x358) + uVar5 * 4) = param_2;
      lVar3 = FUN_18010d668(param_1 + 0x318,local_30);
      puVar2 = __hybrid_os_arm64x_dispatch_icall;
      if (lVar3 != 0) {
        uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(uVar4,uVar5);
      }
      uVar4 = (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)(uVar4,uVar5,1);
      return;
    }
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar1;
  } while (uVar1 < 8);
  if (uVar1 == 8) {
    FUN_180108518(param_1 + 0x358,local_30);
  }
  return;
}

