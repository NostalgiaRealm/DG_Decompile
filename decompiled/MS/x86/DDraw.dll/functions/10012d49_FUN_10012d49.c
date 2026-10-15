/*
 * FUN_10012d49 at 10012d49
 * undefined4 __thiscall FUN_10012d49(void * this, uint * param_1)
 * Address ranges: 10012d49-10012e5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10012d49(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = (((param_1[10] << 8 | param_1[9]) << 6 | *param_1 & 3) << 2 |
           -(uint)(param_1[8] != 0) & 0x80 | -(uint)(param_1[7] != 0) & 0x40 |
           -(uint)(param_1[6] != 0) & 0x20 | -(uint)(param_1[2] != 0) & 0x10 | param_1[1] & 3) ^
          param_1[5];
  uVar3 = param_1[4] ^ param_1[3];
  uVar5 = 0;
  uVar4 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar9 = *(int *)this;
    uVar6 = *(uint *)((int)this + 8);
    do {
      uVar4 = uVar6 + uVar5 >> 1;
      iVar2 = uVar4 * 0x38;
      uVar1 = *(uint *)(iVar9 + 4 + iVar2);
      if ((uVar1 < uVar3) ||
         ((uVar7 = uVar4, uVar1 <= uVar3 && (*(uint *)(iVar9 + iVar2) <= uVar8)))) {
        uVar5 = *(uint *)(iVar9 + 4 + iVar2);
        if ((uVar3 < uVar5) || ((uVar3 <= uVar5 && (uVar8 <= *(uint *)(iVar9 + iVar2))))) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
        uVar7 = uVar6;
      }
      uVar6 = uVar7;
    } while (uVar7 != uVar5);
  }
  iVar9 = uVar4 * 0x38;
  if (((uVar4 == *(uint *)((int)this + 8)) || (*(uint *)(iVar9 + *(int *)this) != uVar8)) ||
     (*(uint *)(iVar9 + 4 + *(int *)this) != uVar3)) {
    FUN_100130a9(this,uVar4,uVar8,uVar3,param_1);
  }
  return *(undefined4 *)(iVar9 + 0x34 + *(int *)this);
}

