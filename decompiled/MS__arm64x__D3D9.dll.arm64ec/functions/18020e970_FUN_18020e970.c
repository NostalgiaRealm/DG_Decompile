/*
 * FUN_18020e970 at 18020e970
 * undefined FUN_18020e970(void)
 * Address ranges: 18020e970-18020ea0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18020e970(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *extraout_x11;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 0;
  local_28 = param_2;
  thunk_FUN_1802236f8(param_1 + 0x28);
  bVar1 = true;
  lVar2 = FUN_18020ec30(param_1,&local_28);
  if ((lVar2 != 0) && (lVar2 = FUN_18020ee08(lVar2 + 8,local_30), lVar2 != 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar3 = (*extraout_x11)();
    bVar1 = *(ulonglong *)(lVar2 + 0x18) <= uVar3;
  }
  thunk_FUN_18022370c(param_1 + 0x28);
  return bVar1;
}

