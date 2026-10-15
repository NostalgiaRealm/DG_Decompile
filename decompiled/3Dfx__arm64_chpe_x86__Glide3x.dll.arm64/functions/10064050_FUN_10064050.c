/*
 * FUN_10064050 at 10064050
 * undefined FUN_10064050(void)
 * Address ranges: 10064050-10064163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064050(int param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar9;
  int local_60;
  code *local_5c;
  code *pcStack_58;
  undefined8 local_50;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_5c = FUN_10090af0;
  pcStack_58 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  while( true ) {
    local_60 = 0;
    uVar9 = 0;
    iVar3 = *(int *)(param_1 + 0x910) * 8;
    local_50 = CONCAT44(iVar3 + 8,iVar3);
    uVar7 = (*pcVar6)();
    iVar8 = (*extraout_w11)(uVar7,0,&local_50,&local_60);
    if (-1 < iVar8) {
      puVar1 = (ulonglong *)(iVar3 + local_60);
      do {
        uVar9 = *puVar1;
        uVar2 = uVar9;
        if (uVar9 == 0) {
          uVar2 = 0;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(puVar1),0x10);
        if (bVar5) {
          *puVar1 = uVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      local_50 = 0;
      uVar7 = (*pcStack_58)();
      (*extraout_w11_00)(uVar7,0,&local_50);
    }
    if (param_2 <= uVar9) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  return;
}

