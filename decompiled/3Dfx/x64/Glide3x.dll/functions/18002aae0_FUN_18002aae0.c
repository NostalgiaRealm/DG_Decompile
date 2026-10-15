/*
 * FUN_18002aae0 at 18002aae0
 * undefined __fastcall FUN_18002aae0(undefined8 param_1, uint * param_2, longlong * param_3)
 * Address ranges: 18002aae0-18002abe8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002aae0(undefined8 param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2[0x1b] == 0) && (*param_2 != 0x40)) {
    uVar1 = FUN_180056854((longlong)param_2,2,'\0');
    uVar2 = FUN_180056854((longlong)param_2,1,'\x01');
    param_2[0x1b] = uVar2;
    FUN_180057838(param_2,param_3,0x38,(ulonglong)uVar1);
    FUN_180057838(param_2,param_3,0x6c,(ulonglong)param_2[0x1b]);
  }
  return;
}

