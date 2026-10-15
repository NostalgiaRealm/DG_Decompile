/*
 * FUN_100374c0 at 100374c0
 * undefined FUN_100374c0(void)
 * Address ranges: 100374c0-100377cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100374c0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 extraout_w11;
  code *extraout_w11_00;
  int extraout_w12;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_58 [4];
  undefined8 local_54;
  undefined8 uStack_4c;
  
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar7 = (*extraout_w11_00)(uVar6,param_2);
  uVar8 = FUN_10037440(param_1,param_2,param_3,param_4);
  if ((uVar8 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x2a10);
    iVar9 = 4;
    if (*(int *)(iVar7 + 0x10) != 5) {
      iVar9 = 2;
    }
    uVar8 = FUN_10023de8(iVar7);
    if (((uVar8 & 1) == 0) ||
       ((((*(int *)(&DAT_10099cb0 + *(int *)(iVar7 + 0x5c) * 4) == *(int *)(iVar7 + 8) &&
          (*(int *)(iVar7 + 0x60) == 0)) && (*(char *)(iVar7 + 0x7d) == '\0')) &&
        ((iVar3 == 0 || (extraout_w12 != 0)))))) {
      *(undefined4 *)(param_1 + 0x2c80) = 0;
      uStack_4c = 0;
      local_54 = 0;
      *(undefined1 *)(param_1 + 0x32d0) = 1;
      *(uint *)(param_1 + 0x29e0) = *(uint *)(param_1 + 0x29e0) | 0x80;
      uVar8 = FUN_1001cbb0(param_1,1,param_2,0xff,0,0,auStack_58,1,extraout_w11);
      if ((uVar8 & 1) != 0) {
        uVar10 = param_4 - param_3;
        iVar1 = *(int *)(param_1 + 0x318) + param_3;
        if (uVar10 != 0) {
          iVar5 = local_54._4_4_;
          iVar2 = (int)local_54;
          do {
            uVar4 = *(int *)(iVar7 + 0x28) * iVar9;
            if (uVar10 <= uVar4) {
              uVar4 = uVar10;
            }
            FUN_1007e4a0(iVar2,iVar1,uVar4);
            iVar2 = iVar5 + iVar2;
            iVar1 = uVar4 + iVar1;
            uVar10 = uVar10 - uVar4;
          } while (uVar10 != 0);
        }
        if ((param_3 != *(int *)(iVar7 + 0x18)) || (uVar11 = 0, param_4 != *(int *)(iVar7 + 0x1c)))
        {
          uVar11 = 1;
        }
        FUN_1001ce28(param_1,1,param_2,uVar11,0,0,*(undefined4 *)(iVar7 + 0x28),
                     *(undefined4 *)(iVar7 + 0x2c),0);
        FUN_1001bf18(*(undefined4 *)(param_1 + 0x32dc),param_2,uVar11,0);
      }
      *(uint *)(param_1 + 0x29e0) = *(uint *)(param_1 + 0x29e0) & 0x7f;
      *(int *)(param_1 + 0x2c80) = iVar3;
      *(undefined1 *)(param_1 + 0x32d0) = 1;
    }
  }
  return;
}

