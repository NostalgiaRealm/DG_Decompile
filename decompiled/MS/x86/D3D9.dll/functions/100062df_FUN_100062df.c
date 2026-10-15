/*
 * FUN_100062df at 100062df
 * undefined4 __thiscall FUN_100062df(void * this, uint param_1, uint param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 100062df-1000636d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100062df(void *this,uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 uVar6;
  
  uVar2 = FUN_100025c9(param_5);
  uVar3 = FUN_10002621(extraout_ECX);
  uVar4 = FUN_10002447(extraout_ECX_00);
  uVar6 = 1;
  if ((((param_1 & uVar2 - 1) == 0) || (uVar5 = uVar4, param_1 < uVar2)) &&
     ((uVar5 = uVar3 - 1, (param_2 & uVar5) == 0 || (param_2 < uVar3)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar5 = FUN_10003405(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdc8),3,param_1,param_2
                         ,1);
    if (((char)uVar5 != '\0') &&
       (((bVar1 || ((int)uVar4 < 1)) && (uVar5 = param_3, param_3 <= param_4)))) goto LAB_10006365;
  }
  uVar6 = 0;
LAB_10006365:
  return CONCAT31((int3)(uVar5 >> 8),uVar6);
}

