/*
 * FUN_10091214 at 10091214
 * undefined4 __thiscall FUN_10091214(void * this, int param_1)
 * Address ranges: 10091214-100912ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10091214(void *this,int param_1)

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
  FUN_10092b9a(this,*(int *)(*(int *)(param_1 + 8) + 8),(int *)&DAT_100b0a98,this,-1);
  FUN_10092c09(this,*(int *)(*(int *)(iVar2 + 8) + 8),(int *)&DAT_100b0c30,0);
  FUN_10092c76(this,*(int *)(*(int *)(iVar2 + 8) + 8),(uint *)&DAT_100b0c08);
  iVar1 = *(int *)(iVar2 + 4);
  FUN_10093013(this,*(int *)(*(int *)(iVar2 + 8) + 8),5,*(int *)(iVar1 + 0x478),
               *(int *)(iVar1 + 0x470),*(int *)(iVar1 + 0x3c8),0);
  FUN_10092de6(this,*(int *)(*(int *)(iVar2 + 8) + 8),1,1,*(int *)(iVar2 + 4) + 0x47c);
  local_8 = (void *)0x10;
  param_1 = 0;
  FUN_10092efa(this,*(int *)(*(int *)(iVar2 + 8) + 8),extraout_ECX,1,*(int *)(iVar2 + 4) + 0x480,
               (int)&local_8,(int)&param_1);
  uVar3 = FUN_10092fb7(this,*(int *)(*(int *)(iVar2 + 8) + 8),0,0);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

