/*
 * FUN_10094c95 at 10094c95
 * int __stdcall FUN_10094c95(int param_1, undefined4 * param_2)
 * Address ranges: 10094c95-10094dc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10094c95(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  uint local_c;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  local_c = 0xffffffff;
  this = (void *)(param_1 + -0x66b4);
  iVar2 = FUN_10018a0a(this,(int *)&local_c);
  if (-1 < iVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + -0x6300) + -4 + local_c * 4);
    FUN_10006455(param_1 + -0x608,iVar1 + 0xa118,*(uint *)(param_1 + -0x58e0));
    FUN_10006455(param_1 + -0x208,iVar1 + 0xa91c,0xe0);
    iVar1 = *(int *)(*(int *)(param_1 + -0x6300) + -4 + local_c * 4);
    FUN_10006455(param_1 + 500,iVar1 + 0x5248,0x10);
    FUN_10006455(param_1 + 0x204,iVar1 + 0x526c,0x10);
    FUN_10006455(param_1 + 0x214,iVar1 + 0x5290,0x10);
    FUN_10006455(param_1 + 0x224,iVar1 + 0x52b4,0x10);
    puVar3 = FUN_1008fa43(this,local_c,iVar1);
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = FUN_1009cf1a((int)puVar3,0x100d13d0,param_2);
      if (iVar2 < 0) {
        FUN_10004f38(this,local_c);
      }
    }
  }
  FUN_10003e89(&local_5);
  return iVar2;
}

