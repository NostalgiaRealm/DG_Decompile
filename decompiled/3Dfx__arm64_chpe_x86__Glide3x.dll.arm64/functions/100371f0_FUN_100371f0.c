/*
 * FUN_100371f0 at 100371f0
 * undefined FUN_100371f0(void)
 * Address ranges: 100371f0-1003743b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100371f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar11;
  undefined1 auStack_58 [4];
  undefined8 local_54;
  undefined8 uStack_4c;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar8 = (*extraout_w11)(uVar7,param_2);
  bVar3 = *(byte *)(param_1 + 0x12d);
  uStack_4c = 0;
  local_54 = 0;
  uVar9 = FUN_10023de8(iVar8);
  if (((uVar9 & 1) == 0) ||
     ((*(int *)(iVar8 + 0x60) == 0 && ((bVar3 == 0 || (*(char *)(iVar8 + 0x48) != '\0')))))) {
    *(uint *)(param_1 + 0x2c80) = 0;
    *(undefined1 *)(param_1 + 0x32d0) = 1;
    uVar9 = FUN_1001cbb0(param_1,0,param_2,0xff,0,0,auStack_58,1,0);
    if ((uVar9 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x318) + *(uint *)(iVar8 + 0x18);
      iVar10 = 4;
      if (*(int *)(iVar8 + 0x10) != 5) {
        iVar10 = 2;
      }
      if (*(uint *)(iVar8 + 0x24) != 0) {
        iVar6 = local_54._4_4_;
        uVar11 = 0;
        iVar2 = (int)local_54;
        iVar4 = iVar1;
        do {
          FUN_1007e4a0(iVar4,iVar2,*(int *)(iVar8 + 0x20) * iVar10);
          uVar11 = uVar11 + 1;
          iVar2 = iVar6 + iVar2;
          iVar4 = iVar4 + iVar10 * *(int *)(iVar8 + 0x20);
        } while (uVar11 < *(uint *)(iVar8 + 0x24));
      }
      FUN_1001ce28(param_1,0,param_2,0,0,0,0,0,0);
      uVar9 = (ulonglong)*(uint *)(iVar8 + 0x18);
      (*pcVar5)();
      (*extraout_w11_00)(param_1,iVar1,uVar9 & 0xffffffff);
    }
    *(uint *)(param_1 + 0x2c80) = (uint)bVar3;
    *(undefined1 *)(param_1 + 0x32d0) = 1;
  }
  *(byte *)(iVar8 + 0x4a) = *(byte *)(iVar8 + 0x4a) & 0xfd;
  return;
}

