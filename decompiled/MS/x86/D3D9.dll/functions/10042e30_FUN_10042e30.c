/*
 * FUN_10042e30 at 10042e30
 * undefined __thiscall FUN_10042e30(void * this, int * param_1, int param_2, int * param_3)
 * Address ranges: 10042e30-10042f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10042e30(void *this,int *param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  char in_stack_0000001c;
  
  piVar2 = param_3;
  FUN_10042220(this,0,0,0);
  FUN_1003ccc0(this,*(uint *)((int)this + (int)param_1 * 4 + 0xfb3c));
  *(undefined4 *)((int)this + (int)param_1 * 4 + 0xfb3c) = 0;
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + 0xfc20);
  *pbVar1 = *pbVar1 & ~('\x01' << ((uint)param_1 & 7));
  if (param_3 == (int *)0x0) {
    FUN_10052810(this,param_1,param_2,(int *)0x0,(int *)0x0);
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0xfabc) = 0;
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0xfafc) = 0;
    return;
  }
  param_3 = (int *)0x0;
  iVar4 = (**(code **)(*piVar2 + 4))();
  if (iVar4 == 1) {
    param_3 = piVar2 + -7;
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0xfabc) = 0;
    *(int **)((int)this + (int)param_1 * 4 + 0xfafc) = param_3;
    piVar5 = (int *)0x0;
    goto LAB_10042efb;
  }
  piVar5 = piVar2 + -0x30;
  if (in_stack_0000001c == '\0') {
LAB_10042ec5:
    uVar3 = 0;
  }
  else {
    iVar4 = (**(code **)(*piVar2 + 0x24))();
    if ((iVar4 != 1) || (piVar2[-0x27] != 1)) goto LAB_10042ec5;
    uVar3 = 1;
  }
  *(undefined1 *)((int)piVar2 + 0x6e) = uVar3;
  *(int **)((int)this + (int)param_1 * 4 + 0xfabc) = piVar5;
  *(undefined4 *)((int)this + (int)param_1 * 4 + 0xfafc) = 0;
  iVar4 = piVar2[-0x23];
  if (((iVar4 == 3) || (iVar4 == 4)) || (iVar4 == 5)) {
    pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + 0xfc20);
    *pbVar1 = *pbVar1 | '\x01' << ((uint)param_1 & 7);
  }
LAB_10042efb:
  FUN_10052810(this,param_1,param_2,piVar5,param_3);
  *(undefined1 *)((int)this + 0xfd9b) = 1;
  return;
}

