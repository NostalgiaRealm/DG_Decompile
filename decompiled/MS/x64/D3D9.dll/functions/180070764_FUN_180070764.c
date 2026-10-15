/*
 * FUN_180070764 at 180070764
 * uint __fastcall FUN_180070764(undefined8 param_1, uint * param_2, longlong * param_3)
 * Address ranges: 180070764-18007088f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180070764(undefined8 param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  
  if (param_2[0xc4] == 0) {
    uVar1 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
    param_2[0xc4] = uVar1;
    FUN_1800ee208(0xe4,*(byte *)(*(longlong *)(param_2 + 0x40) + 0x144));
    FUN_1800edbe0(param_2,param_3,0,(ulonglong)param_2[0xc4]);
    FUN_1800edbe0(param_2,param_3,0x38,(ulonglong)param_2[0xc4]);
  }
  return param_2[0xc4];
}

