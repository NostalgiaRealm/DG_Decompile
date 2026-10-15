/*
 * FUN_10062d80 at 10062d80
 * undefined FUN_10062d80(void)
 * Address ranges: 10062d80-10062e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10062d80(int param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong extraout_x15;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_2c[0] = 0;
  local_30 = param_2;
  (*(code *)PTR_FUN_100a803c)(param_1 + 0x1c);
  uVar2 = 0;
  iVar1 = FUN_10063028(param_1,&local_30);
  if (iVar1 != 0) {
    iVar1 = FUN_10063290(iVar1 + 4,local_2c);
    if (iVar1 == 0) {
      local_2c[0] = 0xffffffff;
      iVar1 = FUN_10063290(extraout_x15 & 0xffffffff,local_2c);
      if (iVar1 == 0) goto LAB_10062df4;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
LAB_10062df4:
  (*(code *)PTR_FUN_100a8090)(param_1 + 0x1c);
  return uVar2;
}

