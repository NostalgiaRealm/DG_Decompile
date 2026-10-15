/*
 * FUN_180206a78 at 180206a78
 * undefined FUN_180206a78(void)
 * Address ranges: 180206a78-180206b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180206a78(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4,
                 longlong param_5)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *extraout_x11;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 1;
  uVar8 = 0;
  if (param_3 != 0) {
    do {
      if (iVar7 == 0) goto LAB_180206b24;
      *(undefined8 *)(param_5 + uVar8 * 8) = 0;
      sVar2 = *(short *)(param_4 + uVar8 * 2);
      if (sVar2 != 0) {
        uVar4 = FUN_180222950(param_2,sVar2,u_RT_CUSTOM_1802381f0);
        lVar5 = FUN_1802227d0(param_2,*(undefined2 *)(param_4 + uVar8 * 2),u_RT_CUSTOM_1802381f0);
        if (lVar5 != 0) {
          uVar6 = FUN_180212d48(lVar5,uVar4,lVar5);
          *(undefined8 *)(param_5 + uVar8 * 8) = uVar6;
          FUN_1802229d8(lVar5);
          if (*(longlong *)(param_5 + uVar8 * 8) != 0) goto LAB_180206b10;
        }
        iVar7 = 0;
      }
LAB_180206b10:
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (iVar7 == 0) {
LAB_180206b24:
      puVar3 = __hybrid_os_arm64x_dispatch_icall;
      uVar8 = 0;
      do {
        if (*(longlong *)(param_5 + uVar8 * 8) != 0) {
          (*(code *)puVar3)();
          (*extraout_x11)();
          *(undefined8 *)(param_5 + uVar8 * 8) = 0;
        }
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < param_3);
    }
  }
  return iVar7;
}

