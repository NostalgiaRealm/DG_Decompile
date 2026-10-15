/*
 * FUN_18013cb68 at 18013cb68
 * undefined FUN_18013cb68(void)
 * Address ranges: 18013cb68-18013ccc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013cb68(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,undefined1 param_10)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar4;
  longlong local_48;
  
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
  local_48 = 0;
  if (param_4 != 0) {
    local_48 = param_4 + -0x30;
  }
  puVar1 = &DAT_0000004c;
  if (param_4 != 0) {
    puVar1 = (undefined1 *)(param_4 + 0x1c);
  }
  FUN_180169b60(param_1,param_2,param_3,0,&local_48,param_5,0,param_6,param_7,param_8,param_9,
                param_10,1,0,*puVar1);
  return;
}

