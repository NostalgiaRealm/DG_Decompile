/*
 * FUN_1005801c at 1005801c
 * undefined __thiscall FUN_1005801c(void * this, int * param_1, int param_2)
 * Address ranges: 1005801c-100580a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005801c(void *this,int *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)(param_2 + 0x1ab);
  if ((*(uint *)(param_2 + 0x198) & 0x80000) != 0) {
    uVar2 = (*(code *)**(undefined4 **)this)(param_1,param_2,4,1,0,0x12345678);
    FUN_100567c1(this,param_2,param_1,0x36,4,0xe,uVar2);
    *pbVar1 = *pbVar1 | 0xe;
  }
  if (*pbVar1 != 0xf) {
    FUN_100567c1(this,param_2,param_1,0x36,4,*pbVar1 ^ 0xf,*(uint *)(param_2 + 0xac));
  }
  return;
}

