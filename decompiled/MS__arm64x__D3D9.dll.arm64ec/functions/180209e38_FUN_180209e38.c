/*
 * FUN_180209e38 at 180209e38
 * undefined FUN_180209e38(void)
 * Address ranges: 180209e38-180209f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209e38(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int *piVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar6;
  undefined1 auStack_78 [56];
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    FUN_180206f40();
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        lVar2 = uVar6 * 0x20;
        if (*(int *)(lVar2 + param_3) == 0) {
          uVar4 = (*(code *)puVar3)();
          piVar5 = (int *)(*extraout_x11)(uVar4,auStack_78);
          FUN_18020e268(*(undefined8 *)(param_1 + 0xb18),*(undefined8 *)(param_3 + 8 + lVar2),
                        *(undefined4 *)(lVar2 + param_3 + 0x10),*piVar5 == 0,
                        *(undefined8 *)(param_1 + 0xb10),param_1,
                        *(undefined4 *)(lVar2 + param_3 + 0x18),*(undefined8 *)(param_1 + 0xb78));
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < param_2);
    }
  }
  FUN_180206ff8(param_1);
  uVar4 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_00)(uVar4,param_2,param_3);
  return;
}

