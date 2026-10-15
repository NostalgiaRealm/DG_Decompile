/*
 * _grTextureBufferExt@28_native at 10001f40
 * undefined _grTextureBufferExt@28_native(void)
 * Address ranges: 10001f40-100021bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTextureBufferExt_28_native
               (int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar10 = FUN_1000ae60();
  if (*(char *)(iVar10 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar10 + 0x38);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    uVar13 = FUN_1000b5c0(iVar10);
    if ((((uVar13 & 1) != 0) &&
        (iVar11 = FUN_1000cd68(iVar10), (&DAT_100aa5c1)[iVar11 * 0x18] != '\0')) &&
       (uVar13 = FUN_10009a38(iVar10,param_3,param_4,param_5,param_6), (uVar13 & 1) != 0)) {
      puVar2 = (uint *)(iVar10 + 0xc);
      uVar14 = (ulonglong)*puVar2;
      iVar11 = FUN_10009b30(param_7,param_3 + 1,param_4,param_5,param_6);
      uVar3 = iVar11 + *(int *)((int)uVar14 + param_1 * 0x4e8 + 0x458) + param_2;
      iVar11 = FUN_10009b30(param_7,param_3,param_3,param_5,param_6);
      pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar13 = (ulonglong)uVar3;
      uVar5 = *(uint *)(&DAT_1009fdc8 + param_3 * 4);
      uVar6 = uVar5 >> (ulonglong)(*(byte *)(param_5 + 0x1009fdc3) & 0x1f);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      uVar4 = uVar6;
      if (param_5 < 0) {
        uVar4 = uVar5;
        uVar5 = uVar6;
      }
      uVar6 = (uVar4 | uVar5 << 0x10) >> 0x10;
      uVar4 = uVar4 & 0xffff;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar14 & 0xffffffff,param_1,uVar13 & 0xffffffff,iVar11 + uVar3,uVar6,uVar4,
                      param_6);
      *(uint *)(*puVar2 + 0x1b9) = uVar6;
      *(uint *)(*puVar2 + 0x1bd) = uVar4;
      *(uint *)(*puVar2 + 0x1c1) = uVar3;
      *(uint *)(*puVar2 + 0x1c5) = iVar11 + uVar3;
      *(undefined4 *)(*puVar2 + 0x1c9) = param_6;
      uVar3 = *puVar2;
      if ((*(char *)(uVar3 + 0xe4) == '\x06') && (*(char *)(uVar3 + 0x1f1) != '\0')) {
        (*(code *)PTR_FUN_100a81e8)(uVar3 + 0x12d,0,0,uVar6,uVar4);
        uVar12 = (*pcVar9)(*puVar2,*puVar2 + 0x12d);
        (*extraout_w11_00)(uVar12);
      }
      else {
        *(char *)(uVar3 + 0x1f1) = '\0';
      }
    }
    piVar1 = (int *)(iVar10 + 0x38);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

