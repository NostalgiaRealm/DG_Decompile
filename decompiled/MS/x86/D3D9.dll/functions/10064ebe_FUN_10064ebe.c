/*
 * FUN_10064ebe at 10064ebe
 * undefined __stdcall FUN_10064ebe(int * param_1, int param_2)
 * Address ranges: 10064ebe-10065144
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064ebe(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x52e) != '\0') {
    FUN_10065145(param_1,param_2);
    FUN_10065145(param_1,param_2);
    FUN_10065145(param_1,param_2);
    uVar2 = FUN_100c2e34((int)piVar1,3,'\x01');
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x38);
    FUN_100c3be1(piVar1,param_1,0x32);
    FUN_100c2ed2((int)piVar1,uVar2);
  }
  return;
}

