/*
 * FUN_18013b2c8 at 18013b2c8
 * undefined FUN_18013b2c8(void)
 * Address ranges: 18013b2c8-18013b3ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013b2c8(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar5;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  
  uStack0000000000000020 = param_6;
  uStack0000000000000024 = param_5;
  uStack0000000000000028 = param_3;
  FUN_180137af0(param_1,0,0,0);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (param_4 == 0) {
    FUN_1801667b0(param_1,param_2,uStack0000000000000028,0,0,uStack0000000000000024,
                  uStack0000000000000020,param_7);
    param_1 = param_1 + (ulonglong)param_2 * 8;
    *(undefined8 *)(param_1 + 64000) = 0;
    *(undefined8 *)(param_1 + 0xfa80) = 0;
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar3 = (*extraout_x11)(param_4);
    if (iVar3 == 1) {
      lVar4 = 0;
      lVar5 = param_4 + -0x20;
    }
    else {
      lVar5 = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)(param_4 + -0xe0,param_8);
      lVar4 = param_4 + -0xe0;
    }
    lVar1 = param_1 + (ulonglong)param_2 * 8;
    *(longlong *)(lVar1 + 64000) = lVar4;
    *(longlong *)(lVar1 + 0xfa80) = lVar5;
    FUN_1801667b0(param_1,param_2,uStack0000000000000028,lVar4,lVar5,uStack0000000000000024,
                  uStack0000000000000020,param_7);
  }
  return;
}

