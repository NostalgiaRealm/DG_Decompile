/*
 * FUN_10090d88 at 10090d88
 * int __stdcall FUN_10090d88(int param_1, uint param_2, int param_3, int * param_4)
 * Address ranges: 10090d88-10090e38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10090d88(int param_1,uint param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_ECX;
  int iVar4;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  int iVar5;
  int *piVar6;
  
  this = (void *)(param_1 + -0x70);
  iVar5 = -0x7789f794;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar2 = FUN_100026b9(param_3);
    iVar4 = extraout_ECX;
    this_01 = this_00;
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_100026d2(this_00,extraout_ECX);
      iVar5 = -0x7789f795;
      iVar4 = param_3;
      this_01 = this;
      if ((char)uVar2 != '\0') {
        iVar5 = 0;
      }
    }
    if (-1 < iVar5) {
      piVar3 = (int *)FUN_100035d8(this_01,iVar4);
      piVar6 = param_4;
      for (iVar4 = 0x4c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar6 = piVar6 + 1;
      }
      FUN_10090598(this_02,param_2,(int)param_4);
      *param_4 = param_3;
      iVar4 = FUN_100028d5(this,param_3);
      param_4[0x32] = iVar4;
      cVar1 = FUN_1000287f(param_2);
      if (cVar1 == '\0') {
        param_4[7] = param_4[7] & 0xfeffffff;
        param_4[0x35] = param_4[0x35] & 0xfffffff7;
        param_4[0x36] = 0;
      }
    }
  }
  return iVar5;
}

