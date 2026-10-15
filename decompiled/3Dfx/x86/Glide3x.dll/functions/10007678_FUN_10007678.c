/*
 * FUN_10007678 at 10007678
 * undefined __thiscall FUN_10007678(void * this, int * param_1, int param_2)
 * Address ranges: 10007678-1000773c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007678(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_f0 [236];
  
  piVar1 = FUN_100073db(local_f0,*(int *)((int)this + 0x1b0) + 0x3250);
  piVar4 = param_1;
  for (iVar2 = 0x3b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  uVar3 = 1;
LAB_100076af:
  do {
    if (*(int *)(param_2 + 0x38 + uVar3 * 4) != 0) {
      FUN_1000744d(param_1,*(int *)((int)this + 0x1b0) + 0x3250,uVar3,
                   *(undefined4 *)(param_2 + uVar3 * 4),'\x01');
      if (uVar3 == 5) {
        FUN_1000744d(param_1,*(int *)((int)this + 0x1b0) + 0x3250,3,0,'\0');
        FUN_1000744d(param_1,*(int *)((int)this + 0x1b0) + 0x3250,4,0,'\0');
        uVar3 = 6;
        goto LAB_100076af;
      }
      if ((uVar3 == 3) || (uVar3 == 4)) {
        FUN_1000744d(param_1,*(int *)((int)this + 0x1b0) + 0x3250,5,0,'\0');
      }
    }
    uVar3 = uVar3 + 1;
    if (0xd < uVar3) {
      return;
    }
  } while( true );
}

