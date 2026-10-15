/*
 * FUN_1003bd1c at 1003bd1c
 * undefined __thiscall FUN_1003bd1c(void * this, int * param_1, uint param_2, char param_3)
 * Address ranges: 1003bd1c-1003bf22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003bd1c(void *this,int *param_1,uint param_2,char param_3)

{
  uint uVar1;
  
  FUN_1003b98d(param_2,param_3);
  FUN_1003842d(this,param_1,param_2);
  FUN_100380e6(this,param_2,param_1,0x36,1,0xf,*(uint *)(param_2 + 0x130));
  FUN_10038c1e(this,param_1,param_2);
  uVar1 = *(uint *)(*(int *)(param_2 + 0x180) + 0x44);
  if ((((uVar1 >> 0x1a & 1) == 0) || ((uVar1 & 0x3000000) == 0)) || ((uVar1 >> 0x1b & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10056ee5(param_2 + 0x10,1,'\x01');
  }
  FUN_10038d6f(this,param_1,param_2,uVar1);
  FUN_10039284(this,param_1,param_2,uVar1);
  FUN_10038187(param_2,2);
  if (*(byte *)(param_2 + 399) != 0xf) {
    FUN_100380e6(this,param_2,param_1,0x36,4,*(byte *)(param_2 + 399) ^ 0xf,
                 *(uint *)(param_2 + 0xa4));
  }
  if (*(char *)(param_2 + 0x191) == '\0') {
    if ((*(byte *)(param_2 + 0x17c) & 1) == 0) {
      FUN_100380e6(this,param_2,param_1,0x36,2,0xf,*(uint *)(param_2 + 0xa4));
    }
    else {
      uVar1 = FUN_1003bc2c(this,param_1,param_2);
      FUN_100380e6(this,param_2,param_1,0x36,2,0xf,uVar1);
    }
    if ((*(byte *)(param_2 + 0x17c) & 2) == 0) {
      FUN_100380e6(this,param_2,param_1,0x36,3,(*(char *)(param_2 + 400) != '\0') * '\b' + 7,
                   *(uint *)(param_2 + 0xa4));
    }
    else {
      uVar1 = FUN_1003bc5a(this,param_1,param_2);
      FUN_100380e6(this,param_2,param_1,0x36,3,7,uVar1);
    }
    FUN_1003bcbc(this,param_2);
    FUN_1003bcec(this,param_2);
  }
  FUN_1003a006(this,param_1,param_2);
  FUN_10038187(param_2,1);
  if (*(char *)(param_2 + 0x191) != '\0') {
    FUN_1003a420(this,param_1,param_2,param_3);
    FUN_1003bcbc(this,param_2);
    FUN_1003bcec(this,param_2);
    FUN_10038187(param_2,4);
  }
  return;
}

