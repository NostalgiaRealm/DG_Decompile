/*
 * FUN_100b3413 at 100b3413
 * undefined4 __thiscall FUN_100b3413(void * this, int param_1)
 * Address ranges: 100b3413-100b34ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100b3413(void *this,int param_1)

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
  FUN_100b4d9e(this,*(int *)(*(int *)(param_1 + 8) + 8),(uint *)&DAT_100d3da8,(int *)0x0,-1,'\0');
  FUN_100b4e84(this,*(int *)(*(int *)(iVar2 + 8) + 8),(int *)&DAT_100d3f40,0);
  FUN_100b4ef1(this,*(int *)(*(int *)(iVar2 + 8) + 8),(uint *)&DAT_100d3f18);
  iVar1 = *(int *)(iVar2 + 4);
  FUN_100b5313(this,*(int *)(*(int *)(iVar2 + 8) + 8),5,*(int *)(iVar1 + 0x478),
               *(int *)(iVar1 + 0x470),*(int *)(iVar1 + 0x3c8),0);
  FUN_100b50e6(this,*(int *)(*(int *)(iVar2 + 8) + 8),1,1,*(int *)(iVar2 + 4) + 0x47c);
  local_8 = (void *)0x10;
  param_1 = 0;
  FUN_100b51fa(this,*(int *)(*(int *)(iVar2 + 8) + 8),extraout_ECX,1,*(int *)(iVar2 + 4) + 0x480,
               (int)&local_8,(int)&param_1);
  uVar3 = FUN_100b52b7(this,*(int *)(*(int *)(iVar2 + 8) + 8),0,0);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

