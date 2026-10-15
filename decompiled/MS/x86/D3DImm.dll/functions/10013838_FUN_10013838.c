/*
 * FUN_10013838 at 10013838
 * undefined __fastcall FUN_10013838(float * param_1)
 * Address ranges: 10013838-1001385a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10013838(float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_44 [16];
  
  pfVar2 = param_1;
  pfVar3 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  FUN_10013929(local_44,param_1,'\0');
  return;
}

