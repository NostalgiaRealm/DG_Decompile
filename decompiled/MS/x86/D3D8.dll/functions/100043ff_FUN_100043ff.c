/*
 * FUN_100043ff at 100043ff
 * int __thiscall FUN_100043ff(void * this, uint param_1, uint param_2, uint param_3, uint * param_4, uint param_5, int param_6, int param_7, undefined4 * param_8, uint * param_9, undefined4 * param_10)
 * Address ranges: 100043ff-10004519
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100043ff(void *this,uint param_1,uint param_2,uint param_3,uint *param_4,uint param_5,
            int param_6,int param_7,undefined4 *param_8,uint *param_9,undefined4 *param_10)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (param_8 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_8 = 0;
  iVar2 = FUN_10002833(*(void **)((int)this + 0xacc),this,*(int *)((int)this + 0xb04),
                       *(int *)((int)this + 0xb1c),param_7,param_5,4,param_6,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  uVar3 = FUN_1002546f(param_1,param_2,param_3);
  uVar4 = *param_4;
  if (*param_4 == 0) {
    *param_4 = uVar3;
    uVar4 = uVar3;
  }
  cVar1 = FUN_10005a83(this,param_1,param_2,param_3,uVar4,uVar3,param_6);
  iVar7 = -0x7789f794;
  if (cVar1 == '\0') goto LAB_1000450b;
  iVar7 = 0;
  *param_9 = 0;
  if (param_7 == 0) {
    if (*(int *)((int)this + 0xb04) == 1) {
      uVar4 = FUN_10011774(param_1,param_2,param_3,uVar4,param_6);
      iVar6 = *(int *)((int)this + 0xb2c) * 0x228;
      *param_9 = uVar4;
      if ((*(int *)(&DAT_100ba91c + iVar6) == 0) && (*(uint *)(&DAT_100ba918 + iVar6) < uVar4)) {
        iVar7 = -0x7789fe84;
      }
    }
LAB_100044f5:
    uVar5 = FUN_10002220(param_6);
  }
  else {
    if (param_7 != 3) goto LAB_100044f5;
    uVar5 = 0x1c;
  }
  *param_10 = uVar5;
LAB_1000450b:
  if (-1 < iVar7) {
    iVar7 = iVar2;
  }
  return iVar7;
}

