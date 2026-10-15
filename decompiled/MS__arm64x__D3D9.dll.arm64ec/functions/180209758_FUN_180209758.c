/*
 * FUN_180209758 at 180209758
 * undefined FUN_180209758(void)
 * Address ranges: 180209758-18020983b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209758(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  code *extraout_x11;
  int iVar7;
  
  iVar7 = 0;
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      lVar3 = uVar6 * 0x10;
      lVar2 = param_1 + lVar3;
      if (*(int *)(lVar2 + 0x5e0) == *(int *)(lVar3 + param_3)) {
        if (*(int *)(lVar2 + 0x5e4) != *(int *)(param_3 + 4 + lVar3)) goto LAB_1802097d4;
        if (*(int *)(lVar2 + 0x5e8) != *(int *)(param_3 + 8 + lVar3)) goto LAB_1802097d4;
        if (*(int *)(lVar2 + 0x5ec) != *(int *)(param_3 + 0xc + lVar3)) goto LAB_1802097d4;
      }
      else {
LAB_1802097d4:
        uVar5 = *(undefined8 *)(lVar3 + param_3);
        iVar7 = (int)uVar6 + 1;
        puVar4 = (undefined8 *)(lVar3 + param_1 + 0x5e0);
        puVar4[1] = ((undefined8 *)(lVar3 + param_3))[1];
        *puVar4 = uVar5;
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < param_2);
    if (iVar7 != 0) {
      FUN_180206ff8(param_1);
      uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar5,iVar7,param_3);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

