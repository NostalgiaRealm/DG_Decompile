/*
 * FUN_10007c22 at 10007c22
 * undefined __thiscall FUN_10007c22(void * this, int * param_1, int param_2)
 * Address ranges: 10007c22-10007ce6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007c22(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_f0 [236];
  
  piVar1 = FUN_10007985(local_f0,*(int *)((int)this + 0x1b0) + 0x35d0);
  piVar4 = param_1;
  for (iVar2 = 0x3b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  uVar3 = 1;
LAB_10007c59:
  do {
    if (*(int *)(param_2 + 0x38 + uVar3 * 4) != 0) {
      FUN_100079f7(param_1,*(int *)((int)this + 0x1b0) + 0x35d0,uVar3,
                   *(undefined4 *)(param_2 + uVar3 * 4),'\x01');
      if (uVar3 == 5) {
        FUN_100079f7(param_1,*(int *)((int)this + 0x1b0) + 0x35d0,3,0,'\0');
        FUN_100079f7(param_1,*(int *)((int)this + 0x1b0) + 0x35d0,4,0,'\0');
        uVar3 = 6;
        goto LAB_10007c59;
      }
      if ((uVar3 == 3) || (uVar3 == 4)) {
        FUN_100079f7(param_1,*(int *)((int)this + 0x1b0) + 0x35d0,5,0,'\0');
      }
    }
    uVar3 = uVar3 + 1;
    if (0xd < uVar3) {
      return;
    }
  } while( true );
}

