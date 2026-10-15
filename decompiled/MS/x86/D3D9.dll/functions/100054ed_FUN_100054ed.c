/*
 * FUN_100054ed at 100054ed
 * undefined4 __thiscall FUN_100054ed(void * this, uint param_1, int * param_2, int param_3, int param_4)
 * Address ranges: 100054ed-10005592
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100054ed(void *this,uint param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x8876086c;
  if ((param_1 < 0x10) && ((param_2 == (int *)0x0 || (param_2[0x10] != 3)))) {
    if (*(char *)((int)this + 0x3c4) == '\0') {
      uVar4 = FUN_10006709(this,param_1,param_2,param_3,param_4);
      if ((char)uVar4 != '\0') {
        uVar5 = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)((int)this + 0x3b4) + *(int *)((int)this + 0x3c0) * 4);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))();
      }
      piVar2 = *(int **)(iVar1 + 0xaae4 + param_1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
      *(int *)(iVar1 + 0xab24 + param_1 * 4) = param_3;
      *(int *)(iVar1 + 0xab64 + param_1 * 4) = param_4;
      *(int **)(iVar1 + 0xaae4 + param_1 * 4) = param_2;
      pbVar3 = (byte *)(iVar1 + 0xac18 + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
      *pbVar3 = *pbVar3 | '\x01' << (param_1 & 7);
      uVar5 = 0;
    }
  }
  return uVar5;
}

