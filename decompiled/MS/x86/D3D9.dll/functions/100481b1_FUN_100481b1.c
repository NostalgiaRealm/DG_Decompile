/*
 * FUN_100481b1 at 100481b1
 * undefined __cdecl FUN_100481b1(undefined4 * param_1)
 * Address ranges: 100481b1-10048206
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100481b1(undefined4 *param_1)

{
  int iVar1;
  void *this;
  uint uVar2;
  
  iVar1 = param_1[2];
  this = (void *)*param_1;
  uVar2 = param_1[1];
  FUN_100535f0(this,uVar2,iVar1,(float)param_1[3]);
  if (((uVar2 < 0x10) && (iVar1 == 0xb)) &&
     (param_1 = *(undefined4 **)((int)this + 0xf660),
     (*(byte *)((int)&param_1 + ((int)uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0)) {
    FUN_1003ccc0(this,*(uint *)((int)this + uVar2 * 4 + 0xfb3c));
    *(undefined4 *)((int)this + uVar2 * 4 + 0xfb3c) = 0;
  }
  return;
}

