/*
 * FUN_100059f4 at 100059f4
 * undefined4 __thiscall FUN_100059f4(void * this, uint param_1, uint param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 100059f4-10005a82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100059f4(void *this,uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 uVar6;
  
  uVar2 = FUN_10002564(param_5);
  uVar3 = FUN_100025a7(extraout_ECX);
  uVar4 = FUN_1000245c(extraout_ECX_00);
  uVar6 = 1;
  if ((((param_1 & uVar2 - 1) == 0) || (uVar5 = uVar4, param_1 < uVar2)) &&
     ((uVar5 = uVar3 - 1, (param_2 & uVar5) == 0 || (param_2 < uVar3)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar5 = FUN_1000303e(*(void **)((int)this + 0xacc),*(int *)((int)this + 0xb04),3,param_1,param_2
                         ,1);
    if (((char)uVar5 != '\0') &&
       (((bVar1 || ((int)uVar4 < 1)) && (uVar5 = param_3, param_3 <= param_4)))) goto LAB_10005a7a;
  }
  uVar6 = 0;
LAB_10005a7a:
  return CONCAT31((int3)(uVar5 >> 8),uVar6);
}

