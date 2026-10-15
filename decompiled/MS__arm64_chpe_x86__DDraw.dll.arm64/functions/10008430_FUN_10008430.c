/*
 * FUN_10008430 at 10008430
 * undefined FUN_10008430(void)
 * Address ranges: 10008430-100084e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10008430(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong extraout_x1;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [16];
  
  local_30 = 0;
  uVar2 = FUN_10007228(param_1);
  uStack_28 = CONCAT44(*(ushort *)(param_1 + 0xe) - 1,uVar2);
  if ((int)extraout_x1 != -1) {
    puVar3 = (undefined8 *)
             FUN_100075f8(param_1,auStack_20,extraout_x1 & 0xffffffff,(int)extraout_x1 + 1);
    uStack_28 = puVar3[1];
    local_30 = *puVar3;
  }
  puVar5 = (undefined4 *)(param_1 + 0x10);
  puVar4 = (undefined4 *)(param_1 + 0x20);
  puVar6 = (undefined4 *)(param_1 + 0x70);
  puVar7 = (undefined4 *)(param_1 + 0x6c);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar2,*puVar7,*puVar6,*puVar4,*puVar5,&local_30);
  return uVar1;
}

