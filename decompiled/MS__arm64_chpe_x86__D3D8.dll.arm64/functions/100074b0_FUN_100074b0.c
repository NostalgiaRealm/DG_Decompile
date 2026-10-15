/*
 * FUN_100074b0 at 100074b0
 * undefined FUN_100074b0(void)
 * Address ranges: 100074b0-1000766f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100074b0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6,int param_7,undefined4 param_8,char param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  uint *in_stack_00000010;
  
  iVar7 = -0x7789f794;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar4 = *(int *)(param_1 + 0xb04);
    uVar2 = *(undefined4 *)(param_1 + 0xacc);
    uVar6 = FUN_100042a0(uVar2,iVar4,1,param_2,param_3,1);
    if (((uVar6 & 1) != 0) && ((param_5 == 0 || ((param_7 == 0 && (param_9 == '\0')))))) {
      iVar5 = *(int *)(param_1 + 0xb2c);
      iVar1 = FUN_100036a0(uVar2,iVar5,iVar4,*(undefined4 *)(param_1 + 0xb1c),param_7,param_8,1,
                           param_4,0);
      iVar7 = iVar1;
      if ((-1 < iVar1) &&
         ((((param_5 == 0 ||
            (iVar1 = FUN_10003a80(uVar2,iVar5,iVar4,param_4,0,param_5,param_6,0), iVar7 = iVar1,
            -1 < iVar1)) && (*in_stack_00000010 = 0, iVar7 = iVar1, param_7 == 0)) &&
          (*(int *)(param_1 + 0xb04) == 1)))) {
        uVar2 = FUN_100031e0(param_4);
        auVar8 = FUN_100032d0(param_4);
        uVar3 = FUN_100030d0(param_4,auVar8._8_8_,auVar8._0_8_ & 0xffffffff);
        iVar4 = FUN_10035120(param_2,uVar3);
        uVar3 = FUN_10003360(param_4);
        iVar5 = FUN_10034d10(param_3,uVar3,uVar2);
        *in_stack_00000010 = iVar4 * iVar5;
        iVar7 = -0x7789fe84;
        if ((ulonglong)(uint)(iVar4 * iVar5) <=
            (ulonglong)(&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45]) {
          iVar7 = iVar1;
        }
      }
    }
  }
  return iVar7;
}

