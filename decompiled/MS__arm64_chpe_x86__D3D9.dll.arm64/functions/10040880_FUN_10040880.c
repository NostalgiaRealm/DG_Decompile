/*
 * FUN_10040880 at 10040880
 * undefined FUN_10040880(void)
 * Address ranges: 10040880-1004094f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10040880(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [16];
  
  local_30 = 0;
  uVar2 = FUN_1003ebe0(*(undefined2 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x18));
  uStack_28 = CONCAT44(*(ushort *)(param_1 + 0xe) - 1,uVar2);
  if (param_2 != -1) {
    puVar3 = (undefined8 *)FUN_1003fab0(param_1,auStack_20,param_2,param_2 + 1);
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

