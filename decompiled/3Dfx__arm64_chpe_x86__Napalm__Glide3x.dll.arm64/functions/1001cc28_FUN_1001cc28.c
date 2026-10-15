/*
 * FUN_1001cc28 at 1001cc28
 * undefined FUN_1001cc28(void)
 * Address ranges: 1001cc28-1001cd9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cc28(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,char param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  code *extraout_w11;
  int extraout_w11_00;
  code *extraout_w11_01;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar5 = (*extraout_w11)(param_1,param_2);
  uVar1 = *(uint *)(iVar5 + 0x18);
  if (((param_3 < uVar1) && (param_4 <= uVar1)) ||
     ((*(uint *)(iVar5 + 0x1c) <= param_3 && (*(uint *)(iVar5 + 0x1c) < param_4)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar2 = *(uint *)(iVar5 + 0x1c);
  if ((uVar2 != uVar1 && !bVar3) &&
     (((param_3 != uVar1 || param_4 != uVar2 ||
       (param_5 != *(int *)(iVar5 + 0x14) || param_6 == '\0')) &&
      (uVar6 = FUN_10024800(iVar5), (uVar6 & 1) == 0)))) {
    if ((*(byte *)(extraout_w11_00 + 0x4a) >> 1 & 1) != 0) {
      FUN_1001c4e0(param_1,param_2,1,0);
      FUN_100364c0(*(undefined4 *)(param_1 + 4),param_2);
    }
    if (param_6 != '\0') {
      (*pcVar4)();
      (*extraout_w11_01)(param_1,param_2);
      *(uint *)(iVar5 + 0x1c) = 0;
      *(uint *)(iVar5 + 0x18) = 0;
    }
  }
  return;
}

