/*
 * FUN_1006fc92 at 1006fc92
 * undefined __thiscall FUN_1006fc92(void * this, int * param_1, uint param_2)
 * Address ranges: 1006fc92-1006fe59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006fc92(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  
  FUN_1006f91a(param_2);
  FUN_1006c566(this,param_1,param_2);
  FUN_1006bfc5(this,param_2,param_1,0x36,1,0xf,*(uint *)(param_2 + 0x14c));
  FUN_1006cfb8(this,param_1,param_2);
  uVar1 = *(uint *)(*(int *)(param_2 + 0x1a0) + 0x44);
  if ((((uVar1 >> 0x1a & 1) == 0) || ((uVar1 & 0x3000000) == 0)) || ((uVar1 >> 0x1b & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100c2e34(param_2 + 0x18,1,'\x01');
  }
  FUN_1006d109(this,param_1,param_2,uVar1);
  FUN_1006d454(this,param_1,param_2,uVar1);
  FUN_1006c066(param_2,2);
  FUN_1006d888(this,param_1,param_2);
  if (*(char *)(param_2 + 0x1b1) == '\0') {
    if ((*(byte *)(param_2 + 0x19c) & 1) == 0) {
      FUN_1006bfc5(this,param_2,param_1,0x36,2,0xf,*(uint *)(param_2 + 0xac));
    }
    else {
      uVar1 = FUN_1006fba2(this,param_1,param_2);
      FUN_1006bfc5(this,param_2,param_1,0x36,2,0xf,uVar1);
    }
    if ((*(byte *)(param_2 + 0x19c) & 2) == 0) {
      FUN_1006bfc5(this,param_2,param_1,0x36,3,(*(char *)(param_2 + 0x1b0) != '\0') * '\b' + 7,
                   *(uint *)(param_2 + 0xac));
    }
    else {
      uVar1 = FUN_1006fbd0(this,param_1,param_2);
      FUN_1006bfc5(this,param_2,param_1,0x36,3,7,uVar1);
    }
    FUN_1006fc32(this,param_2);
    FUN_1006fc62(this,param_2);
  }
  FUN_1006e348(this,param_1,param_2);
  FUN_1006c066(param_2,1);
  if (*(char *)(param_2 + 0x1b1) != '\0') {
    FUN_1006e793(this,param_1,param_2);
    FUN_1006fc32(this,param_2);
    FUN_1006fc62(this,param_2);
    FUN_1006c066(param_2,4);
  }
  return;
}

