/*
 * FUN_100d31f0 at 100d31f0
 * undefined FUN_100d31f0(void)
 * Address ranges: 100d31f0-100d32ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d31f0(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  code *extraout_w11;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  bVar6 = false;
  uVar5 = 0;
  do {
    if (bVar6) break;
    iVar1 = param_1 + uVar5 * 4;
    puVar2 = (undefined4 *)((int)&local_40 + uVar5 * 4);
    piVar3 = (int *)(iVar1 + 0xc270);
    *puVar2 = *(undefined4 *)(iVar1 + 0x18);
    if ((int)param_2 == *piVar3) {
      bVar6 = true;
      *piVar3 = 0;
      *puVar2 = 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  if ((int)param_2 == *(int *)(param_1 + 0xc280)) {
    *(undefined4 *)(param_1 + 0xc280) = 0;
    uVar4 = 0;
  }
  else if (!bVar6) {
    return;
  }
  if (*(int *)(param_1 + 0xc270) == 0) {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_10 = 0;
    uStack_8 = 0;
    local_40 = 0;
    local_38 = 0;
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_1 + 0x14),param_2,uVar4);
    (*extraout_w11)(uVar4,4,1,&local_30,&local_40);
  }
  else {
    FUN_10026300(param_1,&local_40,uVar4,0);
  }
  return;
}

