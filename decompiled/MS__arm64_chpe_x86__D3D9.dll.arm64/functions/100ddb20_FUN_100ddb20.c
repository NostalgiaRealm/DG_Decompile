/*
 * FUN_100ddb20 at 100ddb20
 * undefined FUN_100ddb20(void)
 * Address ranges: 100ddb20-100ddc63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100ddb20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6,int param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_6 != (undefined4 *)0x0) && (*param_6 = 0, param_7 == 0)) {
    if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar2 == 0) {
        FUN_100071d0(0);
      }
    }
    switch(param_5) {
    case 0:
    case 2:
    case 3:
      uVar3 = FUN_100dd670(param_1,param_2,param_3,param_4,0,0,param_5,param_8,1);
    }
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar3;
}

