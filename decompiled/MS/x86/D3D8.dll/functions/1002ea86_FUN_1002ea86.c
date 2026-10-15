/*
 * FUN_1002ea86 at 1002ea86
 * uint __thiscall FUN_1002ea86(void * this, int param_1)
 * Address ranges: 1002ea86-1002eac5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002ea86(void *this,int param_1)

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
    if (3 < uVar5) {
LAB_1002eaaf:
      return uVar5 & 0xffffff00;
    }
  }
  if ((uVar4 <= uVar2) && ((uVar2 != uVar4 || (uVar3 < uVar1)))) {
    return CONCAT31((int3)(uVar5 >> 8),1);
  }
  goto LAB_1002eaaf;
}

