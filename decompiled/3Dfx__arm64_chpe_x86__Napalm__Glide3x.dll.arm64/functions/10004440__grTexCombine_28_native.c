/*
 * _grTexCombine@28_native at 10004440
 * undefined _grTexCombine@28_native(void)
 * Address ranges: 10004440-1000478f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexCombine_28_native
               (ulonglong param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  int extraout_w15;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  
  iVar4 = (int)param_1;
  iVar8 = FUN_1000ae60(param_1,param_5,param_7);
  if (*(char *)(iVar8 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar8 + 0x38);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar4 < *(int *)(*(int *)(iVar8 + 0x1c) + 0x797)) {
      FUN_100166e8(param_4 & 0xffffffff);
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      piVar2 = (int *)(extraout_w15 + 0xc);
      uVar10 = (ulonglong)local_70;
      uVar11 = (ulonglong)uStack_6c;
      uVar14 = (ulonglong)local_60;
      uVar15 = (ulonglong)uStack_5c;
      uVar12 = (ulonglong)uStack_68;
      uVar13 = (ulonglong)uStack_64;
      iVar3 = *piVar2 + iVar4 * 0x9d;
      if (((((((local_70 != *(uint *)(iVar3 + 0x1f6)) || (uStack_6c != *(uint *)(iVar3 + 0x1fa))) ||
             (uStack_68 != *(uint *)(iVar3 + 0x1fe))) ||
            ((uStack_64 != *(uint *)(iVar3 + 0x202) || (local_60 != *(uint *)(iVar3 + 0x206))))) ||
           ((uStack_5c != *(uint *)(iVar3 + 0x20a) ||
            ((local_58 != *(int *)(iVar3 + 0x20e) || (iStack_54 != *(int *)(iVar3 + 0x212))))))) ||
          (local_50 != *(int *)(iVar3 + 0x216))) || (iStack_4c != *(int *)(iVar3 + 0x21a))) {
        uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar9,param_1 & 0xffffffff,uVar10 & 0xffffffff,uVar11 & 0xffffffff,
                        uVar12 & 0xffffffff,uVar13 & 0xffffffff,uVar14 & 0xffffffff,
                        uVar15 & 0xffffffff,extraout_w8);
        *(ulonglong *)(iVar3 + 0x1fe) = CONCAT44(uStack_64,uStack_68);
        *(ulonglong *)(iVar3 + 0x1f6) = CONCAT44(uStack_6c,local_70);
        *(ulonglong *)(iVar3 + 0x20e) = CONCAT44(iStack_54,local_58);
        *(ulonglong *)(iVar3 + 0x206) = CONCAT44(uStack_5c,local_60);
        *(ulonglong *)(iVar3 + 0x216) = CONCAT44(iStack_4c,local_50);
      }
      FUN_100166e8(param_2,param_3,param_6);
      uVar10 = (ulonglong)local_70;
      uVar11 = (ulonglong)uStack_6c;
      uVar14 = (ulonglong)local_60;
      uVar15 = (ulonglong)uStack_5c;
      iVar4 = *piVar2 + iVar4 * 0x9d;
      uVar12 = (ulonglong)uStack_68;
      uVar13 = (ulonglong)uStack_64;
      if (((((local_70 != *(uint *)(iVar4 + 0x21e)) || (uStack_6c != *(uint *)(iVar4 + 0x222))) ||
           (uStack_68 != *(uint *)(iVar4 + 0x226))) ||
          (((uStack_64 != *(uint *)(iVar4 + 0x22a) || (local_60 != *(uint *)(iVar4 + 0x22e))) ||
           ((uStack_5c != *(uint *)(iVar4 + 0x232) ||
            ((local_58 != *(int *)(iVar4 + 0x236) || (iStack_54 != *(int *)(iVar4 + 0x23a)))))))))
         || ((local_50 != *(int *)(iVar4 + 0x23e) || (iStack_4c != *(int *)(iVar4 + 0x242))))) {
        uVar9 = (*pcVar7)();
        (*extraout_w11_00)(uVar9,param_1 & 0xffffffff,uVar10 & 0xffffffff,uVar11 & 0xffffffff,
                           uVar12 & 0xffffffff,uVar13 & 0xffffffff,uVar14 & 0xffffffff,
                           uVar15 & 0xffffffff,extraout_w8_00);
        *(ulonglong *)(iVar4 + 0x226) = CONCAT44(uStack_64,uStack_68);
        *(ulonglong *)(iVar4 + 0x21e) = CONCAT44(uStack_6c,local_70);
        *(ulonglong *)(iVar4 + 0x236) = CONCAT44(iStack_54,local_58);
        *(ulonglong *)(iVar4 + 0x22e) = CONCAT44(uStack_5c,local_60);
        *(ulonglong *)(iVar4 + 0x23e) = CONCAT44(iStack_4c,local_50);
      }
      FUN_1000cba8(iVar8);
      *(undefined4 *)(*piVar2 + 0x3d0) = 0;
    }
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

