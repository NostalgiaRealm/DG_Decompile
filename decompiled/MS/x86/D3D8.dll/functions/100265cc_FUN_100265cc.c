/*
 * FUN_100265cc at 100265cc
 * int __thiscall FUN_100265cc(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 100265cc-100266c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100265cc(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  iVar4 = 0;
  if (*(int *)((int)this + 0x24) == 0) {
    if (*(int *)((int)this + 0x20) == 0) {
      iVar4 = (**(code **)(**(int **)((int)this + 0x50) + 0x2c))
                        (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),param_1
                         ,param_2,param_3,param_4);
    }
    else {
      FUN_100259aa((int)this);
      cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x14))
                        (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
      if (cVar1 != '\0') {
        bVar2 = FUN_10025bee(this,(uint)*(byte *)((int)this + 0x48));
        iVar4 = (uint)(bVar2 ^ 1) * 2;
        (**(code **)(**(int **)((int)this + 0x50) + 0x18))
                  (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
        *(undefined1 *)((int)this + 0xae) = 0;
      }
      *param_3 = *(undefined4 *)((int)this + 0x20);
      *param_4 = *(undefined4 *)((int)this + 0x10);
    }
  }
  else {
    cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x14))
                      (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
    if (cVar1 != '\0') {
      (**(code **)(**(int **)((int)this + 0x50) + 0x18))
                (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
      if (*(int *)((int)this + 0x24) != 0) {
        puVar5 = *(undefined4 **)((int)this + 0x28);
        for (uVar3 = *(uint *)((int)this + 0x2c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        puVar6 = (undefined1 *)
                 (*(int *)((int)this + 0x28) + (*(uint *)((int)this + 0x2c) & 0xfffffffc));
        for (uVar3 = *(uint *)((int)this + 0x2c) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      *(undefined1 *)((int)this + 0xae) = 0;
    }
    *param_3 = *(undefined4 *)((int)this + 0x20);
    *param_4 = *(undefined4 *)((int)this + 0x10);
    *param_3 = *(undefined4 *)((int)this + 0x20);
    *param_4 = *(undefined4 *)((int)this + 0x10);
  }
  return iVar4;
}

