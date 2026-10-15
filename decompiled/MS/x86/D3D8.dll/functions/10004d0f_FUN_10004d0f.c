/*
 * FUN_10004d0f at 10004d0f
 * undefined4 __thiscall FUN_10004d0f(void * this, uint param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 10004d0f-10004db4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10004d0f(void *this,uint param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x8876086c;
  if ((param_1 < 0x10) && ((param_2 == (int *)0x0 || (param_2[0x10] != 3)))) {
    if (*(char *)((int)this + 0x220) == '\0') {
      uVar4 = FUN_10005e1e(this,param_1,param_2,0,param_4);
      if ((char)uVar4 != '\0') {
        uVar5 = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))();
      }
      piVar2 = *(int **)(iVar1 + 0x9270 + param_1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
      *(int *)(iVar1 + 0x92f0 + param_1 * 4) = param_4;
      *(int **)(iVar1 + 0x9270 + param_1 * 4) = param_2;
      *(undefined4 *)(iVar1 + 0x92b0 + param_1 * 4) = 0;
      pbVar3 = (byte *)(iVar1 + 0x939c + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
      *pbVar3 = *pbVar3 | '\x01' << (param_1 & 7);
      uVar5 = 0;
    }
  }
  return uVar5;
}

