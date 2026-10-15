/*
 * FUN_1007a236 at 1007a236
 * int __stdcall FUN_1007a236(int param_1, uint param_2, int param_3, int * param_4)
 * Address ranges: 1007a236-1007a2c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007a236(int param_1,uint param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  void *this;
  int *piVar6;
  
  iVar5 = -0x7789f794;
  this = (void *)(param_1 + -0x70);
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar2 = FUN_100025de(param_3);
    iVar4 = extraout_EDX;
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_100025f2(this,extraout_EDX);
      iVar5 = -0x7789f795;
      iVar4 = param_3;
      if ((char)uVar2 != '\0') {
        iVar5 = 0;
      }
    }
    if (-1 < iVar5) {
      piVar3 = (int *)FUN_100031b7(this,iVar4);
      piVar6 = param_4;
      for (iVar4 = 0x35; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar6 = piVar6 + 1;
      }
      param_4[1] = param_2;
      *param_4 = extraout_EDX_00;
      iVar4 = FUN_10002769(this,extraout_EDX_00);
      param_4[0x32] = iVar4;
      cVar1 = FUN_1000272e(param_2);
      if (cVar1 == '\0') {
        param_4[7] = param_4[7] & 0xfeffffff;
      }
    }
  }
  return iVar5;
}

