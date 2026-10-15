/*
 * FUN_1000451a at 1000451a
 * int __thiscall FUN_1000451a(void * this, uint param_1, uint * param_2, uint param_3, int param_4, int param_5, undefined4 * param_6, uint * param_7, undefined4 * param_8)
 * Address ranges: 1000451a-10004629
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1000451a(void *this,uint param_1,uint *param_2,uint param_3,int param_4,int param_5,
            undefined4 *param_6,uint *param_7,undefined4 *param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint extraout_ECX;
  int iVar5;
  int iVar6;
  
  if (param_6 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_6 = 0;
  iVar1 = FUN_10002833(*(void **)((int)this + 0xacc),this,*(int *)((int)this + 0xb04),
                       *(int *)((int)this + 0xb1c),param_5,param_3,5,param_4,0);
  if (iVar1 < 0) {
    return iVar1;
  }
  uVar2 = FUN_1002546f(param_1,param_1,1);
  uVar4 = *param_2;
  if (*param_2 == 0) {
    *param_2 = uVar2;
    uVar4 = uVar2;
  }
  uVar3 = FUN_100059f4(this,extraout_ECX,extraout_ECX,uVar4,uVar2,param_4);
  if ((char)uVar3 == '\0') {
    return -0x7789f794;
  }
  iVar6 = 0;
  *param_7 = 0;
  if (param_5 == 0) {
    if (*(int *)((int)this + 0xb04) == 1) {
      uVar4 = FUN_10010670(param_1,param_1,uVar4,6,param_4);
      iVar5 = *(int *)((int)this + 0xb2c) * 0x228;
      *param_7 = uVar4;
      if ((*(int *)(&DAT_100ba91c + iVar5) == 0) && (*(uint *)(&DAT_100ba918 + iVar5) < uVar4)) {
        iVar6 = -0x7789fe84;
      }
    }
  }
  else if (param_5 == 3) {
    uVar3 = 0x1c;
    goto LAB_10004616;
  }
  uVar3 = FUN_10002220(param_4);
LAB_10004616:
  if (-1 < iVar6) {
    iVar6 = iVar1;
  }
  *param_8 = uVar3;
  return iVar6;
}

