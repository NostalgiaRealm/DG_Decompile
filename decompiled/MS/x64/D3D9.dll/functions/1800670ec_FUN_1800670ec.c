/*
 * FUN_1800670ec at 1800670ec
 * undefined __fastcall FUN_1800670ec(undefined8 param_1, uint * param_2, longlong * param_3)
 * Address ranges: 1800670ec-18006715d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800670ec(undefined8 param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  
  if (param_2[0x8a] == 0) {
    uVar1 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
    param_2[0x8a] = uVar1;
    FUN_1800edbe0(param_2,param_3,0x2036,(ulonglong)uVar1);
  }
  return;
}

