/*
 * FUN_1005a329 at 1005a329
 * undefined __thiscall FUN_1005a329(void * this, int * param_1, uint param_2)
 * Address ranges: 1005a329-1005a4f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a329(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  
  FUN_10059fb8(param_2);
  FUN_10056d62(this,param_1,param_2);
  FUN_100567c1(this,param_2,param_1,0x36,1,0xf,*(uint *)(param_2 + 0x14c));
  FUN_1005774c(this,param_1,param_2);
  uVar1 = *(uint *)(*(int *)(param_2 + 0x19c) + 0x44);
  if ((((uVar1 >> 0x1a & 1) == 0) || ((uVar1 & 0x3000000) == 0)) || ((uVar1 >> 0x1b & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100a05ed(param_2 + 0x18,1,'\x01');
  }
  FUN_1005789d(this,param_1,param_2,uVar1);
  FUN_10057be8(this,param_1,param_2,uVar1);
  FUN_10056862(param_2,2);
  FUN_1005801c(this,param_1,param_2);
  if (*(char *)(param_2 + 0x1ad) == '\0') {
    if ((*(byte *)(param_2 + 0x198) & 1) == 0) {
      FUN_100567c1(this,param_2,param_1,0x36,2,0xf,*(uint *)(param_2 + 0xac));
    }
    else {
      uVar1 = FUN_1005a239(this,param_1,param_2);
      FUN_100567c1(this,param_2,param_1,0x36,2,0xf,uVar1);
    }
    if ((*(byte *)(param_2 + 0x198) & 2) == 0) {
      FUN_100567c1(this,param_2,param_1,0x36,3,(*(char *)(param_2 + 0x1ac) != '\0') * '\b' + 7,
                   *(uint *)(param_2 + 0xac));
    }
    else {
      uVar1 = FUN_1005a267(this,param_1,param_2);
      FUN_100567c1(this,param_2,param_1,0x36,3,7,uVar1);
    }
    FUN_1005a2c9(this,param_2);
    FUN_1005a2f9(this,param_2);
  }
  FUN_10058a0f(this,param_1,param_2);
  FUN_10056862(param_2,1);
  if (*(char *)(param_2 + 0x1ad) != '\0') {
    FUN_10058e31(this,param_1,param_2);
    FUN_1005a2c9(this,param_2);
    FUN_1005a2f9(this,param_2);
    FUN_10056862(param_2,4);
  }
  return;
}

