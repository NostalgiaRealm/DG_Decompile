/*
 * FUN_10028afc at 10028afc
 * undefined __fastcall FUN_10028afc(float * param_1)
 * Address ranges: 10028afc-10028b1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10028afc(float *param_1)

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
  FUN_10028b85(local_44,param_1,'\0');
  return;
}

