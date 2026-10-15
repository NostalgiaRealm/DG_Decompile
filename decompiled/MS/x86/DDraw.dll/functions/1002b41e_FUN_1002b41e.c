/*
 * FUN_1002b41e at 1002b41e
 * undefined4 __thiscall FUN_1002b41e(void * this, int param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 1002b41e-1002b4f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002b41e(void *this,int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  while (*(int *)(param_1 + iVar2 * 4) == (&DAT_10070a10)[iVar2]) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 0x80070057;
    }
  }
  if (param_3 == (uint *)0x0) {
    return 0x80070057;
  }
  uVar4 = 0;
  if (*(uint *)((int)this + 4) == 0) {
    return 0x887600ff;
  }
  do {
    iVar2 = *(int *)this + uVar4 * 0x20;
    iVar3 = 0;
    while (*(int *)(iVar2 + iVar3 * 4) == *(int *)(param_1 + iVar3 * 4)) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 4) {
        if (*(char *)(iVar2 + 0x1c) != '\0') {
          return 0x887602b3;
        }
        uVar4 = *(uint *)(iVar2 + 0x14);
        if (uVar4 == 0) {
          uVar4 = 4;
          if (*param_3 < 4) goto LAB_1002b4ec;
          if (param_2 == (undefined4 *)0x0) {
            return 0x80070057;
          }
          piVar1 = *(int **)(iVar2 + 0x10);
          *param_2 = piVar1;
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        else {
          if (*param_3 < uVar4) {
LAB_1002b4ec:
            *param_3 = uVar4;
            return 0x887602b2;
          }
          if (param_2 == (undefined4 *)0x0) {
            return 0x80070057;
          }
          FUN_10060d80(param_2,*(undefined4 **)(iVar2 + 0x10),uVar4);
        }
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    if (*(uint *)((int)this + 4) <= uVar4) {
      return 0x887600ff;
    }
  } while( true );
}

