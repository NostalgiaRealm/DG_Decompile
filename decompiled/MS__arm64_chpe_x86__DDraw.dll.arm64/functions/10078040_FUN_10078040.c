/*
 * FUN_10078040 at 10078040
 * undefined FUN_10078040(void)
 * Address ranges: 10078040-1007813f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10078040(undefined8 param_1,int *param_2,char param_3)

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
  if (uVar4 < *(ulonglong *)(param_2 + 4)) {
    if ((param_2[1] != -1) && (cVar2 = FUN_1007cfb0(param_2[1] + 4,0), cVar2 == '\0')) {
      return '\0';
    }
    if (param_3 != '\0') {
      puVar5 = (undefined4 *)(*param_2 + 0x10);
      uVar3 = (*pcVar1)();
      (*extraout_w11_00)(uVar3,*(ulonglong *)(param_2 + 4),*puVar5);
      (*(code *)PTR_FUN_100ba168)(*(undefined4 *)(*param_2 + 0x10),0xffffffff);
    }
  }
  return cVar2;
}

