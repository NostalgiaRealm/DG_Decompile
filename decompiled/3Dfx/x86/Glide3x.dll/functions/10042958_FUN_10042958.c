/*
 * FUN_10042958 at 10042958
 * undefined4 __thiscall FUN_10042958(void * this, int param_1)
 * Address ranges: 10042958-10042a30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10042958(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  void *local_8;
  
  iVar2 = param_1;
  *(uint *)(param_1 + 0x14) =
       (uint)(*(int *)(param_1 + 0x10) == *(int *)(*(int *)(param_1 + 8) + 0xd80));
  local_8 = this;
  FUN_10044040(this,*(int *)(*(int *)(param_1 + 8) + 8),(int *)&DAT_10054ab8,this,-1);
  FUN_100440af(this,*(int *)(*(int *)(iVar2 + 8) + 8),(int *)&DAT_10054c1c,0);
  FUN_1004411c(this,*(int *)(*(int *)(iVar2 + 8) + 8),(uint *)&DAT_10054bf4);
  iVar1 = *(int *)(iVar2 + 4);
  FUN_10044433(this,*(int *)(*(int *)(iVar2 + 8) + 8),5,*(int *)(iVar1 + 0x478),
               *(int *)(iVar1 + 0x470),*(int *)(iVar1 + 0x3c8));
  FUN_1004428e(this,*(int *)(*(int *)(iVar2 + 8) + 8),1,extraout_ECX,
               (int *)(*(int *)(iVar2 + 4) + 0x47c));
  local_8 = (void *)0x10;
  param_1 = 0;
  FUN_10044351(this,*(int *)(*(int *)(iVar2 + 8) + 8),0,extraout_ECX_00,
               (int *)(*(int *)(iVar2 + 4) + 0x480),(int *)&local_8,&param_1);
  uVar3 = FUN_100443d7(this,*(int *)(*(int *)(iVar2 + 8) + 8),0,0);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

