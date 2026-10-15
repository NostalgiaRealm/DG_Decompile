/*
 * FUN_1006997c at 1006997c
 * undefined __stdcall FUN_1006997c(int param_1, int * param_2)
 * Address ranges: 1006997c-10069b88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006997c(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_c;
  
  FUN_10072580(param_1,param_2,*(uint *)(param_1 + 0x26c));
  FUN_100702e0(param_1,(uint *)(param_1 + 0x26c));
  uVar1 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
  FUN_10069b89(param_1,param_2,uVar1,7,2,3,4,0);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x274),uVar1,0,2);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x278),uVar1,0x55,3);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x27c),uVar1,0xaa,4);
  local_c = 8;
  FUN_10069b89(param_1,param_2,uVar1,0xf,5,6,7,8);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x280),uVar1,0,5);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x284),uVar1,0x55,6);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x288),uVar1,0xaa,7);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x28c),uVar1,0xff,8);
  FUN_10069b89(param_1,param_2,uVar1,0xf,9,10,0xb,0xc);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x290),uVar1,0,9);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x294),uVar1,0x55,10);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x298),uVar1,0xaa,0xb);
  FUN_10069c1e(param_1,param_2,*(uint *)(param_1 + 0x29c),uVar1,0xff,0xc);
  FUN_100c2ed2(param_1 + 0x18,uVar1);
  FUN_100702e0(param_1,(uint *)(param_1 + 0x27c));
  FUN_100702e0(param_1,(uint *)(param_1 + 0x274));
  FUN_100702e0(param_1,(uint *)(param_1 + 0x278));
  iVar2 = 0;
  do {
    FUN_100702e0(param_1,(uint *)(param_1 + 0x280 + iVar2));
    iVar2 = iVar2 + 4;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}

