/*
 * FUN_1007a6aa at 1007a6aa
 * undefined __stdcall FUN_1007a6aa(int param_1, int param_2)
 * Address ranges: 1007a6aa-1007a796
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a6aa(int param_1,int param_2)

{
  void *this;
  int iVar1;
  RECT *pRVar2;
  int iVar3;
  LONG *pLVar4;
  LONG *pLVar5;
  ushort in_FPUControlWord;
  LONG local_40 [3];
  undefined4 local_34;
  LONG local_30 [6];
  undefined4 local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  char local_5;
  
  FUN_10022270(&local_5);
  local_10 = &local_14;
  local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_c = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar1 = FUN_10079dad(param_1);
  if (iVar1 != 0) {
    pLVar4 = (LONG *)(param_2 + 0x18);
    pLVar5 = local_30;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pLVar5 = *pLVar4;
      pLVar4 = pLVar4 + 1;
      pLVar5 = pLVar5 + 1;
    }
    this = (void *)(iVar1 + 8);
    local_40[2] = local_30[0];
    local_34 = local_30[1];
    local_30[5] = *(undefined4 *)(iVar1 + 0x6c);
    local_18 = *(undefined4 *)(iVar1 + 0x70);
    local_40[0] = 0;
    local_40[1] = 0;
    local_30[3] = 0;
    local_30[4] = 0;
    if (*(char *)(iVar1 + 0xbd) == '\0') {
      pRVar2 = (RECT *)(&DAT_100ba8d0 + *(int *)(iVar1 + 0xac) * 0x228);
    }
    else {
      pRVar2 = (RECT *)0x0;
    }
    FUN_1000f449(this,param_2,this,this,*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70),
                 local_40,local_30 + 3,0,0,0,pRVar2);
  }
  FUN_100222d0(&local_5);
  return;
}

