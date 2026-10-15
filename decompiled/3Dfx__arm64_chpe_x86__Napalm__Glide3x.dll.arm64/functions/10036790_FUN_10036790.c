/*
 * FUN_10036790 at 10036790
 * undefined FUN_10036790(void)
 * Address ranges: 10036790-10036aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036790(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 extraout_w11;
  code *extraout_w11_00;
  int extraout_w12;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auStack_58 [4];
  undefined8 local_54;
  undefined8 uStack_4c;
  
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar7 = (*extraout_w11_00)(uVar6,param_2);
  uVar8 = FUN_10036710(param_1,param_2,param_3,param_4);
  if ((uVar8 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x2b4c);
    if (((*(char *)(iVar7 + 0x48) == '\0') &&
        (iVar11 = *(int *)(iVar7 + 0x10), iVar11 != 5 && iVar11 != 8)) ||
       (iVar11 = *(int *)(iVar7 + 0x10), iVar11 != 5 && iVar11 != 8)) {
      iVar11 = 2;
    }
    else {
      iVar11 = 4;
    }
    uVar8 = FUN_10024800(iVar7);
    if (((uVar8 & 1) == 0) ||
       (((*(int *)(&DAT_100a03f0 + *(int *)(iVar7 + 0x5c) * 4) == *(int *)(iVar7 + 8) &&
         (*(int *)(iVar7 + 0x60) == 0)) &&
        ((*(char *)(iVar7 + 0x7d) == '\0' && ((iVar3 == 0 || (extraout_w12 != 0)))))))) {
      *(undefined4 *)(param_1 + 0x2dd0) = 0;
      uStack_4c = 0;
      local_54 = 0;
      *(undefined1 *)(param_1 + 0x3650) = 1;
      *(uint *)(param_1 + 0x2b1c) = *(uint *)(param_1 + 0x2b1c) | 0x80;
      uVar8 = FUN_1001d1b8(param_1,1,param_2,0xff,0,0,auStack_58,1,extraout_w11);
      if ((uVar8 & 1) != 0) {
        uVar9 = param_4 - param_3;
        iVar1 = *(int *)(param_1 + 0x454) + param_3;
        if (uVar9 != 0) {
          iVar5 = local_54._4_4_;
          iVar2 = (int)local_54;
          do {
            uVar4 = *(int *)(iVar7 + 0x28) * iVar11;
            if (uVar9 <= uVar4) {
              uVar4 = uVar9;
            }
            FUN_10083b40(iVar2,iVar1,uVar4);
            iVar2 = iVar5 + iVar2;
            iVar1 = uVar4 + iVar1;
            uVar9 = uVar9 - uVar4;
          } while (uVar9 != 0);
        }
        if ((param_3 != *(int *)(iVar7 + 0x18)) || (uVar10 = 0, param_4 != *(int *)(iVar7 + 0x1c)))
        {
          uVar10 = 1;
        }
        FUN_1001d430(param_1,1,param_2,uVar10,0,0,*(undefined4 *)(iVar7 + 0x28),
                     *(undefined4 *)(iVar7 + 0x2c),0);
        FUN_1001c4e0(*(undefined4 *)(param_1 + 0x365c),param_2,uVar10,0);
      }
      *(uint *)(param_1 + 0x2b1c) = *(uint *)(param_1 + 0x2b1c) & 0x7f;
      *(int *)(param_1 + 0x2dd0) = iVar3;
      *(undefined1 *)(param_1 + 0x3650) = 1;
    }
  }
  return;
}

