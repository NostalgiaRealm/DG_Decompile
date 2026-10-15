/*
 * FUN_100701b0 at 100701b0
 * bool __stdcall FUN_100701b0(int param_1, int * param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 100701b0-10070220
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100701b0(int param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1;
  if ((((*(char *)(param_1 + 0xca + param_3) != '\x02') || (param_3 != 7)) ||
      (piVar1 = (int *)(param_1 + 0x10), *(char *)(*piVar1 + 0x4a6c) != '\x01')) ||
     (param_1._0_1_ = '\x01', *(char *)(*piVar1 + 0x4a6d) != '\x01')) {
    param_1._0_1_ = '\0';
  }
  uVar3 = FUN_10068555(param_2,iVar2,param_3 | 0x410100,param_4,param_5,
                       *(char *)(iVar2 + 0xda + param_3),'\0',(char)param_1);
  *(uint *)(iVar2 + 0xec + param_3 * 4) = uVar3;
  return uVar3 == (param_3 | 0x410100);
}

