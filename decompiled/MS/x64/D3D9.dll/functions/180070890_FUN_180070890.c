/*
 * FUN_180070890 at 180070890
 * uint __fastcall FUN_180070890(undefined8 param_1, uint * param_2, longlong * param_3)
 * Address ranges: 180070890-180070946
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180070890(undefined8 param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  
  if (param_2[0xc5] == 0) {
    uVar1 = FUN_1800ec8c0((longlong)param_2,1,'\x01');
    param_2[0xc5] = uVar1;
    FUN_1800edbe0(param_2,param_3,0x37,(ulonglong)uVar1);
  }
  return param_2[0xc5];
}

