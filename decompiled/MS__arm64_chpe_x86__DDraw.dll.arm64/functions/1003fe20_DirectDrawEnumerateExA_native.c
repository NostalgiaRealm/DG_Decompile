/*
 * DirectDrawEnumerateExA_native at 1003fe20
 * undefined DirectDrawEnumerateExA_native(void)
 * Address ranges: 1003fe20-1004006b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DirectDrawEnumerateExA_native(int param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auStack_440 [512];
  undefined1 auStack_240 [512];
  
  iVar2 = FUN_100375c0(s_DirectDrawEnumerateExA_100b3b90);
  if (iVar2 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar3 = (*extraout_w11)(param_1,param_2,param_3);
    return uVar3;
  }
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  FUN_10002d00();
  uVar3 = 0x80070057;
  if ((param_1 == 0) || ((param_3 & 0xfffffff8) != 0)) goto LAB_10040030;
  uVar3 = 0x80004005;
  uVar4 = FUN_10001cf8();
  if ((uVar4 & 1) == 0) goto LAB_10040030;
  FUN_10040968();
  FUN_10003630();
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 0;
  do {
    if ((&DAT_100be338)[uVar6 * 0x228] != '\0') {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar2 = (*extraout_w11_00)(0,s_dgVoodoo_DX_API_Layer_100b3b70,s_display_100b3b88,param_2,0);
      if (iVar2 == 0) goto LAB_10040018;
      uVar6 = 0;
      goto LAB_1003ff6c;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x20);
  goto LAB_1004001c;
LAB_1003ff6c:
  do {
    if (((param_3 & 1) != 0) && ((&DAT_100be338)[uVar6 * 0x228] != '\0')) {
      (*(code *)PTR_FUN_100ba16c)
                (0xfde9,0,&DAT_100be168 + uVar6 * 0x228,0xffffffff,auStack_240,0x200,0,0);
      (*(code *)PTR_FUN_100ba16c)
                (0xfde9,0,&DAT_100be1a8 + uVar6 * 0x228,0xffffffff,auStack_440,0x200,0,0);
      uVar5 = (*pcVar1)(&DAT_100bbc50 + uVar6 * 0xa4);
      iVar2 = (*extraout_w11_01)(uVar5,auStack_240,auStack_440,param_2,(&DAT_100be2a8)[uVar6 * 0x8a]
                                );
      if (iVar2 == 0) break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x20);
LAB_10040018:
  uVar3 = 0;
LAB_1004001c:
  if (DAT_100c2940 == 0) {
    FUN_10040a98();
    FUN_10002070();
  }
LAB_10040030:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar3;
}

