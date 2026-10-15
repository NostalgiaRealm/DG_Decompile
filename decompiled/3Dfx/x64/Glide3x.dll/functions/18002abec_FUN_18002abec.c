/*
 * FUN_18002abec at 18002abec
 * undefined __fastcall FUN_18002abec(ulonglong param_1, uint * param_2, longlong * param_3)
 * Address ranges: 18002abec-18002adc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002abec(ulonglong param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_18002aae0(param_1,param_2,param_3);
  uVar1 = FUN_180056854((longlong)param_2,1,'\x01');
  param_2[(param_1 & 0xffffffff) + 0x20] = uVar1;
  uVar2 = param_1 & 0xffffffff;
  if (*param_2 == 0x40) {
    FUN_180057838(param_2,param_3,0x38,(ulonglong)uVar1);
  }
  FUN_180057838(param_2,param_3,0,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_180057838(param_2,param_3,0x38,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_180057838(param_2,param_3,0x34,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_180057838(param_2,param_3,0x33,(ulonglong)param_2[uVar2 + 0x20]);
  return;
}

