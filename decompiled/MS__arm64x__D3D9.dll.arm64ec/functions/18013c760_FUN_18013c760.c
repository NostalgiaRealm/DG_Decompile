/*
 * FUN_18013c760 at 18013c760
 * undefined FUN_18013c760(void)
 * Address ranges: 18013c760-18013c8ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013c760(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar4;
  longlong local_50 [2];
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar4 = 0;
  do {
    if (*(longlong *)(param_1 + 0xf9b0 + lVar4 * 8) != 0) {
      uVar3 = (*(code *)puVar2)();
      (*extraout_x11)(uVar3,*(undefined4 *)(param_1 + 0xf9d8 + lVar4 * 4),
                      *(undefined4 *)(param_1 + 0xf9e8 + lVar4 * 4),0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if (*(longlong *)(param_1 + 0xf9d0) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(uVar3,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc),0);
  }
  local_50[0] = 0;
  if (param_4 != 0) {
    local_50[0] = param_4 + -0x30;
  }
  puVar1 = &DAT_0000004c;
  if (param_4 != 0) {
    puVar1 = (undefined1 *)(param_4 + 0x1c);
  }
  FUN_180168ce0(param_1,param_2,param_3,0,local_50,param_5,param_6,param_7,0,0,*puVar1);
  return;
}

