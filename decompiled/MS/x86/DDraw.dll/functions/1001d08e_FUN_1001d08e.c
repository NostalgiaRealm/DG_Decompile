/*
 * FUN_1001d08e at 1001d08e
 * uint __fastcall FUN_1001d08e(int * param_1, int param_2)
 * Address ranges: 1001d08e-1001d294
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001d08e(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000010;
  uint in_stack_00000014;
  byte in_stack_0000001c;
  
  *(undefined4 *)(param_2 + 0x7c + (uint)*(byte *)(param_2 + 0x5c) * 4) = 5;
  *(undefined4 *)(param_2 + 0x7c + (uint)*(byte *)(param_2 + 0x5d) * 4) = 5;
  uVar2 = FUN_100569bf(param_2 + 0xc,4,'\x01');
  uVar3 = FUN_100569bf(param_2 + 0xc,(ushort)(in_stack_0000001c ^ 1) + 3,'\0');
  FUN_100575ba((int *)(param_2 + 0xc),param_1,0xa7);
  FUN_100575ba((int *)(param_2 + 0xc),param_1,0xa7);
  FUN_100575ba((int *)(param_2 + 0xc),param_1,0);
  FUN_100575ba((int *)(param_2 + 0xc),param_1,0xa7);
  FUN_100575ba((int *)(param_2 + 0xc),param_1,0xa7);
  FUN_100575ba((int *)(param_2 + 0xc),param_1,0);
  if ((in_stack_00000014 == 0) || (in_stack_00000010 != 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar4 = uVar2;
  if (bVar1) {
    uVar4 = in_stack_00000014;
  }
  FUN_1001c3b2(param_1,param_2);
  if ((in_stack_00000010 != 3) && (uVar4 == uVar2)) {
    FUN_1001c1f1(param_1,param_2);
  }
  FUN_10056a5d(param_2 + 0xc,uVar3);
  if (uVar4 == in_stack_00000014) {
    FUN_10056a5d(param_2 + 0xc,uVar2);
    uVar2 = in_stack_00000014;
  }
  return uVar2;
}

