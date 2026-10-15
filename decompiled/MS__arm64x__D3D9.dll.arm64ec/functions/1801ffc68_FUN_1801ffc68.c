/*
 * FUN_1801ffc68 at 1801ffc68
 * undefined FUN_1801ffc68(void)
 * Address ranges: 1801ffc68-1801ffcdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ffc68(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  code *extraout_x11;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  lVar1 = FUN_180200a68(param_1 + 0xcd8,param_5);
  if (*(longlong *)(param_1 + 0x790) != lVar1) {
    FUN_180200e40(param_1 + 0xcd8);
    *(longlong *)(param_1 + 0x790) = lVar1;
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,0,1,param_1 + 0x790);
  }
  return;
}

