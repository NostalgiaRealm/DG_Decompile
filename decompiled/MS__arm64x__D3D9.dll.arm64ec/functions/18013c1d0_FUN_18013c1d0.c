/*
 * FUN_18013c1d0 at 18013c1d0
 * undefined FUN_18013c1d0(void)
 * Address ranges: 18013c1d0-18013c30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013c1d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar3;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0xf9b0 + lVar3 * 8) != 0) {
      uVar2 = (*(code *)puVar1)();
      (*extraout_x11)(uVar2,*(undefined4 *)(param_1 + 0xf9d8 + lVar3 * 4),
                      *(undefined4 *)(param_1 + 0xf9e8 + lVar3 * 4),0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  if (*(longlong *)(param_1 + 0xf9d0) != 0) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(uVar2,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc),0);
  }
  FUN_180168ce0(param_1,param_2,param_3,1,0,param_4,param_5,param_6,0,param_7,0);
  return;
}

