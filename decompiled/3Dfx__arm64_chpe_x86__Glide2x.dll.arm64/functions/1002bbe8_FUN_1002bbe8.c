/*
 * FUN_1002bbe8 at 1002bbe8
 * undefined FUN_1002bbe8(void)
 * Address ranges: 1002bbe8-1002be3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1002bbe8(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_1,param_2);
  if (*(int *)(iVar3 + 0x6c) != 0) {
    puVar5 = (undefined1 *)(iVar3 + 0x7c);
    (*pcVar2)();
    (*extraout_w11_00)(param_1,param_2,*puVar5);
    *(int *)(iVar3 + 0x6c) = 0;
    *(undefined4 *)(iVar3 + 0x70) = 0;
  }
  if ((*(byte *)(iVar3 + 0x82) >> 1 & 1) == 0) {
    iVar4 = iVar3 + 0x34;
    local_50 = param_4;
    uStack_4c = param_5;
    local_48 = param_6;
    uStack_44 = param_7;
    (*(code *)PTR_FUN_1009d208)(iVar4,iVar4,&local_50);
    iVar4 = (*(code *)PTR_FUN_1009d15c)(iVar4,&local_50);
    if (iVar4 == 0) {
      param_3 = 1;
    }
  }
  if ((*(char *)(iVar3 + 0x80) == '\0') || (*(char *)(iVar3 + 0x7e) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((*(int *)(&DAT_10096e80 + *(int *)(iVar3 + 0x5c) * 4) != *(int *)(iVar3 + 8)) &&
       (*(int *)(&DAT_10096e80 + *(int *)(iVar3 + 0x5c) * 4) != *(int *)(iVar3 + 0xc))) ||
      ((*(char *)(iVar3 + 0x7d) != '\0' &&
       ((((iVar4 = *(int *)(param_1 + 4), *(int *)(iVar4 + 0x2a80) != 0 ||
          (*(int *)(iVar4 + 0x2c5c) != 0)) || (*(int *)(iVar4 + 0x2c1c) != 0)) ||
        (*(int *)(iVar4 + 0x2c48) != 7)))))) ||
     ((((*(byte *)(iVar3 + 0x82) >> 1 & 1) != 0 || (bVar1)) ||
      ((param_2 == 0 ||
       (((*(char *)(param_1 + 0x124) != '\0' || (*(char *)(param_1 + 0x125) != '\0')) ||
        (**(char **)(*(int *)(param_1 + 4) + 0x3170) != '\0')))))))) {
    uVar6 = 0;
    FUN_1002b830(param_1,param_2,param_3,param_8);
  }
  else {
    uVar6 = 1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) | 1;
  }
  return uVar6;
}

