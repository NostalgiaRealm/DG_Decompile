/*
 * FUN_1801fc0a8 at 1801fc0a8
 * undefined FUN_1801fc0a8(void)
 * Address ranges: 1801fc0a8-1801fc203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801fc0a8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong extraout_x12;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined4 local_58;
  uint uStack_54;
  undefined8 local_50;
  
  auVar7 = FUN_1801faba0(param_1,param_2);
  uVar4 = extraout_x12;
  if (auVar7._0_4_ != -1) {
    lVar1 = param_1 + (auVar7._0_8_ & 0xffffffff) * 4;
    if (*(int *)(lVar1 + 0x434) == -1) {
      *(undefined4 *)(lVar1 + 0x434) = 0;
      uVar4 = FUN_180215f70(*(undefined8 *)(param_1 + 0x480),auVar7._8_8_,
                            *(undefined4 *)(param_1 + 0x488));
      puVar2 = __hybrid_os_arm64x_dispatch_icall;
      if ((uVar4 & 1) != 0) {
        uVar6 = 2;
        do {
          local_58 = 0x1c;
          local_50 = 0;
          uStack_54 = uVar6;
          uVar5 = (*(code *)puVar2)();
          iVar3 = (*extraout_x11)(uVar5,4,&local_58,0x10);
          if ((iVar3 == 0) && (local_58 = 0x39, local_50._4_4_ != 0)) {
            uVar5 = (*(code *)puVar2)(0x180224000);
            iVar3 = (*extraout_x11_00)(uVar5,4,&local_58,0x10);
            if ((iVar3 == 0) && (local_50._4_4_ != 0)) {
              *(char *)(param_1 + (auVar7._0_8_ & 0xffffffff) +
                        (ulonglong)*(uint *)(lVar1 + 0x434) * 0x10 + 0x334) = (char)uVar6;
              *(int *)(lVar1 + 0x434) = *(int *)(lVar1 + 0x434) + 1;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x11);
        FUN_180216420(*(undefined8 *)(param_1 + 0x480),param_2);
      }
    }
    uVar4 = (ulonglong)*(uint *)(lVar1 + 0x434);
  }
  return uVar4 & 0xffffffff;
}

