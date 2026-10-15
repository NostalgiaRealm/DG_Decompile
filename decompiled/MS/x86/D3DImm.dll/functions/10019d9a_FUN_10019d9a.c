/*
 * FUN_10019d9a at 10019d9a
 * uint __thiscall FUN_10019d9a(void * this, int param_1)
 * Address ranges: 10019d9a-10019dd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10019d9a(void *this,int param_1)

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
LAB_10019dc3:
      return uVar5 & 0xffffff00;
    }
  }
  if ((uVar4 <= uVar2) && ((uVar2 != uVar4 || (uVar3 < uVar1)))) {
    return CONCAT31((int3)(uVar5 >> 8),1);
  }
  goto LAB_10019dc3;
}

