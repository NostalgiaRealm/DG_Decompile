/*
 * FUN_10044f84 at 10044f84
 * undefined4 __thiscall FUN_10044f84(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, char param_5)
 * Address ranges: 10044f84-100450a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10044f84(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_12c [256];
  undefined4 local_2c;
  undefined4 local_28;
  code *local_8;
  
  iVar5 = param_1 * 0x28;
  puVar4 = (undefined4 *)((int)this + param_1 * 0x1510 + 0x510);
  if ((*(char *)(iVar5 + 0x28 + (int)this) != '\0') &&
     (iVar1 = *(int *)(iVar5 + 0x24 + (int)this) + 1, *(int *)(iVar5 + 0x24 + (int)this) = iVar1,
     iVar1 == 1)) {
    if (param_2 == 5) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(iVar5 + 0x18 + (int)this);
    }
    puVar4[5] = 0;
    local_8 = *(code **)((int)this + 700);
    iVar1 = (*local_8)(piVar2,param_2,0,0,param_3,param_4,7,puVar4,puVar4 + 4,puVar4 + 1);
    if (iVar1 < 0) {
      if (param_5 != '\0') {
        iVar1 = (*local_8)(0,5,0,0,param_3,param_4,7,puVar4,puVar4 + 4,puVar4 + 1);
        if (-1 < iVar1) {
          (*(code *)**(undefined4 **)*puVar4)((undefined4 *)*puVar4,&DAT_1005acac,puVar4 + 2);
          puVar4[3] = 5;
          goto LAB_1004509e;
        }
      }
      piVar2 = (int *)(iVar5 + 0x24 + (int)this);
      *piVar2 = *piVar2 + -1;
    }
    else {
      (*(code *)**(undefined4 **)*puVar4)((undefined4 *)*puVar4,&DAT_1005acac,puVar4 + 2);
      puVar4[3] = param_2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x20))(piVar2,local_12c);
        puVar4[5] = local_2c;
        puVar4[6] = local_28;
      }
      if (*(int *)((int)this + 0x2b8) != 0) {
        uVar3 = FUN_1005240d(FUN_100525d8);
        if ((char)uVar3 != '\0') goto LAB_1004509e;
      }
      *(undefined4 *)(iVar5 + 0x30 + (int)this) = 0;
      *(undefined4 *)(iVar5 + 0x34 + (int)this) = 0;
    }
  }
LAB_1004509e:
  return *(undefined4 *)(iVar5 + 0x24 + (int)this);
}

