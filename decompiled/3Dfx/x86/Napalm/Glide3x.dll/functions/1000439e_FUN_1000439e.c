/*
 * FUN_1000439e at 1000439e
 * uint __thiscall FUN_1000439e(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1000439e-1000440c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000439e(void *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  
  if (param_4 == 0xff) {
    param_4 = 0x1b;
  }
  bVar1 = FUN_100051b3(this,4);
  iVar3 = (-(uint)bVar1 & 3) + 8;
  bVar1 = FUN_100051b3(this,4);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((((iVar3 < param_2) || (iVar3 < param_1)) || (param_4 < 0)) ||
     ((uVar2 = (!bVar1 - 1 & 0xc) + 0xf, (int)uVar2 < param_4 || (uVar2 = param_3 + 3, 6 < uVar2))))
  {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2;
}

