/*
 * FUN_1000dc88 at 1000dc88
 * undefined FUN_1000dc88(void)
 * Address ranges: 1000dc88-1000de4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000dc88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 extraout_w8;
  code *extraout_w11;
  undefined1 auVar11 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    FUN_10016608(param_2,param_3,param_4,param_5,param_6);
    uVar5 = (ulonglong)uStack_5c;
    iVar2 = *(int *)(param_1 + 0xc);
    uVar8 = (ulonglong)local_50;
    uVar9 = (ulonglong)uStack_4c;
    uVar6 = (ulonglong)uStack_58;
    uVar7 = (ulonglong)uStack_54;
    uVar10 = (ulonglong)local_48;
    if ((((((local_60 != *(int *)(iVar2 + 0x191)) || (uStack_5c != *(uint *)(iVar2 + 0x195))) ||
          (uStack_58 != *(uint *)(iVar2 + 0x199))) ||
         ((uStack_54 != *(uint *)(iVar2 + 0x19d) || (local_50 != *(uint *)(iVar2 + 0x1a1))))) ||
        ((uStack_4c != *(uint *)(iVar2 + 0x1a5) ||
         ((local_48 != *(uint *)(iVar2 + 0x1a9) || (uStack_44 != *(int *)(iVar2 + 0x1ad))))))) ||
       ((local_40 != *(int *)(iVar2 + 0x1b1) || (uStack_3c != *(int *)(iVar2 + 0x1b5))))) {
      auVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_ & 0xffffffff,uVar5 & 0xffffffff,
                      uVar6 & 0xffffffff,uVar7 & 0xffffffff,uVar8 & 0xffffffff,uVar9 & 0xffffffff,
                      uVar10 & 0xffffffff,extraout_w8);
      *(ulonglong *)(iVar2 + 0x199) = CONCAT44(uStack_54,uStack_58);
      *(ulonglong *)(iVar2 + 0x191) = CONCAT44(uStack_5c,local_60);
      *(ulonglong *)(iVar2 + 0x1a9) = CONCAT44(uStack_44,local_48);
      *(ulonglong *)(iVar2 + 0x1a1) = CONCAT44(uStack_4c,local_50);
      *(ulonglong *)(iVar2 + 0x1b1) = CONCAT44(uStack_3c,local_40);
      FUN_1000cba8(param_1);
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3d0) = 0;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

