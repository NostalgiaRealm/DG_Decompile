/*
 * FUN_180038708 at 180038708
 * undefined __fastcall FUN_180038708(undefined8 param_1, uint * param_2, longlong * param_3)
 * Address ranges: 180038708-180038810
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038708(undefined8 param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2[0x1b] == 0) && (*param_2 != 0x40)) {
    uVar1 = FUN_1800546f0((longlong)param_2,2,'\0');
    uVar2 = FUN_1800546f0((longlong)param_2,1,'\x01');
    param_2[0x1b] = uVar2;
    FUN_1800556d4(param_2,param_3,0x38,(ulonglong)uVar1);
    FUN_1800556d4(param_2,param_3,0x6c,(ulonglong)param_2[0x1b]);
  }
  return;
}

