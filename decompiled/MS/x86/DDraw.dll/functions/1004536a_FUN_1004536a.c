/*
 * FUN_1004536a at 1004536a
 * undefined4 __thiscall FUN_1004536a(void * this, int param_1)
 * Address ranges: 1004536a-1004543b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004536a(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  void *local_8;
  
  iVar2 = param_1;
  *(uint *)(param_1 + 0x14) =
       (uint)(*(int *)(param_1 + 0x10) == *(int *)(*(int *)(param_1 + 8) + 0xd80));
  local_8 = this;
  FUN_10046a34(this,*(int *)(*(int *)(param_1 + 8) + 8),(int *)&DAT_10062d88);
  FUN_10046a9d(this,*(int *)(*(int *)(iVar2 + 8) + 8),(int *)&DAT_10062f20);
  FUN_10046b04(this,*(int *)(*(int *)(iVar2 + 8) + 8));
  iVar1 = *(int *)(iVar2 + 4);
  FUN_10046de0(this,*(int *)(*(int *)(iVar2 + 8) + 8),extraout_ECX,*(int *)(iVar1 + 0x478),
               *(int *)(iVar1 + 0x470),*(int *)(iVar1 + 0x3c8));
  FUN_10046c72(this,*(int *)(*(int *)(iVar2 + 8) + 8),extraout_ECX_00,extraout_ECX_00,
               (int *)(*(int *)(iVar2 + 4) + 0x47c));
  local_8 = (void *)0x10;
  param_1 = 0;
  FUN_10046d0e(this,*(int *)(*(int *)(iVar2 + 8) + 8),extraout_ECX_01,extraout_ECX_01,
               (int *)(*(int *)(iVar2 + 4) + 0x480),(int *)&local_8,&param_1);
  uVar3 = FUN_10046d90(this,*(int *)(*(int *)(iVar2 + 8) + 8));
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

