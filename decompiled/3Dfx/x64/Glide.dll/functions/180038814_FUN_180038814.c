/*
 * FUN_180038814 at 180038814
 * undefined __fastcall FUN_180038814(ulonglong param_1, uint * param_2, longlong * param_3)
 * Address ranges: 180038814-1800389f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038814(ulonglong param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_180038708(param_1,param_2,param_3);
  uVar1 = FUN_1800546f0((longlong)param_2,1,'\x01');
  param_2[(param_1 & 0xffffffff) + 0x20] = uVar1;
  uVar2 = param_1 & 0xffffffff;
  if (*param_2 == 0x40) {
    FUN_1800556d4(param_2,param_3,0x38,(ulonglong)uVar1);
  }
  FUN_1800556d4(param_2,param_3,0,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_1800556d4(param_2,param_3,0x38,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_1800556d4(param_2,param_3,0x34,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_1800556d4(param_2,param_3,0x33,(ulonglong)param_2[uVar2 + 0x20]);
  return;
}

