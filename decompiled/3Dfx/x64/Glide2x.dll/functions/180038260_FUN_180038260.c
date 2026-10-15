/*
 * FUN_180038260 at 180038260
 * undefined __fastcall FUN_180038260(undefined8 param_1, uint * param_2, longlong * param_3)
 * Address ranges: 180038260-180038368
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038260(undefined8 param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2[0x1b] == 0) && (*param_2 != 0x40)) {
    uVar1 = FUN_180054248((longlong)param_2,2,'\0');
    uVar2 = FUN_180054248((longlong)param_2,1,'\x01');
    param_2[0x1b] = uVar2;
    FUN_18005522c(param_2,param_3,0x38,(ulonglong)uVar1);
    FUN_18005522c(param_2,param_3,0x6c,(ulonglong)param_2[0x1b]);
  }
  return;
}

