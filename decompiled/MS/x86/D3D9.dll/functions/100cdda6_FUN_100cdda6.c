/*
 * FUN_100cdda6 at 100cdda6
 * undefined4 __stdcall FUN_100cdda6(undefined4 param_1, int param_2, undefined4 param_3, uint param_4, int * param_5, int * param_6)
 * Address ranges: 100cdda6-100cde06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100cdda6(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int *param_5,
            int *param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_5[1] != 0) {
    do {
      uVar1 = *(uint *)(*param_5 + uVar4 * 0xc);
      if ((uVar1 <= param_4) && (param_4 < *(int *)(*param_5 + 4 + uVar4 * 0xc) + uVar1)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_5[1]);
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    if (*param_6 != 0) {
      return uVar3;
    }
    puVar2 = *(undefined4 **)(param_2 + uVar4 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = (**(code **)*puVar2)(param_1,param_3,param_6);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return uVar3;
}

