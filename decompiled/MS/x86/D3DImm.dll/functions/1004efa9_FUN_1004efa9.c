/*
 * FUN_1004efa9 at 1004efa9
 * undefined4 __thiscall FUN_1004efa9(void * this, int param_1)
 * Address ranges: 1004efa9-1004f081
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004efa9(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  void *local_8;
  
  iVar2 = param_1;
  *(uint *)(param_1 + 0x14) =
       (uint)(*(int *)(param_1 + 0x10) == *(int *)(*(int *)(param_1 + 8) + 0xd80));
  local_8 = this;
  FUN_1004fac4(this,*(int *)(*(int *)(param_1 + 8) + 8),(int *)&DAT_1005de00);
  FUN_1004fb2d(this,*(int *)(*(int *)(iVar2 + 8) + 8),(int *)&DAT_1005df64,0);
  FUN_1004fb9a(this,*(int *)(*(int *)(iVar2 + 8) + 8),(uint *)&DAT_1005df3c);
  iVar1 = *(int *)(iVar2 + 4);
  FUN_1004fe9f(this,*(int *)(*(int *)(iVar2 + 8) + 8),5,*(int *)(iVar1 + 0x478),
               *(int *)(iVar1 + 0x470),*(int *)(iVar1 + 0x3c8),0);
  FUN_1004fcad(this,*(int *)(*(int *)(iVar2 + 8) + 8),1,1,*(int *)(iVar2 + 4) + 0x47c);
  local_8 = (void *)0x10;
  param_1 = 0;
  FUN_1004fdc1(this,*(int *)(*(int *)(iVar2 + 8) + 8),extraout_ECX,extraout_ECX,
               (int *)(*(int *)(iVar2 + 4) + 0x480),(int *)&local_8,&param_1);
  uVar3 = FUN_1004fe43(this,*(int *)(*(int *)(iVar2 + 8) + 8),0,0);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

