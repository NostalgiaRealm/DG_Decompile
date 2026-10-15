/*
 * FUN_1006d888 at 1006d888
 * undefined __thiscall FUN_1006d888(void * this, int * param_1, int param_2)
 * Address ranges: 1006d888-1006d90d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006d888(void *this,int *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)(param_2 + 0x1af);
  if ((*(uint *)(param_2 + 0x19c) & 0x80000) != 0) {
    uVar2 = (*(code *)**(undefined4 **)this)(param_1,param_2,4,1,0,0x12345678);
    FUN_1006bfc5(this,param_2,param_1,0x36,4,0xe,uVar2);
    *pbVar1 = *pbVar1 | 0xe;
  }
  if (*pbVar1 != 0xf) {
    FUN_1006bfc5(this,param_2,param_1,0x36,4,*pbVar1 ^ 0xf,*(uint *)(param_2 + 0xac));
  }
  return;
}

