/*
 * FUN_10059850 at 10059850
 * undefined FUN_10059850(void)
 * Address ranges: 10059850-100599ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10059850(int param_1,undefined4 param_2)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong extraout_x11;
  uint uVar7;
  undefined4 local_58;
  uint uStack_54;
  undefined8 local_50;
  
  iVar3 = FUN_10073f80(param_1,param_2);
  uVar6 = extraout_x11;
  if (iVar3 != -1) {
    puVar1 = (uint *)(param_1 + (iVar3 + 0xd8) * 4);
    if (*puVar1 == 0xffffffff) {
      *puVar1 = 0;
      uVar6 = FUN_1005e900(*(undefined4 *)(param_1 + 0x3a8),param_2,*(undefined4 *)(param_1 + 0x3ac)
                          );
      pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if ((uVar6 & 1) != 0) {
        uVar7 = 2;
        do {
          local_58 = 0x1c;
          local_50 = 0;
          uStack_54 = uVar7;
          uVar4 = (*pcVar2)();
          iVar5 = (*extraout_w11)(uVar4,4,&local_58,0x10);
          if ((iVar5 == 0) && (local_58 = 0x39, local_50._4_4_ != 0)) {
            uVar4 = (*pcVar2)();
            iVar5 = (*extraout_w11_00)(uVar4,4,&local_58,0x10);
            if ((iVar5 == 0) && (local_50._4_4_ != 0)) {
              *(char *)(iVar3 + (*puVar1 + 0x26) * 0x10 + param_1) = (char)uVar7;
              *puVar1 = *puVar1 + 1;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x11);
        FUN_1005fe30(*(undefined4 *)(param_1 + 0x3a8),param_2);
      }
    }
    uVar6 = (ulonglong)*puVar1;
  }
  return uVar6 & 0xffffffff;
}

