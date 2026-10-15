/*
 * FUN_1801a7d98 at 1801a7d98
 * undefined FUN_1801a7d98(void)
 * Address ranges: 1801a7d98-1801a7f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a7d98(longlong param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x2c)) {
      FUN_1801a72b8(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1930),
                    *(int *)(param_1 + 0x38),1);
    }
    if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x30)) {
      FUN_1801a72b8(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1938),
                    *(int *)(param_1 + 0x3c),param_2 * param_3);
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    uVar3 = 1;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar3 = 2;
    }
    FUN_1801a72b8(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1930),
                  *(undefined4 *)(param_1 + 0x2c),uVar3);
    FUN_1801a72b8(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1938),
                  *(undefined4 *)(param_1 + 0x30),param_2 * param_3);
    FUN_1801a72b8(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1940),
                  *(undefined4 *)(param_1 + 0x34),param_2 * param_3);
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  lVar4 = *(longlong *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      (*(code *)puVar1)(0x180224000);
      iVar2 = (*extraout_x11_00)(lVar4);
      if (iVar2 == 1) {
        FUN_18021d418(*(longlong *)(param_1 + 0xc) + 0x18b8,lVar4);
      }
    }
    else {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11)(lVar4);
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x1c);
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      (*(code *)puVar1)(0x180224000);
      iVar2 = (*extraout_x11_02)(lVar4);
      if (iVar2 == 1) {
        FUN_18021d418(*(longlong *)(param_1 + 0xc) + 0x18b8,lVar4);
      }
    }
    else {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_01)(lVar4);
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x24));
  *(undefined8 *)(param_1 + 0x24) = 0;
  return;
}

