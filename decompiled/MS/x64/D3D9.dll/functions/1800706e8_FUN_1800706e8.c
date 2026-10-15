/*
 * FUN_1800706e8 at 1800706e8
 * uint __fastcall FUN_1800706e8(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4)
 * Address ranges: 1800706e8-180070762
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800706e8(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4)

{
  uint uVar1;
  
  if (param_2[(ulonglong)param_4 + 0xa6] == 0) {
    uVar1 = FUN_1800ec8c0((longlong)param_2,1,'\x01');
    param_2[(ulonglong)param_4 + 0xa6] = uVar1;
    FUN_1800edbe0(param_2,param_3,0x36,(ulonglong)uVar1);
  }
  return param_2[(ulonglong)param_4 + 0xa6];
}

