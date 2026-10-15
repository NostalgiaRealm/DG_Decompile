/*
 * FUN_10047461 at 10047461
 * undefined __thiscall FUN_10047461(void * this, char param_1)
 * Address ranges: 10047461-100475e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10047461(void *this,char param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  if (*(int *)((int)this + 0x1570) != 0) {
    uVar1 = *(undefined1 *)((int)this + 0x228);
    *(undefined1 *)((int)this + 0x228) = *(undefined1 *)((int)this + 0x227);
    FUN_1003dd9f(this);
    FUN_1003e261(this,(uint)*(byte *)((int)this + 0xa85));
    FUN_1003e364((int)this);
    FUN_1003e3bb((int)this);
    FUN_1003f577((int)this);
    (**(code **)(**(int **)((int)this + 0x14) + 0x20))
              (*(undefined4 *)((int)this + 0x1568),(int)this + 0x1590,
               *(undefined4 *)((int)this + 0x1588),*(undefined4 *)((int)this + 0x159c),
               *(int *)((int)this + 0x1580) + 1,*(undefined4 *)((int)this + 0x158c),
               *(int *)((int)this + 0x1574) * *(int *)((int)this + 0x1570),0,0,0);
    *(undefined1 *)((int)this + 0x228) = uVar1;
    if ((*(char *)((int)this + 0x9d9) == '\0') &&
       (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
      bVar2 = false;
      if (*(char *)((int)this + 0xfd) != '\0') goto LAB_1004751d;
    }
    else {
      bVar2 = true;
LAB_1004751d:
      (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
      (**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8));
      if ((bVar2) &&
         ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                    (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8)),
         *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
        DebugBreak();
      }
    }
    if (*(char *)((int)this + 0xfe) == '\0') {
      (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
      if (*(int **)((int)this + 0x28) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x28) + 0xc))();
      }
      *(undefined1 *)((int)this + 0xfe) = 1;
    }
    if (*(char *)((int)this + 0xff) != '\0') {
      if (*(int *)((int)this + 0x2f8) != 0) {
        (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50) + 0x20))
                  (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8),1);
      }
      *(undefined1 *)((int)this + 0xff) = 0;
    }
    if (*(int *)((int)this + 0x1570) != 0) goto LAB_100475c9;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_100475c9:
  *(undefined4 *)((int)this + 0x1570) = 0;
  *(undefined4 *)((int)this + 0x1580) = 0;
  *(undefined4 *)((int)this + 0x156c) = 0;
  return;
}

