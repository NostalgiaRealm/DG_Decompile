/*
 * FUN_1000b3a0 at 1000b3a0
 * undefined FUN_1000b3a0(void)
 * Address ranges: 1000b3a0-1000b4d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000b3a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  char cVar5;
  
  iVar1 = *(int *)(*param_1 + param_2 * 4 + 0x1258);
  if (((*(int *)(iVar1 + 0x18) == 3) || (*(int *)(iVar1 + 0x18) == 5)) &&
     (iVar2 = *(int *)(iVar1 + 0x44), iVar2 != 0)) {
    if (((iVar2 == param_1[1]) || (iVar2 == param_1[2])) ||
       ((iVar2 == param_1[3] || ((iVar2 == param_1[4] || (cVar5 = '\0', iVar2 == param_1[5])))))) {
      cVar5 = '\x01';
    }
    if (*(char *)(*param_1 + param_2 + 0xc88) != cVar5) {
      puVar4 = (undefined4 *)(iVar1 + 0x44);
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar3,param_2,0,*puVar4,0,0,0,cVar5);
      *(char *)(*param_1 + param_2 + 0xc88) = cVar5;
    }
  }
  return 0;
}

