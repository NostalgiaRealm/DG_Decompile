/*
 * FUN_100d0f90 at 100d0f90
 * undefined FUN_100d0f90(void)
 * Address ranges: 100d0f90-100d101f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d0f90(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = -0x7789f794;
  if ((param_2 < *(uint *)(param_1 + -0x24)) && (param_3 - 1U < 4)) {
    uVar2 = FUN_10003770(param_1 + -0x70,param_3);
    if ((uVar2 & 1) != 0) {
      iVar1 = FUN_100d0640(param_1 + -0x70,param_3,param_4,param_5);
      iVar3 = -0x7789f796;
      if (iVar1 != -0x7789f794) {
        iVar3 = iVar1;
      }
    }
  }
  return iVar3;
}

