/*
 * FUN_1002c5bc at 1002c5bc
 * undefined __thiscall FUN_1002c5bc(void * this, int * param_1, int * param_2, undefined4 param_3, int param_4, uint param_5, int param_6, undefined4 * param_7)
 * Address ranges: 1002c5bc-1002c6bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002c5bc(void *this,int *param_1,int *param_2,undefined4 param_3,int param_4,uint param_5,
            int param_6,undefined4 *param_7)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 extraout_DX;
  char cVar6;
  
  iVar2 = DAT_1006c210;
  *(undefined1 *)((int)param_7 + 6) = *(undefined1 *)(DAT_1006c210 + 0x7e8);
  *(undefined1 *)((int)param_7 + 7) = *(undefined1 *)(iVar2 + 0x7e8);
  cVar6 = '\x01';
  pbVar1 = (byte *)(param_6 + 4);
  if ((param_5 & 0x800) != 0) {
    if ((*pbVar1 & 1) != 0) {
      *(undefined1 *)((int)param_7 + 7) = 1;
    }
    cVar5 = cVar6;
    if ((*pbVar1 & 2) != 0) goto LAB_1002c60a;
  }
  cVar5 = '\0';
LAB_1002c60a:
  *(char *)(param_7 + 1) = cVar5;
  if (((param_5 & 0x800) == 0) || (cVar5 = cVar6, (*pbVar1 & 4) == 0)) {
    cVar5 = '\0';
  }
  *(char *)((int)param_7 + 5) = cVar5;
  uVar3 = FUN_1002c58c(param_5,param_4);
  *(char *)(param_7 + 2) = (char)uVar3;
  if ((param_5 & 0x18000) == 0x10000) {
    uVar4 = *(undefined4 *)(param_6 + 0x5c);
  }
  else {
    uVar4 = *(undefined4 *)(param_4 + 400);
  }
  *param_7 = uVar4;
  if ((param_2[2] - *param_2 != param_1[2] - *param_1) ||
     (param_2[3] - param_2[1] != param_1[3] - param_1[1])) {
    cVar6 = '\0';
  }
  param_7[3] = 3;
  if ((cVar6 != '\0') && (*(int *)((int)this + 0x1cc) == *(int *)(param_4 + 0x1cc))) {
    if ((char)uVar3 == '\0') {
      param_7[3] = (uint)((char)extraout_DX != '\0' || (char)((ushort)extraout_DX >> 8) != '\0');
    }
    else {
      param_7[3] = 2;
    }
  }
  return;
}

