/*
 * FUN_10007d2a at 10007d2a
 * uint __thiscall FUN_10007d2a(void * this, uint param_1, uint param_2)
 * Address ranges: 10007d2a-10007d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10007d2a(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    uVar4 = *(uint *)((int)this + 8);
    do {
      uVar3 = uVar4 + uVar6 >> 1;
      uVar1 = *(uint *)(*(int *)((int)this + 4) + uVar3 * 0x10);
      uVar2 = *(uint *)(*(int *)((int)this + 4) + 4 + uVar3 * 0x10);
      if (uVar2 < param_2) {
LAB_10007d6a:
        uVar3 = uVar3 + 1;
        uVar5 = uVar4;
        uVar6 = uVar3;
      }
      else {
        uVar5 = uVar3;
        if ((uVar2 == param_2) && (uVar1 <= param_1)) {
          if (param_2 < uVar2) {
            return uVar3;
          }
          if ((param_2 <= uVar2) && (param_1 <= uVar1)) {
            return uVar3;
          }
          goto LAB_10007d6a;
        }
      }
      uVar4 = uVar5;
    } while (uVar5 != uVar6);
  }
  return uVar3;
}

