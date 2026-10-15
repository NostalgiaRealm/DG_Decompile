/*
 * _grTextureAuxBufferExt@28_native at 100021d0
 * undefined _grTextureAuxBufferExt@28_native(void)
 * Address ranges: 100021d0-100023db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTextureAuxBufferExt_28_native
               (int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  code *extraout_w11;
  
  iVar8 = FUN_1000ae60();
  if (*(char *)(iVar8 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar8 + 0x38);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    uVar10 = FUN_10009a38(iVar8,param_3,param_4,param_5,param_6);
    if ((((uVar10 & 1) != 0) && (uVar10 = FUN_1000b5c0(iVar8), (uVar10 & 1) != 0)) &&
       (iVar9 = FUN_1000cd68(iVar8), (&DAT_100aa5c1)[iVar9 * 0x18] != '\0')) {
      puVar2 = (uint *)(iVar8 + 0xc);
      uVar10 = (ulonglong)*puVar2;
      iVar8 = FUN_10009b30(param_7,param_3 + 1,param_4,param_5,param_6);
      param_2 = iVar8 + *(int *)((int)uVar10 + param_1 * 0x4e8 + 0x458) + param_2;
      iVar8 = FUN_10009b30(param_7,param_3,param_3,param_5,param_6);
      uVar4 = *(uint *)(&DAT_1009fdc8 + param_3 * 4);
      uVar5 = uVar4 >> (ulonglong)(*(byte *)(param_5 + 0x1009fdc3) & 0x1f);
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      if (param_5 < 0) {
        uVar3 = uVar4;
        uVar4 = uVar5;
      }
      uVar5 = (uVar3 | uVar4 << 0x10) >> 0x10;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar10 & 0xffffffff,param_1,param_2,iVar8 + param_2,uVar5,uVar3 & 0xffff,
                      param_6);
      *(uint *)(*puVar2 + 0x1cd) = uVar5;
      *(uint *)(*puVar2 + 0x1d1) = uVar3 & 0xffff;
      *(int *)(*puVar2 + 0x1d5) = param_2;
      *(int *)(*puVar2 + 0x1d9) = iVar8 + param_2;
      *(undefined4 *)(*puVar2 + 0x1dd) = param_6;
    }
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

