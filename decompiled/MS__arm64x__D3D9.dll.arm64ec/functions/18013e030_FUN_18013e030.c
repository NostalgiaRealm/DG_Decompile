/*
 * FUN_18013e030 at 18013e030
 * undefined FUN_18013e030(void)
 * Address ranges: 18013e030-18013e0bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18013e030(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  bool bVar1;
  longlong extraout_x8;
  code *extraout_x11;
  undefined1 auVar2 [16];
  int local_30 [4];
  undefined8 local_20;
  
  bVar1 = *(int *)(param_1 + 0x30) != 1;
  if (bVar1) {
    local_30[0] = (int)param_3;
    local_30[3] = local_30[0] + param_4;
    local_20 = 0x100000001;
    local_30[1] = 0;
    local_30[2] = 0;
    auVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
    (*extraout_x11)(auVar2._0_8_,*(undefined8 *)(extraout_x8 + 0x20),0,local_30,
                    auVar2._8_8_ + (param_3 & 0xffffffff),0,0);
  }
  return bVar1;
}

