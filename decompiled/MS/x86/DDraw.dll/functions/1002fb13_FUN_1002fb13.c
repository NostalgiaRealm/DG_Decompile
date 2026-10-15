/*
 * FUN_1002fb13 at 1002fb13
 * undefined __thiscall FUN_1002fb13(void * this, char param_1)
 * Address ranges: 1002fb13-1002fbe0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002fb13(void *this,char param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  void *this_00;
  int extraout_ECX;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar5;
  
  uVar5 = 1;
  if ((*(uint *)((int)this + 0x154) >> 0xb & 1) == 0) {
    if ((*(int *)(*(int *)((int)this + 4) + 0xcc) == 0) || (param_1 != '\0')) {
      bVar1 = FUN_10031fa9((int)this);
      *(uint *)(extraout_EDX + 0xc4) = (bVar1 ^ 1) - 1;
      FUN_10031278(this_00,(byte)(*(uint *)((int)this + 0x1b8) >> 4) & 1);
    }
    iVar4 = *(int *)((int)this + 4);
    if ((*(int *)(iVar4 + 0x20) == 0) && ((*(uint *)(iVar4 + 0x34) >> 4 & 1) == 0)) {
      iVar2 = (**(code **)(**(int **)(iVar4 + 0x50) + 0x28))(0,*(undefined4 *)(iVar4 + 0x70));
      iVar4 = (int)this + 0x150;
    }
    else {
      uVar3 = FUN_10031444((int)this + 0x150);
      if ((char)uVar3 != '\0') {
        uVar5 = (uint)*(ushort *)(extraout_EDX_00 + 10);
      }
      iVar2 = *(int *)(extraout_EDX_00 + 0x10) * uVar5;
      iVar4 = extraout_ECX;
    }
    *(int *)((int)this + 0x160) = iVar2;
    if (iVar2 != 0) {
      if (((*(uint *)((int)this + 0x19c) >> 2 & 1) == 0) ||
         (uVar3 = FUN_10031444(iVar4), (char)uVar3 == '\0')) {
        uVar5 = 8;
      }
      else {
        uVar5 = 0x80000;
      }
      *(uint *)((int)this + 0x154) = *(uint *)((int)this + 0x154) | uVar5;
    }
  }
  return;
}

