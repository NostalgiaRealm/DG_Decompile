/*
 * FUN_10061f70 at 10061f70
 * undefined FUN_10061f70(void)
 * Address ranges: 10061f70-1006205b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10061f70(undefined8 param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  cVar2 = '\x01';
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar4 = (*extraout_w11)(uVar3);
  if (uVar4 < *(ulonglong *)(param_2 + 2)) {
    if ((param_2[1] != -1) && (cVar2 = FUN_10068fa0(param_2[1] + 4,0), cVar2 == '\0')) {
      return '\0';
    }
    puVar5 = (undefined4 *)(*param_2 + 0x10);
    uVar3 = (*pcVar1)();
    (*extraout_w11_00)(uVar3,*(ulonglong *)(param_2 + 2),*puVar5);
    (*(code *)PTR_FUN_100a8100)(*(undefined4 *)(*param_2 + 0x10),0xffffffff);
  }
  return cVar2;
}

