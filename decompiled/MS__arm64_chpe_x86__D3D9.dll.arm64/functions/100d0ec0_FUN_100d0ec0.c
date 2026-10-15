/*
 * FUN_100d0ec0 at 100d0ec0
 * undefined FUN_100d0ec0(void)
 * Address ranges: 100d0ec0-100d0f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d0ec0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_10006cb0(param_1 + -0x70,param_2,param_3,param_4,param_5,param_6);
  if ((-1 < iVar2) && (param_7 != (undefined4 *)0x0)) {
    if (param_6 == 1) {
      iVar1 = 0x10170f7c;
      if (param_3 == 2) {
        iVar1 = 0x10170f88;
      }
      uVar3 = *(undefined4 *)(iVar1 + param_2 * 0x20);
    }
    else {
      uVar3 = 1;
    }
    *param_7 = uVar3;
  }
  return iVar2;
}

