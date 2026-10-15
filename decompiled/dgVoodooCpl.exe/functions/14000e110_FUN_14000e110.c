/*
 * FUN_14000e110 at 14000e110
 * longlong __fastcall FUN_14000e110(longlong * param_1, longlong param_2, undefined8 param_3, undefined8 param_4, ulonglong param_5)
 * Address ranges: 14000e110-14000e15a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_14000e110(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong param_5)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_5 >> 0x10) & 0xffff;
  if (uVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014000e158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)*param_1)(param_1,param_5 & 0xffff);
    return lVar1;
  }
  if (uVar2 != 4) {
    if ((uVar2 == 5) && (*(char *)(param_2 + 0x3c) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014000e13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_5 & 0xffff);
      return lVar1;
    }
    return (param_5 >> 0x18) << 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000e14d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*param_1 + 8))(param_1,param_5 & 0xffff);
  return lVar1;
}

