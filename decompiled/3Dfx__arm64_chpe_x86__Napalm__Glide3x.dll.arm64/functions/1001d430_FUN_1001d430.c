/*
 * FUN_1001d430 at 1001d430
 * undefined FUN_1001d430(void)
 * Address ranges: 1001d430-1001d533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1001d430(int param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  code *extraout_w11;
  
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar5 = (*extraout_w11)(uVar4,param_3);
  piVar1 = (int *)(iVar5 + (param_2 + 0x19) * 4);
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    *piVar1 = iVar2 + -1;
    if ((*(int *)(iVar5 + 100) == 0) && (*(int *)(iVar5 + 0x68) == 0)) {
      bVar3 = FUN_1001c888(*(undefined4 *)(param_1 + 0x365c),param_3,param_4,param_5,param_6,param_7
                           ,param_8,param_9);
      *(byte *)(iVar5 + 0x82) = *(byte *)(iVar5 + 0x82) & 0xfc | bVar3;
    }
    uVar6 = 1;
  }
  return uVar6;
}

