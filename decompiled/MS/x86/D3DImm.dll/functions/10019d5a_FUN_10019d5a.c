/*
 * FUN_10019d5a at 10019d5a
 * uint __thiscall FUN_10019d5a(void * this, int param_1)
 * Address ranges: 10019d5a-10019d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10019d5a(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    uVar1 = *(uint *)((int)this + uVar5 * 8);
    uVar2 = *(uint *)((int)this + uVar5 * 8 + 4);
    uVar3 = *(uint *)(param_1 + uVar5 * 8);
    uVar4 = *(uint *)(param_1 + 4 + uVar5 * 8);
    if ((uVar1 != uVar3) || (uVar2 != uVar4)) break;
    uVar5 = uVar5 + 1;
    if (6 < uVar5) {
LAB_10019d83:
      return uVar5 & 0xffffff00;
    }
  }
  if ((uVar2 <= uVar4) && ((uVar2 < uVar4 || (uVar1 < uVar3)))) {
    return CONCAT31((int3)(uVar5 >> 8),1);
  }
  goto LAB_10019d83;
}

