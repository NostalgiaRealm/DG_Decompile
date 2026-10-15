/*
 * FUN_10043ff0 at 10043ff0
 * uint __thiscall FUN_10043ff0(void * this, uint param_1, uint param_2)
 * Address ranges: 10043ff0-10044054
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10043ff0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  if (*(uint *)((int)this + 8) == 0) {
    return 0;
  }
  uVar5 = *(uint *)((int)this + 8);
  do {
    uVar3 = uVar5 + uVar4 >> 1;
    uVar1 = *(uint *)(*(int *)((int)this + 4) + uVar3 * 0x18);
    uVar2 = *(uint *)(*(int *)((int)this + 4) + 4 + uVar3 * 0x18);
    if (uVar2 < param_2) {
LAB_10044035:
      uVar3 = uVar3 + 1;
      uVar4 = uVar3;
      uVar6 = uVar5;
    }
    else {
      uVar6 = uVar3;
      if ((uVar2 == param_2) && (uVar1 <= param_1)) {
        if (param_2 < uVar2) {
          return uVar3;
        }
        if ((param_2 <= uVar2) && (param_1 <= uVar1)) {
          return uVar3;
        }
        goto LAB_10044035;
      }
    }
    uVar5 = uVar6;
    if (uVar6 == uVar4) {
      return uVar3;
    }
  } while( true );
}

