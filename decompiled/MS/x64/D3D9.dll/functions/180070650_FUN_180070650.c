/*
 * FUN_180070650 at 180070650
 * uint __fastcall FUN_180070650(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4)
 * Address ranges: 180070650-1800706e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180070650(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = (ulonglong)param_4;
  if (param_2[uVar1 + 0xa6] == 0) {
    uVar2 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
    param_2[uVar1 + 0xa6] = uVar2;
    FUN_1800ee208(0xe4,*(byte *)(uVar1 + *(longlong *)(param_2 + 0x40)));
    FUN_1800edbe0(param_2,param_3,0x2036,(ulonglong)param_2[uVar1 + 0xa6]);
  }
  return param_2[uVar1 + 0xa6];
}

