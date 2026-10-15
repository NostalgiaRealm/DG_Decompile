/*
 * _grTextureAuxBufferExt@28_native at 10002190
 * undefined _grTextureAuxBufferExt@28_native(void)
 * Address ranges: 10002190-1000239b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTextureAuxBufferExt_28_native
               (int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
               undefined4 param_7)

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
  
  iVar8 = FUN_100093b8();
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
    if (((((param_4 < 9 && param_3 < 9) && param_6 < 0x10) && (param_5 + 3U < 7)) &&
        (uVar10 = FUN_10009ae0(iVar8), (uVar10 & 1) != 0)) &&
       (iVar9 = FUN_1000ae88(iVar8), (&DAT_100a23f1)[iVar9 * 0x18] != '\0')) {
      puVar2 = (uint *)(iVar8 + 0xc);
      uVar10 = (ulonglong)*puVar2;
      iVar8 = FUN_10008338(param_7,param_3 + 1,param_4,param_5,param_6);
      param_2 = iVar8 + *(int *)((int)uVar10 + param_1 * 0x4e8 + 0x31c) + param_2;
      iVar8 = FUN_10008338(param_7,param_3,param_3,param_5,param_6);
      uVar4 = *(uint *)(&DAT_100997a8 + param_3 * 4);
      uVar5 = uVar4 >> (ulonglong)(*(byte *)(param_5 + 0x100997a3) & 0x1f);
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
      *(uint *)(*puVar2 + 0x16a) = uVar5;
      *(uint *)(*puVar2 + 0x16e) = uVar3 & 0xffff;
      *(int *)(*puVar2 + 0x172) = param_2;
      *(int *)(*puVar2 + 0x176) = iVar8 + param_2;
      *(uint *)(*puVar2 + 0x17a) = param_6;
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

