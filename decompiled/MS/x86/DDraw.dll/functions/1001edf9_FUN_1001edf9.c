/*
 * FUN_1001edf9 at 1001edf9
 * uint __fastcall FUN_1001edf9(int * param_1, uint * param_2, uint param_3, int param_4)
 * Address ranges: 1001edf9-1001f028
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001edf9(int *param_1,uint *param_2,uint param_3,int param_4)

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
      uVar1 = FUN_1001ecc4(param_1,param_2,0,0,0);
      if (((param_3 != 0) && (param_4 == 0)) && (param_3 != uVar1)) {
        FUN_10056a5d((int)(param_2 + 3),uVar1);
      }
      FUN_100569bf((int)(param_2 + 3),3,'\0');
      FUN_100575ba((int *)(param_2 + 3),param_1,0);
      FUN_100575ba((int *)(param_2 + 3),param_1,0x2010);
      FUN_100575ba((int *)(param_2 + 3),param_1,0x2010);
      FUN_100575ba((int *)(param_2 + 3),param_1,0x2010);
      if (param_4 != 0) {
        FUN_1001c1f1(param_1,(int)param_2);
      }
      FUN_100575ba((int *)(param_2 + 3),param_1,0x36);
      return uVar1;
    }
    iVar2 = 0;
  }
  uVar1 = FUN_1001ecc4(param_1,param_2,iVar2,param_3,param_4);
  return uVar1;
}

