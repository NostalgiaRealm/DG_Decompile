/*
 * FUN_1007744b at 1007744b
 * undefined __stdcall FUN_1007744b(int param_1, int * param_2)
 * Address ranges: 1007744b-100774d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007744b(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    FUN_100ada8e(param_2,0,0x1000);
  }
  else {
    uVar1 = 0;
    do {
      param_2[uVar1 * 4] = (int)(float)*(byte *)(param_1 + 2 + uVar1 * 4);
      param_2[uVar1 * 4 + 1] = (int)(float)*(byte *)(param_1 + 1 + uVar1 * 4);
      param_2[uVar1 * 4 + 2] = (int)((float)*(byte *)(param_1 + uVar1 * 4) + 0.0);
      uVar2 = uVar1 + 1;
      param_2[uVar1 * 4 + 3] = (int)(float)*(byte *)(param_1 + 3 + uVar1 * 4);
      uVar1 = uVar2;
    } while (uVar2 < 0x100);
  }
  return;
}

