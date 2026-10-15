/*
 * FUN_10007680 at 10007680
 * undefined FUN_10007680(void)
 * Address ranges: 10007680-10007907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007680(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

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
  
  piVar1 = (int *)(param_1 + 0xdf0);
  *piVar1 = param_2;
  iVar6 = -0x7789f796;
  if ((&DAT_10171380)[param_2 * 0x8a] == 0) goto LAB_100078d8;
  *(int *)(param_1 + 0xde8) = (&DAT_10171380)[param_2 * 0x8a];
  FUN_10157b40(auStack_48);
  uVar7 = FUN_10025360(param_1);
  if ((uVar7 & 1) != 0) {
    uVar7 = FUN_10002d30(*(undefined4 *)(param_1 + 0xd90),*piVar1);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if ((uVar7 & 1) != 0) {
      iVar6 = -0x7fffbffb;
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar5 = (*extraout_w11)(uVar4);
      if (iVar5 == 0) {
        uVar4 = FUN_1004ba80((&DAT_10171390)[*piVar1 * 0x8a],(&DAT_10171388)[param_2 * 0x8a]);
LAB_10007784:
        *(undefined4 *)(param_1 + 0x14) = uVar4;
      }
      else if (iVar5 == 1) {
        uVar4 = FUN_100605a0((&DAT_10171390)[*piVar1 * 0x8a],(&DAT_10171388)[param_2 * 0x8a]);
        goto LAB_10007784;
      }
      piVar1 = (int *)(param_1 + 0x14);
      if (*piVar1 != 0) {
        *(undefined1 *)(*piVar1 + 0xc) = 0;
        *(undefined1 *)(param_1 + 0xd8c) = 0;
        *(undefined4 *)(*piVar1 + 4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xd84) = 0xffffffff;
        *(undefined4 *)(*piVar1 + 8) = 0xff000000;
        *(undefined4 *)(param_1 + 0xd88) = 0xff000000;
        *(undefined1 *)(*piVar1 + 0xd) = 0;
        *(undefined1 *)(*piVar1 + 0xe) = *(undefined1 *)(DAT_10170ad0 + 0x95e);
        uVar4 = (*pcVar2)();
        cVar3 = (*extraout_w11_00)(uVar4,param_5);
        if (cVar3 != '\0') {
          FUN_10026dd0(param_1);
          iVar6 = FUN_10007490(param_1,param_3,param_4);
          if (-1 < iVar6) goto LAB_100078d0;
          uVar4 = (*pcVar2)();
          (*extraout_w11_01)(uVar4);
        }
        uVar4 = (*pcVar2)();
        (*extraout_w11_02)(uVar4);
        *piVar1 = 0;
      }
    }
    *(int *)(param_1 + 0xde8) = 0;
    *(undefined4 *)(param_1 + 0xdec) = 0;
    FUN_10132440(*(undefined4 *)(*(int *)(param_1 + 0xd80) + -4));
    *(int *)(param_1 + 0xd80) = 0;
  }
LAB_100078d0:
  FUN_10157a90(auStack_48);
LAB_100078d8:
  *(byte *)(param_1 + 0x2a4) = (byte)~(byte)((uint)iVar6 >> 0x18) >> 7;
  return iVar6;
}

