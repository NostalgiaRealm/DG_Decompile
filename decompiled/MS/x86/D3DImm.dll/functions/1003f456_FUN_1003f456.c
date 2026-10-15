/*
 * FUN_1003f456 at 1003f456
 * uint __thiscall FUN_1003f456(void * this, int * param_1)
 * Address ranges: 1003f456-1003f50d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003f456(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int *local_c;
  void *local_8;
  
  piVar1 = param_1;
  local_8 = this;
  piVar2 = (int *)(**(code **)(*param_1 + 0x40))();
  puVar3 = (uint *)FUN_10042906((void *)((int)this + 0x17c8),(uint *)&param_1);
  if (puVar3 == (uint *)0x0) {
    piVar4 = (int *)0x0;
    uVar5 = 0;
    local_c = *(int **)(*(int *)((int)local_8 + 0xa70) + 0xc);
    do {
      if ((uint)local_c[0x28] <= uVar5) break;
      piVar4 = (int *)0x0;
      param_1 = piVar1;
      puVar3 = (uint *)FUN_10042906((void *)(*(int *)(local_c[0x27] + uVar5 * 4) + 0x17c8),
                                    (uint *)&param_1);
      if (puVar3 != (uint *)0x0) {
        piVar4 = (int *)*puVar3;
      }
      uVar5 = uVar5 + 1;
    } while (piVar4 == (int *)0x0);
    local_c = piVar1;
    if (piVar4 == (int *)0x0) {
      piVar4 = piVar2;
    }
    param_1 = piVar4;
    FUN_100429b7((void *)((int)local_8 + 0x17b8),(uint *)&param_1,&local_c);
    FUN_10042945((void *)((int)this + 0x17c8),(uint *)&local_c,&param_1);
  }
  else {
    piVar4 = (int *)*puVar3;
  }
  return (uint)piVar4;
}

