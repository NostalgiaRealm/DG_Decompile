/*
 * FUN_1801acaf0 at 1801acaf0
 * undefined FUN_1801acaf0(void)
 * Address ranges: 1801acaf0-1801acba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801acaf0(longlong *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  code *extraout_x11;
  longlong lVar3;
  uint uVar4;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar3 = *param_1;
  if ((*(int *)(lVar3 + 0x38) != 0) && (*(char *)(lVar3 + 0x4c) != (char)param_1[1])) {
    *(char *)(lVar3 + 0x4c) = (char)param_1[1];
    puVar1 = __hybrid_os_arm64x_dispatch_icall;
    uVar4 = 0;
    if (*(int *)(lVar3 + 0x34) != 0) {
      do {
        local_30 = 0;
        local_28 = FUN_1801bb148(lVar3,*(undefined4 *)(lVar3 + 0x24),0);
        uVar2 = FUN_1801bb190(lVar3,*(undefined4 *)(lVar3 + 0x28));
        local_24 = (undefined4)uVar2;
        (*(code *)puVar1)(uVar2,*(int *)(lVar3 + 0x3c) * uVar4);
        (*extraout_x11)(lVar3,extraout_x1,&local_30);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(lVar3 + 0x34));
    }
  }
  return;
}

