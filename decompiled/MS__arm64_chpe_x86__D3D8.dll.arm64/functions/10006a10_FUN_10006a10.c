/*
 * FUN_10006a10 at 10006a10
 * undefined FUN_10006a10(void)
 * Address ranges: 10006a10-10006c97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10006a10(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined1 auStack_48 [8];
  
  piVar1 = (int *)(param_1 + 0xb2c);
  *piVar1 = param_2;
  iVar6 = -0x7789f796;
  if ((&DAT_101387c0)[param_2 * 0x8a] == 0) goto LAB_10006c68;
  *(int *)(param_1 + 0xb24) = (&DAT_101387c0)[param_2 * 0x8a];
  FUN_10121020(auStack_48);
  uVar7 = FUN_1001f940(param_1);
  if ((uVar7 & 1) != 0) {
    uVar7 = FUN_10002c10(*(undefined4 *)(param_1 + 0xacc),*piVar1);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if ((uVar7 & 1) != 0) {
      iVar6 = -0x7fffbffb;
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar5 = (*extraout_w11)(uVar4);
      if (iVar5 == 0) {
        uVar4 = FUN_1003ef40((&DAT_101387d0)[*piVar1 * 0x8a],(&DAT_101387c8)[param_2 * 0x8a]);
LAB_10006b14:
        *(undefined4 *)(param_1 + 0x14) = uVar4;
      }
      else if (iVar5 == 1) {
        uVar4 = FUN_10050140((&DAT_101387d0)[*piVar1 * 0x8a],(&DAT_101387c8)[param_2 * 0x8a]);
        goto LAB_10006b14;
      }
      piVar1 = (int *)(param_1 + 0x14);
      if (*piVar1 != 0) {
        *(undefined1 *)(*piVar1 + 0xc) = 0;
        *(undefined1 *)(param_1 + 0xac8) = 0;
        *(undefined4 *)(*piVar1 + 4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xac0) = 0xffffffff;
        *(undefined4 *)(*piVar1 + 8) = 0xff000000;
        *(undefined4 *)(param_1 + 0xac4) = 0xff000000;
        *(undefined1 *)(*piVar1 + 0xd) = 0;
        *(undefined1 *)(*piVar1 + 0xe) = *(undefined1 *)(DAT_1013ceec + 0x95e);
        uVar4 = (*pcVar2)();
        cVar3 = (*extraout_w11_00)(uVar4,param_5);
        if (cVar3 != '\0') {
          FUN_10020e80(param_1);
          iVar6 = FUN_10006820(param_1,param_3,param_4);
          if (-1 < iVar6) goto LAB_10006c60;
          uVar4 = (*pcVar2)();
          (*extraout_w11_01)(uVar4);
        }
        uVar4 = (*pcVar2)();
        (*extraout_w11_02)(uVar4);
        *piVar1 = 0;
      }
    }
    *(int *)(param_1 + 0xb24) = 0;
    *(undefined4 *)(param_1 + 0xb28) = 0;
    FUN_100fed20(*(undefined4 *)(*(int *)(param_1 + 0xabc) + -4));
    *(int *)(param_1 + 0xabc) = 0;
  }
LAB_10006c60:
  FUN_10120f70(auStack_48);
LAB_10006c68:
  *(byte *)(param_1 + 0x100) = (byte)~(byte)((uint)iVar6 >> 0x18) >> 7;
  return iVar6;
}

