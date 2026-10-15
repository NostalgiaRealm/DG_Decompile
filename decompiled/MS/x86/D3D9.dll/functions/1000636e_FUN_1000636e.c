/*
 * FUN_1000636e at 1000636e
 * undefined1 __thiscall FUN_1000636e(void * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6)
 * Address ranges: 1000636e-10006405
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1000636e(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6
            )

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  
  uVar2 = FUN_100025c9(param_6);
  uVar3 = FUN_10002621(extraout_ECX);
  iVar4 = FUN_10002447(extraout_ECX_00);
  if ((((param_1 & uVar2 - 1) == 0) || (param_1 < uVar2)) &&
     (((param_2 & uVar3 - 1) == 0 || (param_2 < uVar3)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (((uVar2 = FUN_10003405(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdc8),3,param_1,
                             param_2,param_3), (char)uVar2 != '\0' && ((bVar1 || (iVar4 < 1)))) &&
      (param_4 <= param_5)))) {
    return 1;
  }
  return 0;
}

