/*
 * FUN_1003a460 at 1003a460
 * undefined FUN_1003a460(void)
 * Address ranges: 1003a460-1003a52b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003a460(int param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0x80070057;
    if (param_4 == (undefined4 *)0x0) goto LAB_1003a508;
LAB_1003a4e8:
    uVar2 = (undefined4)*(ulonglong *)(&DAT_100be348 + *(int *)(param_1 + 0x11c) * 0x228);
    if (0xffffffff < *(ulonglong *)(&DAT_100be348 + *(int *)(param_1 + 0x11c) * 0x228)) {
      uVar2 = 0xffffffff;
    }
    *param_4 = uVar2;
  }
  else {
    uVar2 = (undefined4)*(ulonglong *)(&DAT_100be340 + *(int *)(param_1 + 0x11c) * 0x228);
    if (0xffffffff < *(ulonglong *)(&DAT_100be340 + *(int *)(param_1 + 0x11c) * 0x228)) {
      uVar2 = 0xffffffff;
    }
    *param_3 = uVar2;
    if (param_4 != (undefined4 *)0x0) goto LAB_1003a4e8;
  }
  uVar2 = 0;
LAB_1003a508:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

