/*
 * FUN_18020ea10 at 18020ea10
 * undefined FUN_18020ea10(void)
 * Address ranges: 18020ea10-18020eaef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18020ea10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  code *extraout_x11;
  undefined8 uVar4;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = param_3;
  local_28 = param_2;
  thunk_FUN_1802236f8(param_1 + 0x28);
  uVar4 = 1;
  lVar1 = FUN_18020ec30(param_1,&local_28);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_18020ee08(lVar1 + 8,local_30);
    if (plVar2 == (longlong *)0x0) {
      local_30[0] = 0xffffffff;
      plVar2 = (longlong *)FUN_18020ee08(lVar1 + 8,local_30);
      if (plVar2 == (longlong *)0x0) goto LAB_18020ead4;
    }
    if ((*(int *)((longlong)plVar2 + 0x14) == 0) || (*(int *)(*plVar2 + 0x30) == 3)) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar3 = (*extraout_x11)();
      uVar4 = 1;
      if ((ulonglong)plVar2[3] <= uVar3) goto LAB_18020ead4;
    }
    uVar4 = 0;
  }
LAB_18020ead4:
  thunk_FUN_18022370c(param_1 + 0x28);
  return uVar4;
}

