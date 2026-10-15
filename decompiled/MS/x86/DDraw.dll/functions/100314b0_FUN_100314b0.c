/*
 * FUN_100314b0 at 100314b0
 * uint * __thiscall FUN_100314b0(void * this, uint * param_1, uint param_2, uint param_3, int param_4, int * param_5, char param_6)
 * Address ranges: 100314b0-10031575
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall
FUN_100314b0(void *this,uint *param_1,uint param_2,uint param_3,int param_4,int *param_5,
            char param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(DAT_1006c210 + 2000);
  uVar4 = (*param_5 * param_2) / (uint)param_5[1];
  *(undefined1 *)(param_1 + 3) = 1;
  iVar2 = param_5[2];
  *param_1 = uVar4;
  uVar5 = (iVar2 * param_3) / (uint)param_5[3];
  param_1[1] = uVar5;
  uVar7 = 1;
  if (uVar1 != 0) {
    uVar7 = uVar1;
  }
  param_1[2] = uVar7;
  if ((param_4 == 2) || (param_4 == 5)) {
    if (uVar5 < uVar4) {
      *param_1 = uVar5;
    }
    else {
      param_1[1] = uVar4;
    }
  }
  uVar6 = FUN_10003301(param_2);
  if ((char)uVar6 != '\0') {
    uVar6 = FUN_10003301(param_3);
    if ((char)uVar6 != '\0') {
      bVar3 = true;
      goto LAB_10031532;
    }
  }
  bVar3 = false;
LAB_10031532:
  if (((param_6 == '\0') && (*(char *)(DAT_1006c210 + 0x958) == '\0')) &&
     (((*(uint *)((int)this + 0x1b8) & 0x1000) != 0 || (bVar3)))) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return param_1;
}

