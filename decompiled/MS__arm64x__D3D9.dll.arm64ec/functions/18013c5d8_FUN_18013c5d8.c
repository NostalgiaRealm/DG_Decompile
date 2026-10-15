/*
 * FUN_18013c5d8 at 18013c5d8
 * undefined FUN_18013c5d8(void)
 * Address ranges: 18013c5d8-18013c757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013c5d8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  char param_9,undefined1 param_10)

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
  if (param_9 == '\0') {
    FUN_180169b60(param_1,param_2,param_3,1,0,param_4,0,param_5,param_6,param_7,param_8,0,1,param_10
                  ,0);
  }
  else {
    FUN_180169b60(param_1,param_2,param_3,1,0,param_4,0,param_5,param_6,param_7,param_8,1,1,param_10
                  ,0);
  }
  return;
}

