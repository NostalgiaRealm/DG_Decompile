/*
 * FUN_10004a14 at 10004a14
 * int __thiscall FUN_10004a14(void * this, uint param_1, uint param_2, uint * param_3, uint param_4, int param_5, int param_6, undefined4 * param_7, uint * param_8, undefined4 * param_9)
 * Address ranges: 10004a14-10004b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10004a14(void *this,uint param_1,uint param_2,uint *param_3,uint param_4,int param_5,int param_6
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
  iVar1 = FUN_100029a5(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdf0),
                       *(int *)((int)this + 0xdc8),*(int *)((int)this + 0xde0),param_6,param_4,3,
                       param_5,(undefined *)0x0);
  iVar6 = iVar1;
  if (iVar1 == 0x876086f) {
    iVar6 = 0;
    *param_3 = 1;
  }
  if (((param_4 & 0x400) != 0) && (1 < *param_3)) {
    iVar6 = -0x7789f794;
  }
  if (iVar6 < 0) goto LAB_10004b3f;
  uVar2 = FUN_1002cae1(param_1,param_2,1);
  uVar4 = *param_3;
  if (*param_3 == 0) {
    *param_3 = uVar2;
    uVar4 = uVar2;
  }
  uVar3 = FUN_100062df(this,param_1,param_2,uVar4,uVar2,param_5);
  iVar6 = -0x7789f794;
  if ((char)uVar3 == '\0') goto LAB_10004b3f;
  iVar6 = 0;
  *param_8 = 0;
  if (param_6 == 0) {
    if (*(int *)((int)this + 0xdc8) == 1) {
      uVar4 = FUN_10014561(param_1,param_2,uVar4,1,param_5);
      iVar5 = *(int *)((int)this + 0xdf0) * 0x228;
      *param_8 = uVar4;
      if ((*(int *)(&DAT_100df4e4 + iVar5) == 0) && (*(uint *)(&DAT_100df4e0 + iVar5) < uVar4)) {
        iVar6 = -0x7789fe84;
      }
    }
LAB_10004b29:
    uVar3 = FUN_100020ae(param_5);
  }
  else {
    if (param_6 != 3) goto LAB_10004b29;
    uVar3 = 0x2a;
  }
  *param_9 = uVar3;
LAB_10004b3f:
  if (-1 < iVar6) {
    iVar6 = iVar1;
  }
  return iVar6;
}

