/*
 * FUN_10014e40 at 10014e40
 * undefined FUN_10014e40(void)
 * Address ranges: 10014e40-1001502b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10014e40(undefined4 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6,char param_7)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short *extraout_w9;
  short *psVar6;
  ulonglong extraout_x10;
  int extraout_w11;
  int iVar7;
  int extraout_w12;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_58;
  undefined8 auStack_50 [2];
  
  local_58 = param_5;
  auStack_50[0] = param_4;
  uVar2 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                       *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  uVar10 = uVar2 & 0xffffffff;
  FUN_10014c78(param_1,uVar10);
  uVar3 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                       *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  uVar9 = uVar3 & 0xffffffff;
  FUN_10014c78(param_1,uVar9);
  iVar8 = (int)uVar2;
  if ((uVar2 & 0x80000000) != 0) {
    iVar8 = (int)uVar3;
  }
  psVar6 = (short *)(param_3 + 0x11);
  if ((param_7 == '\0') || (*psVar6 != *(short *)(param_3 + 5))) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  if ((iVar8 < 0) ||
     (uVar4 = FUN_100145a0(param_3), iVar7 = extraout_w11, psVar6 = extraout_w9, (uVar4 & 1) == 0))
  {
    if (iVar7 != 0) goto LAB_10014f74;
    sVar5 = *psVar6;
  }
  else {
    if (extraout_w11 == 0) {
      uVar4 = extraout_x10 & 0xffffffff;
      if (extraout_w12 != 0) {
        uVar9 = uVar2 & 0xffffffff;
        uVar10 = uVar3 & 0xffffffff;
        uVar3 = uVar2;
      }
      goto LAB_10014fc4;
    }
LAB_10014f74:
    sVar5 = -1;
  }
  uVar4 = FUN_100147a8(param_1,param_2,sVar5,*(undefined1 *)(param_3 + 0x10),
                       *(undefined1 *)(param_3 + 0x13));
  uVar4 = uVar4 & 0xffffffff;
  FUN_10002470(param_2,0x290200100100,uVar4,uVar10,uVar2 >> 0x20,0);
LAB_10014fc4:
  puVar1 = &local_58;
  if (*(char *)(param_3 + 0x10) != '\x01') {
    puVar1 = auStack_50;
  }
  FUN_10002470(param_2,*puVar1,uVar4,uVar9,uVar3 >> 0x20,param_6);
  FUN_10014c48(param_1,uVar9);
  FUN_10014c48(param_1,uVar10);
  return uVar4;
}

