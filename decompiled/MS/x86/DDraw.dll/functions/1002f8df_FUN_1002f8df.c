/*
 * FUN_1002f8df at 1002f8df
 * int __thiscall FUN_1002f8df(void * this, RECT * param_1, int * param_2, int * param_3, uint param_4, int * param_5)
 * Address ranges: 1002f8df-1002f9e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1002f8df(void *this,RECT *param_1,int *param_2,int *param_3,uint param_4,int *param_5)

{
  bool bVar1;
  BOOL BVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = -0x7ff8ffa9;
  if (((param_4 & 0xf4000000) == 0 && (param_4 & 0x9000000) != 0x9000000) &&
     (bVar1 = FUN_10032079(param_4,param_5), bVar1)) {
    BVar2 = TryEnterCriticalSection(DAT_1006c254);
    if (BVar2 == 0) {
      FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
    iVar4 = -0x7fffbfff;
    if ((param_4 & 0xf801ef) == 0) {
      piVar3 = param_2;
      if (param_2 == (int *)0x0) {
        piVar3 = this;
      }
      if (((((piVar3[0x6e] & 0x20000U) == (*(uint *)((int)this + 0x1b8) & 0x20000)) &&
           (iVar4 = -0x7789fdc0, (param_4 & 0x1000) == 0)) &&
          ((iVar4 = -0x7789fee8, (param_4 & 0x20000) == 0 ||
           (((param_5[2] == 0xcc0020 || (param_5[2] == 0x42)) || (param_5[2] == 0xff0062)))))) &&
         ((iVar4 = -0x7789ff24, (param_4 & 0x6000) == 0 &&
          (iVar4 = -0x7789fede, (param_4 & 0x40000) == 0)))) {
        iVar4 = FUN_1002f3ab(this,param_1,param_2,param_3,param_4,(int)param_5);
      }
    }
    LeaveCriticalSection(DAT_1006c254);
  }
  return iVar4;
}

