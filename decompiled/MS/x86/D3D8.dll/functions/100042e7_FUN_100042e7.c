/*
 * FUN_100042e7 at 100042e7
 * int __thiscall FUN_100042e7(void * this, uint param_1, uint param_2, uint * param_3, uint param_4, int param_5, int param_6, undefined4 * param_7, uint * param_8, undefined4 * param_9)
 * Address ranges: 100042e7-100043fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100042e7(void *this,uint param_1,uint param_2,uint *param_3,uint param_4,int param_5,int param_6
            ,undefined4 *param_7,uint *param_8,undefined4 *param_9)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_7 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_7 = 0;
  iVar1 = FUN_10002833(*(void **)((int)this + 0xacc),this,*(int *)((int)this + 0xb04),
                       *(int *)((int)this + 0xb1c),param_6,param_4,3,param_5,0);
  iVar6 = iVar1;
  if (iVar1 < 0) goto LAB_100043ef;
  uVar2 = FUN_1002546f(param_1,param_2,1);
  uVar4 = *param_3;
  if (*param_3 == 0) {
    *param_3 = uVar2;
    uVar4 = uVar2;
  }
  uVar3 = FUN_100059f4(this,param_1,param_2,uVar4,uVar2,param_5);
  iVar6 = -0x7789f794;
  if ((char)uVar3 == '\0') goto LAB_100043ef;
  iVar6 = 0;
  *param_8 = 0;
  if (param_6 == 0) {
    if (*(int *)((int)this + 0xb04) == 1) {
      uVar4 = FUN_10010670(param_1,param_2,uVar4,1,param_5);
      iVar5 = *(int *)((int)this + 0xb2c) * 0x228;
      *param_8 = uVar4;
      if ((*(int *)(&DAT_100ba91c + iVar5) == 0) && (*(uint *)(&DAT_100ba918 + iVar5) < uVar4)) {
        iVar6 = -0x7789fe84;
      }
    }
LAB_100043d6:
    uVar3 = FUN_10002220(param_5);
  }
  else {
    if (param_6 != 3) goto LAB_100043d6;
    uVar3 = 0x1c;
  }
  *param_9 = uVar3;
LAB_100043ef:
  if (-1 < iVar6) {
    iVar6 = iVar1;
  }
  return iVar6;
}

