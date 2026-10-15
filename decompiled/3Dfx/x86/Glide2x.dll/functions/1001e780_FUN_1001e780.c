/*
 * FUN_1001e780 at 1001e780
 * undefined __thiscall FUN_1001e780(void * this, undefined4 param_1, undefined4 * param_2)
 * Address ranges: 1001e780-1001e81c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001e780(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *this_00;
  int local_24 [6];
  undefined4 local_c;
  
  this_00 = (void *)(*(int *)((int)this + 0x508) + 0x38);
  iVar4 = *(int *)(*(int *)((int)this + 0x138) + 0x3188);
  iVar1 = *(int *)(*(int *)(iVar4 + 0x1300) + 0xc);
  iVar4 = *(int *)(iVar4 + 0x1304);
  uVar2 = *(undefined4 *)(iVar4 + 0x938);
  uVar3 = *(undefined4 *)(iVar4 + 0x93c);
  if (*(int *)((int)this + 0x50c) + 4U < 0x401) {
    iVar4 = FUN_10038c4e(this_00,local_24,1,iVar1,uVar2,uVar3);
    local_c = *(undefined4 *)(iVar4 + 8);
  }
  else {
    iVar4 = FUN_10038c4e(this_00,local_24,2,iVar1,uVar2,uVar3);
    local_c = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)((int)this + 0x50c) = 0;
  }
  *(int *)((int)this + 0x50c) = *(int *)((int)this + 0x50c) + 4;
  *param_2 = local_c;
  return;
}

