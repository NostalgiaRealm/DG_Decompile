/*
 * FUN_1001772c at 1001772c
 * undefined __cdecl FUN_1001772c(undefined4 * param_1)
 * Address ranges: 1001772c-100177a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001772c(undefined4 *param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  this = (void *)*param_1;
  uVar1 = param_1[0xb];
  iVar2 = param_1[0xc];
  FUN_1001c91d((void *)((int)this + 0x42e8),0,0);
  if (param_1 + 1 != (undefined4 *)0x0) {
    FUN_100449be(*(void **)(*(int *)((int)this + 0x3688) + 0x1304),*(uint *)((int)this + 0x36a8),
                 (void *)(*(int *)((int)this + 0x3688) + 0x1430),(int)(param_1 + 1),uVar1);
  }
  uVar3 = 3;
  do {
    FUN_1001fc37(this,uVar3,uVar1,iVar2 + uVar1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}

