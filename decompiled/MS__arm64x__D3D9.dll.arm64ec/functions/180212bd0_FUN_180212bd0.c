/*
 * FUN_180212bd0 at 180212bd0
 * undefined FUN_180212bd0(void)
 * Address ranges: 180212bd0-180212d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180212bd0(longlong param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar6;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(char *)(param_1 + 0x59) != '\0') {
    return 0;
  }
LAB_180212bf8:
  thunk_FUN_1802238ec(*(undefined8 *)(param_1 + 0x18),0xffffffff);
LAB_180212d0c:
  do {
    thunk_FUN_1802236f8(param_1 + 0x20);
    while( true ) {
      if (*(int *)(param_1 + 0x10) == 0) {
        thunk_FUN_18022370c(param_1 + 0x20);
        if (*(char *)(param_1 + 0x59) != '\0') {
          return 0;
        }
        goto LAB_180212bf8;
      }
      if (*(char *)(param_1 + 0x58) != '\0') {
        thunk_FUN_18022370c(param_1 + 0x20);
        thunk_FUN_1802237c0(1);
        goto LAB_180212d0c;
      }
      uVar5 = *(uint *)(param_1 + 0x10);
      lVar6 = **(longlong **)(param_1 + 8);
      if (uVar5 != 0) {
        uVar4 = 1;
        if (1 < uVar5) {
          do {
            uVar5 = uVar4 - 1;
            uVar1 = (ulonglong)uVar4;
            uVar4 = uVar4 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar1 * 8);
            uVar5 = *(uint *)(param_1 + 0x10);
          } while (uVar4 < uVar5);
        }
        *(uint *)(param_1 + 0x10) = uVar5 - 1;
      }
      if (*(char *)(param_1 + 0x59) == '\0') break;
      if (lVar6 != 0) {
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_02)(lVar6,1);
      }
    }
    *(longlong *)(param_1 + 0x48) = lVar6;
    (*(code *)puVar2)(0x180224000);
    uVar3 = (*extraout_x11)(lVar6);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    thunk_FUN_18022370c(param_1 + 0x20);
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(lVar6);
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_01)(lVar6,1);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  } while( true );
}

