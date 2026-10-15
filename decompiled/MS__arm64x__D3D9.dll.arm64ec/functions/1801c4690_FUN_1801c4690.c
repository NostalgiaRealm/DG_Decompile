/*
 * FUN_1801c4690 at 1801c4690
 * undefined FUN_1801c4690(void)
 * Address ranges: 1801c4690-1801c47b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c4690(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  uVar4 = 0x8876086c;
  if ((param_2 != 0) || (param_3 != 0)) {
    if (param_3 != 0) {
      if ((*(uint *)(param_3 + 0x50) & 1) == 0) {
        return 0x8876086c;
      }
      if (*(int *)(param_3 + 0x54) != 0) {
        if (*(int *)(param_3 + 0x54) != 2) {
          return 0x8876086c;
        }
        if (*(int *)(param_1 + 0xe68) != 3) {
          return 0x8876086c;
        }
      }
      if (*(longlong *)(param_3 + 0x28) != param_1) {
        return 0x8876086c;
      }
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,0x8876086c);
      (*extraout_x11)(param_3);
      if (*(longlong *)(param_3 + 0x30) != 0) {
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_00)();
      }
    }
    lVar1 = param_1 + (ulonglong)param_2 * 8;
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FUN_18010a318();
    }
    if (param_2 == 0) {
      lVar5 = *(longlong *)(param_3 + 8);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar5 + 0x8c);
      uVar4 = *(undefined4 *)(lVar5 + 0x90);
      *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xc50b) = 1;
      *(undefined4 *)(param_1 + 100) = uVar4;
      *(undefined4 *)(param_1 + 0x68) = 0;
      uVar4 = *(undefined4 *)(*(longlong *)(param_3 + 8) + 0x8c);
      uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 8) + 0x90);
      *(undefined8 *)(param_1 + 0x6f68) = 0;
      *(undefined4 *)(param_1 + 0x6f70) = uVar4;
      *(undefined4 *)(param_1 + 0x6f74) = uVar2;
      *(undefined1 *)(param_1 + 0xc50c) = 1;
    }
    *(longlong *)(lVar1 + 0x30) = param_3;
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0xc509) = 1;
  }
  return uVar4;
}

