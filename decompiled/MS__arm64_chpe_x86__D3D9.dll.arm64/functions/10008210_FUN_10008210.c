/*
 * FUN_10008210 at 10008210
 * undefined FUN_10008210(void)
 * Address ranges: 10008210-100083d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10008210(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6,int param_7,undefined4 param_8,char param_9)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  uint *in_stack_00000010;
  
  iVar9 = -0x7789f794;
  if ((param_2 != 0) && (param_3 != 0)) {
    piVar1 = (int *)(param_1 + 0xdc8);
    iVar3 = *piVar1;
    uVar4 = *(undefined4 *)(param_1 + 0xd90);
    uVar8 = FUN_10004be0(uVar4,iVar3,1,param_2,param_3,1);
    if (((uVar8 & 1) != 0) && ((param_5 == 0 || ((param_7 == 0 && (param_9 == '\0')))))) {
      piVar2 = (int *)(param_1 + 0xdf0);
      iVar3 = FUN_10003ae0(uVar4,*piVar2,iVar3,*(undefined4 *)(param_1 + 0xde0),param_7,param_8,1,
                           param_4,0);
      iVar9 = iVar3;
      if ((-1 < iVar3) &&
         ((((param_5 == 0 ||
            (iVar3 = FUN_10004200(*(undefined4 *)(param_1 + 0xd90),*piVar2,*piVar1,param_4,0,param_5
                                  ,param_6,0), iVar9 = iVar3, -1 < iVar3)) &&
           (*in_stack_00000010 = 0, iVar9 = iVar3, param_7 == 0)) && (*piVar1 == 1)))) {
        uVar4 = FUN_100034b0(param_4);
        auVar10 = FUN_100035f0(param_4);
        uVar5 = FUN_10003300(param_4,auVar10._8_8_,auVar10._0_8_ & 0xffffffff);
        iVar6 = FUN_1003ef60(param_2,uVar5);
        uVar5 = FUN_100036b0(param_4);
        iVar7 = FUN_1003ebe0(param_3,uVar5,uVar4);
        *in_stack_00000010 = iVar6 * iVar7;
        iVar9 = -0x7789fe84;
        if ((ulonglong)(uint)(iVar6 * iVar7) <= (ulonglong)(&DAT_10171578)[*piVar2 * 0x45]) {
          iVar9 = iVar3;
        }
      }
    }
  }
  return iVar9;
}

