/*
 * FUN_10040200 at 10040200
 * undefined4 __thiscall FUN_10040200(void * this, int param_1)
 * Address ranges: 10040200-100402d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040200(void *this,int param_1)

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
  FUN_100418e8(this,*(int *)(*(int *)(param_1 + 8) + 8),(int *)&DAT_10051c38,this,-1);
  FUN_10041957(this,*(int *)(*(int *)(iVar2 + 8) + 8),(int *)&DAT_10051d9c,0);
  FUN_100419c4(this,*(int *)(*(int *)(iVar2 + 8) + 8),(uint *)&DAT_10051d74);
  iVar1 = *(int *)(iVar2 + 4);
  FUN_10041cdb(this,*(int *)(*(int *)(iVar2 + 8) + 8),5,*(int *)(iVar1 + 0x478),
               *(int *)(iVar1 + 0x470),*(int *)(iVar1 + 0x3c8));
  FUN_10041b36(this,*(int *)(*(int *)(iVar2 + 8) + 8),1,extraout_ECX,
               (int *)(*(int *)(iVar2 + 4) + 0x47c));
  local_8 = (void *)0x10;
  param_1 = 0;
  FUN_10041bf9(this,*(int *)(*(int *)(iVar2 + 8) + 8),0,extraout_ECX_00,
               (int *)(*(int *)(iVar2 + 4) + 0x480),(int *)&local_8,&param_1);
  uVar3 = FUN_10041c7f(this,*(int *)(*(int *)(iVar2 + 8) + 8),0,0);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

