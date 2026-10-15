/*
 * FUN_1008c00f at 1008c00f
 * uint __fastcall FUN_1008c00f(int * param_1, uint * param_2, uint param_3, int param_4)
 * Address ranges: 1008c00f-1008c23e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1008c00f(int *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_2 & 0xf;
  if (uVar1 == 5) {
    iVar2 = 1;
  }
  else {
    if (uVar1 != 6) {
      if (uVar1 != 7) {
        return 0;
      }
      uVar1 = FUN_1008beda(param_1,param_2,0,0,0);
      if (((param_3 != 0) && (param_4 == 0)) && (param_3 != uVar1)) {
        FUN_100c2ed2((int)(param_2 + 3),uVar1);
      }
      FUN_100c2e34((int)(param_2 + 3),3,'\0');
      FUN_100c3be1((int *)(param_2 + 3),param_1,0);
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x2010);
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x2010);
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x2010);
      if (param_4 != 0) {
        FUN_10089407(param_1,(int)param_2);
      }
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
      return uVar1;
    }
    iVar2 = 0;
  }
  uVar1 = FUN_1008beda(param_1,param_2,iVar2,param_3,param_4);
  return uVar1;
}

