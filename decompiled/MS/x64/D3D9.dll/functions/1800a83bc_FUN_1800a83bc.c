/*
 * FUN_1800a83bc at 1800a83bc
 * uint __fastcall FUN_1800a83bc(longlong * param_1, undefined4 * param_2, int param_3, uint param_4, int param_5, byte param_6)
 * Address ranges: 1800a83bc-1800a85b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a83bc(longlong *param_1,undefined4 *param_2,int param_3,uint param_4,int param_5,
                  byte param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = param_2 + 4;
  uVar3 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
  uVar2 = 1;
  if (((byte)*param_2 & 0xf) == 5) {
    uVar2 = 5;
  }
  param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6d) + 0x22] = uVar2;
  if ((param_4 == 0) || (uVar4 = param_4, param_5 != param_3)) {
    uVar4 = uVar3;
  }
  uVar5 = (ulonglong)uVar4;
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 3;
  FUN_1800edbe0(puVar1,param_1,0x36,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_1,0x36,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_1,0x48,uVar5);
  if (param_5 != param_3) {
    uVar4 = uVar3;
    if (param_4 != 0) {
      uVar4 = param_4;
    }
    FUN_1800a4434(param_1,(longlong)param_2,uVar4,
                  CONCAT71((int7)(uVar5 >> 8),(param_6 ^ 1) << 3) | 7,uVar3,param_3,param_5);
  }
  if (uVar4 != uVar3) {
    FUN_1800ec960((longlong)puVar1,uVar3);
  }
  return uVar4;
}

