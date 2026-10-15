/*
 * FUN_1802000e0 at 1802000e0
 * undefined FUN_1802000e0(void)
 * Address ranges: 1802000e0-1802001b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802000e0(longlong param_1,ulonglong param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *extraout_x11;
  int iVar5;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar3 = 0;
  iVar5 = 0;
  if (param_3 != 0) {
    do {
      lVar4 = *(longlong *)(param_4 + uVar3 * 8);
      if (*(longlong *)(param_1 + 0xbc0 + uVar3 * 8) != lVar4) {
        *(longlong *)(param_1 + 0xbc0 + uVar3 * 8) = lVar4;
        iVar5 = iVar5 + 1;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (3 < param_3) goto LAB_180200160;
  }
  FUN_180222c50(param_1 + (ulonglong)param_3 * 8 + 0xbc0,0,(ulonglong)(4 - param_3) << 3);
LAB_180200160:
  if ((iVar5 != 0) || (param_5 != *(longlong *)(param_1 + 0xbe0))) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,param_3,param_4,param_5);
    *(longlong *)(param_1 + 0xbe0) = param_5;
  }
  return;
}

