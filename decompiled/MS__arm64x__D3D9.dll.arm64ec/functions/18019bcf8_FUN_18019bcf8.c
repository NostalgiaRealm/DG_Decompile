/*
 * FUN_18019bcf8 at 18019bcf8
 * undefined FUN_18019bcf8(void)
 * Address ranges: 18019bcf8-18019bdab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019bcf8(longlong param_1,char param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  code *extraout_x11;
  uint uVar3;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(int *)(param_1 + -0xa8) != 0) && (*(char *)(param_1 + -0x94) != param_2)) {
    *(char *)(param_1 + -0x94) = param_2;
    puVar1 = __hybrid_os_arm64x_dispatch_icall;
    uVar3 = 0;
    if (*(int *)(param_1 + -0xac) != 0) {
      do {
        local_30 = 0;
        local_28 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),0);
        uVar2 = FUN_1801bb190(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8));
        local_24 = (undefined4)uVar2;
        (*(code *)puVar1)(uVar2,*(int *)(param_1 + -0xa4) * uVar3);
        (*extraout_x11)(param_1 + -0xe0,extraout_x1,&local_30);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + -0xac));
    }
  }
  return;
}

