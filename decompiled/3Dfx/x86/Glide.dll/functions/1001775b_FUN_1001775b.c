/*
 * FUN_1001775b at 1001775b
 * undefined4 __thiscall FUN_1001775b(void * this, int * param_1)
 * Address ranges: 1001775b-10017809
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001775b(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_10;
  uint local_c;
  
  uVar8 = FUN_10037697(param_1);
  uVar6 = 0;
  uVar3 = 0;
  local_10 = (uint)uVar8;
  local_c = (uint)((ulonglong)uVar8 >> 0x20);
  if (*(uint *)((int)this + 8) != 0) {
    iVar7 = *(int *)this;
    uVar4 = *(uint *)((int)this + 8);
    do {
      uVar3 = uVar4 + uVar6 >> 1;
      iVar2 = uVar3 * 0x158;
      uVar1 = *(uint *)(iVar7 + 4 + iVar2);
      if ((uVar1 < local_c) ||
         ((uVar5 = uVar3, uVar1 <= local_c && (*(uint *)(iVar7 + iVar2) <= local_10)))) {
        uVar6 = *(uint *)(iVar7 + 4 + iVar2);
        if ((local_c < uVar6) || ((local_c <= uVar6 && (local_10 <= *(uint *)(iVar7 + iVar2)))))
        break;
        uVar3 = uVar3 + 1;
        uVar5 = uVar4;
        uVar6 = uVar3;
      }
      uVar4 = uVar5;
    } while (uVar5 != uVar6);
  }
  iVar7 = uVar3 * 0x158;
  if (((uVar3 == *(uint *)((int)this + 8)) || (*(uint *)(iVar7 + *(int *)this) != local_10)) ||
     (*(uint *)(iVar7 + 4 + *(int *)this) != local_c)) {
    FUN_100179af(this,uVar3,local_10,local_c,param_1);
  }
  return *(undefined4 *)(iVar7 + 0x150 + *(int *)this);
}

