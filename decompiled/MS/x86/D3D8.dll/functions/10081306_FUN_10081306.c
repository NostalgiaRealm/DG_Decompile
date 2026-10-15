/*
 * FUN_10081306 at 10081306
 * undefined4 __stdcall FUN_10081306(int param_1, byte * param_2, undefined4 * param_3)
 * Address ranges: 10081306-1008135f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081306(int param_1,byte *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  
  uVar2 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = FUN_100ada5f(param_2,(byte *)&DAT_100af330,0x10);
      pbVar4 = (byte *)&DAT_100af310;
      if (iVar3 != 0) {
        pbVar4 = param_2;
      }
      uVar2 = FUN_1007b3ec(*(int *)(param_1 + 0x10) + 0x58e0,(int)pbVar4,param_3);
    }
    else {
      uVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
    }
  }
  return uVar2;
}

