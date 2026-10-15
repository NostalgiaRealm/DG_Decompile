/*
 * FUN_1006db40 at 1006db40
 * undefined FUN_1006db40(void)
 * Address ranges: 1006db40-1006dc6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006db40(void)

{
  short *psVar1;
  short sVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int in_w4;
  undefined8 *in_w5;
  code *extraout_w11;
  uint uVar9;
  int iVar10;
  
  uVar4 = DAT_100acbc0;
  in_w5[1] = 0;
  *in_w5 = 0;
  in_w5[3] = 0;
  in_w5[2] = 0;
  iVar10 = 1;
  in_w5[5] = 0;
  in_w5[4] = 0;
  in_w5[7] = 0;
  in_w5[6] = 0;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  in_w5[9] = 0;
  in_w5[8] = 0;
  in_w5[0xb] = 0;
  in_w5[10] = 0;
  in_w5[0xd] = 0;
  in_w5[0xc] = 0;
  in_w5[0xe] = 0;
  uVar9 = 0;
  do {
    if (iVar10 == 0) goto LAB_1006dc44;
    psVar1 = (short *)(in_w4 + uVar9 * 2);
    sVar2 = *psVar1;
    if (sVar2 != 0) {
      uVar5 = FUN_10081780(uVar4,sVar2);
      iVar6 = FUN_100817e8(uVar4,*psVar1);
      if (iVar6 != 0) {
        uVar7 = (*pcVar3)();
        iVar8 = (*extraout_w11)(uVar7,iVar6,uVar5,0);
        if (-1 < iVar8) {
          FUN_10081dc0(iVar6);
          goto LAB_1006dc34;
        }
      }
      FUN_10081dc0(iVar6);
      iVar10 = 0;
    }
LAB_1006dc34:
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x1e);
  if (iVar10 == 0) {
LAB_1006dc44:
    FUN_1006dc70();
  }
  return iVar10;
}

