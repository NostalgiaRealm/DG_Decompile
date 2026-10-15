/*
 * FUN_1006542a at 1006542a
 * undefined __stdcall FUN_1006542a(int * param_1, int param_2)
 * Address ranges: 1006542a-100655f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006542a(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (int *)(param_2 + 0x18);
  uVar2 = FUN_100c2e34((int)piVar1,3,'\x01');
  uVar3 = FUN_100c2e34((int)piVar1,1,'\x01');
  uVar4 = FUN_100c2e34((int)piVar1,1,'\x01');
  if (*(char *)(param_2 + 0x52e) == '\0') {
    FUN_100c3be1(piVar1,param_1,0);
  }
  FUN_100c3be1(piVar1,param_1,0);
  FUN_100c3be1(piVar1,param_1,0x10);
  FUN_100c3be1(piVar1,param_1,0x10);
  FUN_100c3be1(piVar1,param_1,0x38);
  FUN_100c3be1(piVar1,param_1,0xe);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0x10);
  FUN_100c3be1(piVar1,param_1,0x44);
  FUN_100c3be1(piVar1,param_1,0x38);
  FUN_100c2ed2((int)piVar1,uVar2);
  FUN_100c2ed2((int)piVar1,uVar3);
  FUN_100c2ed2((int)piVar1,uVar4);
  return;
}

