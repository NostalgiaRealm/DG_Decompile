/*
 * FUN_180108778 at 180108778
 * undefined FUN_180108778(void)
 * Address ranges: 180108778-180108863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180108778(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  code *extraout_x11;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  uVar1 = *(uint *)(param_1 + 0xe38);
  while (uVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xe30);
    uVar1 = uVar1 - 1;
    (*(code *)puVar3)();
    (*extraout_x11)(param_1,*(undefined8 *)(lVar4 + (ulonglong)uVar1 * 8),param_2);
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0xe30));
  *(undefined8 *)(param_1 + 0xe30) = 0;
  *(undefined8 *)(param_1 + 0xe38) = 0;
  lVar4 = DAT_18024d928;
  iVar2 = *(int *)(DAT_18024d928 + 0x370) + -1;
  *(int *)(DAT_18024d928 + 0x370) = iVar2;
  if ((iVar2 == 0) && (DAT_180258b80 != 0)) {
    if (*(char *)(lVar4 + 0x7e8) != '\0') {
      thunk_FUN_180224080(*(undefined4 *)(lVar4 + 0x374),0x12,0,0);
      thunk_FUN_1802238ec(DAT_180258b80,0xffffffff);
    }
    thunk_FUN_180223824(DAT_180258b80);
    DAT_180258b80 = 0;
    *(undefined8 *)(lVar4 + 0x378) = 0;
    thunk_FUN_180223860(lVar4 + 0x388);
  }
  *(undefined8 *)(param_1 + 0xea0) = 0;
  return;
}

